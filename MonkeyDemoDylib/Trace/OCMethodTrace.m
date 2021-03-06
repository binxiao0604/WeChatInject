/*
 * OCMethodTrace.m
 * OCMethodTrace
 *
 * https://github.com/omxcodec/OCMethodTrace.git
 *
 * Copyright (C) 2018 Michael Chen <omxcodec@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "OCMethodTrace.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <execinfo.h>
#import <dlfcn.h>
#import <pthread.h>
#import "OCSelectorTrampolines.h"

#define OMT_LOG(_level_, _fmt_, ...)                                                                                                              \
    do {                                                                                                                                          \
        if ((_level_) <= [OCMethodTrace sharedInstance].logLevel) {                                                                               \
            if ([OCMethodTrace sharedInstance].delegate && [[OCMethodTrace sharedInstance].delegate respondsToSelector:@selector(log:format:)]) { \
                [[OCMethodTrace sharedInstance].delegate log:OMTLogLevelDebug format:(_fmt_), ##__VA_ARGS__];                                     \
            }                                                                                                                                     \
            else {                                                                                                                                \
                NSLog((_fmt_), ##__VA_ARGS__);                                                                                                    \
            }                                                                                                                                     \
        }                                                                                                                                         \
    } while (0)

#define OMT_LOGE(_fmt_, ...) OMT_LOG(OMTLogLevelError, (_fmt_), ##__VA_ARGS__)
#define OMT_LOGD(_fmt_, ...) OMT_LOG(OMTLogLevelDebug, (_fmt_), ##__VA_ARGS__)

static NSString *const OMTMessageTempPrefix = @"__OMTMessageTemp_";
static NSString *const OMTMessageFinalPrefix = @"__OMTMessageFinal_";
static NSString *const OMTBlockRunBeforeSelector = @"runBefore:";
static NSString *const OMTBlockRunAfterSelector = @"runAfter:";
static NSString *const OMTDescriptionWithTargetSelector = @"descriptionWithTarget:";

// trace??????
typedef NS_ENUM(NSUInteger, OMTTracePosition) {
    OMTTracePositionBefore = 1 << 0, // before
    OMTTracePositionAfter = 1 << 1, // after
};

// ???????????????????????????????????????
typedef NS_ENUM(NSUInteger, OMTErrorCode) {
    OMTErrorNoError, // NERR ????????????
    OMTErrorSelectorPassThrough, // SPTH ???????????????
    OMTErrorSelectorAlreadyHooked, // SAHK ??????hook???
    OMTErrorSelectorInUserBlacklist, // SIUB ????????????????????????
    OMTErrorClassInSelfBlacklist, // CISB ???????????????????????????
    OMTErrorSelectorInSelfBlacklist, // SISB ????????????sel????????????
    OMTErrorSelectorUnsuppotedMethodSignature, // SUMS ???????????????????????????(??????crash???????????????)
    OMTErrorSelectorUnsuppotedEncodeType, // SUEY ???????????????????????????(???????????????????????????)
    OMTErrorDoesNotRespondToMethod, // NMTD ??????method
    OMTErrorDoesNotRespondToSelector, // NSEL ??????sel
    OMTErrorDoesNotRespondToIMP, // NIMP ??????IMP
    OMTErrorSwizzleMethodFailed, // SMDF ??????????????????
};

#define LOG_LEVEL_4_ERROR_CODE(_errorCode_) (((_errorCode_) >= OMTErrorSelectorUnsuppotedMethodSignature) ? OMTLogLevelError : OMTLogLevelDebug)

////////////////////////////////////////////////////////////////////////////////
#pragma mark - C Helper Define

// ??????????????????
static void swizzle_instance_method(Class cls, SEL originSel, SEL newSel);
// ???????????????
static void swizzle_class_method(Class cls, SEL originSel, SEL newSel);

// ??????????????????????????????
static BOOL omt_isTypeQualifier(const char argumentType);
// ?????????struct??????
static BOOL omt_isStructType(const char *argumentType);
// ??????struct?????????
static NSString *omt_structName(const char *argumentType);
// ?????????union??????
static BOOL omt_isUnionType(const char *argumentType);
// ??????union?????????
static NSString *omt_unionName(const char *argumentType);
static BOOL isCGRect(const char *type);
static BOOL isCGPoint(const char *type);
static BOOL isCGSize(const char *type);
static BOOL isCGVector(const char *type);
static BOOL isUIOffset(const char *type);
static BOOL isUIEdgeInsets(const char *type);
static BOOL isCGAffineTransform(const char *type);

////////////////////////////////////////////////////////////////////////////////
#pragma mark - Class Define

@interface OMTBlock : NSObject

@property (nonatomic, strong) NSString *className;
@property (nonatomic, copy) OMTConditionBlock condition;
@property (nonatomic, copy) OMTBeforeBlock before;
@property (nonatomic, copy) OMTAfterBlock after;

- (BOOL)runCondition:(SEL)sel;
- (void)runBefore:(id)target class:(Class)cls sel:(SEL)sel args:(NSArray *)args deep:(int)deep;
- (void)runAfter:(id)target class:(Class)cls sel:(SEL)sel ret:(id)ret deep:(int)deep interval:(NSTimeInterval)interval;

@end

@interface OMTMessageStub : NSObject

@property (nonatomic, unsafe_unretained) id target;
@property (nonatomic, assign) SEL selector;

- (instancetype)initWithTarget:(id)target selector:(SEL)aSelector;

@end

@interface NSObject (OCMethodTrace)

// ???????????????
+ (id)omt_forwardingTargetForSelector:(SEL)aSelector;
// ??????????????????
- (id)omt_forwardingTargetForSelector:(SEL)aSelector;

@end

@interface NSInvocation (OCMethodTrace)

// ?????????????????????
- (Class)omt_originClass;
// ????????????????????????
- (SEL)omt_originSelector;
// ?????????????????????
- (id)omt_getReturnValue;
// ??????????????????
- (NSArray *)omt_getArguments;

@end

@interface OCMethodTrace () {
    pthread_mutex_t _blockMutex;
    pthread_mutex_t _deepMutex;
}

@property (nonatomic, strong) NSArray *defaultClassBlackList;
@property (nonatomic, strong) NSArray *defaultMethodBlackList;
@property (nonatomic, strong) NSDictionary *supportedTypeDict;
@property (nonatomic, strong) NSDictionary *tracePositionDict;
@property (nonatomic, strong) NSMutableDictionary *blockCache;
@property (nonatomic, assign) int deep;

// ??????????????????????????????
- (void)initDefaultClassBlackList;
- (void)initDefaultMethodBlackList;
// ???????????????????????????????????????
- (void)initSupportedTypeDict;
// ?????????trace????????????
- (void)initTracePositionDict;
// ?????????????????????????????????
+ (NSString *)errorString:(OMTErrorCode)errorCode;
// ???????????????????????????????????????????????????????????????
+ (BOOL)detectInfiniteLoopAtSelectorArray:(NSArray *)selectorArray;
// ??????target???description
- (NSString *)descriptionWithTarget:(id)target class:(Class)cls selector:(SEL)sel targetPosition:(OMTTargetPosition)targetPosition;
// ??????????????????????????????????????????
- (BOOL)isClassInBlackList:(NSString *)className;
// ?????????????????????????????????????????????
- (BOOL)isSelectorInBlackList:(NSString *)methodName;
// ????????????????????????????????????
- (BOOL)isSupportedType:(NSString *)typeEncode;
// ????????????????????????trace??????
- (OMTTracePosition)tracePosition:(NSString *)methodName;
// block??????
- (void)setBlock:(OMTBlock *)block forKey:(NSString *)key;
- (OMTBlock *)blockforKey:(NSString *)key;
- (OMTBlock *)blockWithTarget:(id)target;
// ????????????deep++???????????????
- (int)atomicAddDeep;
// ????????????deep--
- (void)atomicIncDeep;
// ????????????????????????????????????
- (void)traceMethodWithClass:(Class)cls condition:(OMTConditionBlock)condition;
// ??????????????????????????????
- (OMTErrorCode)isTraceSupportedWithClass:(Class)cls method:(Method)method;
// ????????????
- (OMTErrorCode)swizzleMethodWithClass:(Class)cls selector:(SEL)selector;
// ????????????
- (void)omt_forwardInvocation:(NSInvocation *)invocation;

@end

////////////////////////////////////////////////////////////////////////////////

#pragma mark - C Helper

static void swizzle_instance_method(Class cls, SEL originSel, SEL newSel)
{
    Method originMethod = class_getInstanceMethod(cls, originSel);
    Method newMethod = class_getInstanceMethod(cls, newSel);

    if (class_addMethod(cls, originSel, method_getImplementation(newMethod), method_getTypeEncoding(newMethod))) {
        class_replaceMethod(cls, newSel, method_getImplementation(originMethod), method_getTypeEncoding(originMethod));
    }
    else {
        method_exchangeImplementations(originMethod, newMethod);
    }
}

static void swizzle_class_method(Class cls, SEL originSel, SEL newSel)
{
    Class metaClass = objc_getMetaClass([NSStringFromClass(cls) UTF8String]);

    Method originMethod = class_getInstanceMethod(metaClass, originSel);
    Method newMethod = class_getInstanceMethod(metaClass, newSel);

    if (class_addMethod([metaClass class], originSel, method_getImplementation(newMethod), method_getTypeEncoding(newMethod))) {
        class_replaceMethod([metaClass class], newSel, method_getImplementation(originMethod), method_getTypeEncoding(originMethod));
    }
    else {
        method_exchangeImplementations(originMethod, newMethod);
    }
}

static BOOL omt_isTypeQualifier(const char argumentType)
{
    // Table 6-2 Objective-C method encodings
    static const char supportedTypeQualifierList[] = {'r', 'n', 'N', 'o', 'O', 'R', 'V'};
    static const size_t kNumSupportedTypeQualifier = sizeof(supportedTypeQualifierList) / sizeof(supportedTypeQualifierList[0]);

    size_t i;
    for (i = 0; i < kNumSupportedTypeQualifier; i++) {
        if (argumentType == supportedTypeQualifierList[i]) {
            return YES;
        }
    }
    return NO;
}

static BOOL omt_isStructType(const char *argumentType)
{
    NSString *typeString = [NSString stringWithUTF8String:argumentType];
    return ([typeString hasPrefix:@"{"] && [typeString hasSuffix:@"}"]);
}

static NSString *omt_structName(const char *argumentType)
{
    NSString *typeString = [NSString stringWithUTF8String:argumentType];
    NSUInteger start = [typeString rangeOfString:@"{"].location;
    NSUInteger end = [typeString rangeOfString:@"="].location;
    if (end > start) {
        return [typeString substringWithRange:NSMakeRange(start + 1, end - start - 1)];
    }
    else {
        return nil;
    }
}

static BOOL omt_isUnionType(const char *argumentType)
{
    NSString *typeString = [NSString stringWithUTF8String:argumentType];
    return ([typeString hasPrefix:@"("] && [typeString hasSuffix:@")"]);
}

static NSString *omt_unionName(const char *argumentType)
{
    NSString *typeString = [NSString stringWithUTF8String:argumentType];
    NSUInteger start = [typeString rangeOfString:@"("].location;
    NSUInteger end = [typeString rangeOfString:@"="].location;
    if (end > start) {
        return [typeString substringWithRange:NSMakeRange(start + 1, end - start - 1)];
    }
    else {
        return nil;
    }
}

static BOOL isCGRect(const char *type)
{
    return [omt_structName(type) isEqualToString:@"CGRect"];
}
static BOOL isCGPoint(const char *type)
{
    return [omt_structName(type) isEqualToString:@"CGPoint"];
}
static BOOL isCGSize(const char *type)
{
    return [omt_structName(type) isEqualToString:@"CGSize"];
}
static BOOL isCGVector(const char *type)
{
    return [omt_structName(type) isEqualToString:@"CGVector"];
}
static BOOL isUIOffset(const char *type)
{
    return [omt_structName(type) isEqualToString:@"UIOffset"];
}
static BOOL isUIEdgeInsets(const char *type)
{
    return [omt_structName(type) isEqualToString:@"UIEdgeInsets"];
}
static BOOL isCGAffineTransform(const char *type)
{
    return [omt_structName(type) isEqualToString:@"CGAffineTransform"];
}

////////////////////////////////////////////////////////////////////////////////
#pragma mark - OCMethodTrace

@implementation OCMethodTrace

////////////////////////////////////////////////////////////////////////////////

#pragma mark - Public OCMethodTrace API

+ (OCMethodTrace *)sharedInstance
{
    static OCMethodTrace *instance = nil;
    static dispatch_once_t pred;
    dispatch_once(&pred, ^{
      instance = [[OCMethodTrace alloc] init];
    });
    return instance;
}

- (void)traceMethodWithClass:(Class)cls
                   condition:(OMTConditionBlock)condition
                      before:(OMTBeforeBlock)before
                       after:(OMTAfterBlock)after
{
#ifndef DEBUG
    return;
#endif

    // ????????????????????????
    if ([self isClassInBlackList:NSStringFromClass(cls)]) {
        OMT_LOG(OMTLogLevelDebug, @"[%@] trace class: %@",
                [self.class errorString:OMTErrorClassInSelfBlacklist],
                NSStringFromClass(cls));
        return;
    }

    // ???????????????????????????blockCache???????????????
    if (cls && ![self blockforKey:NSStringFromClass(cls)]) {
        OMTBlock *block = [[OMTBlock alloc] init];
        block.className = NSStringFromClass(cls);
        block.condition = condition;
        block.before = before;
        block.after = after;
        [self setBlock:block forKey:block.className];
    }

    // ??????????????????
    [self traceMethodWithClass:cls condition:condition];

    // ???????????????
    Class metaCls = object_getClass(cls);
    if (class_isMetaClass(metaCls)) {
        [self traceMethodWithClass:metaCls condition:condition];
    }
}

////////////////////////////////////////////////////////////////////////////////
#pragma mark - Private OCMethodTrace API

- (instancetype)init
{
    self = [super init];
    if (self) {
        // ??????ANYMethodLog?????????
        [self initDefaultClassBlackList];
        [self initDefaultMethodBlackList];
        [self initSupportedTypeDict];
        [self initTracePositionDict];

        self.disableTrace = NO;
        self.logLevel = OMTLogLevelDebug;
        self.blockCache = [NSMutableDictionary dictionary];
        self.deep = 0;

        pthread_mutex_init(&_blockMutex, NULL);
        pthread_mutex_init(&_deepMutex, NULL);
    }
    return self;
}

- (void)dealloc
{
    pthread_mutex_destroy(&_blockMutex);
    pthread_mutex_destroy(&_deepMutex);
}

- (void)initDefaultClassBlackList
{
    self.defaultClassBlackList = @[
        @"OCMethodTrace",
        @"OMTBlock",
        @"OMTMessageStub",
        @"NSMethodSignature",
        @"NSInvocation",
    ];
}

- (void)initDefaultMethodBlackList
{
    self.defaultMethodBlackList = @[
        @".cxx_destruct",
        @"_isDeallocating",
        @"release",
        @"autorelease",
        @"recycle",
        @"retain",
        @"Retain",
        @"_tryRetain",
        @"copy",
        @"copyWithZone:",
        @"mutableCopyWithZone:",
        @"nsis_descriptionOfVariable:",
        @"respondsToSelector:",
        @"class",
        @"methodSignatureForSelector:",
        @"allowsWeakReference",
        @"retainWeakReference",
        @"forwardInvocation:",
        @"description",
        @"sharedInstance",
        @"SharedInstance",
        @"getInstance",
        @"GetInstance",
    ];
}

- (void)initSupportedTypeDict
{
    // https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Articles/ocrtTypeEncodings.html#//apple_ref/doc/uid/TP40008048-CH100-SW1

    // Table 6-1  Objective-C type encodings
    self.supportedTypeDict = @{ [NSString stringWithUTF8String:@encode(char)] : @"(char)",
                                [NSString stringWithUTF8String:@encode(int)] : @"(int)",
                                [NSString stringWithUTF8String:@encode(short)] : @"(short)",
                                [NSString stringWithUTF8String:@encode(long)] : @"(long)",
                                [NSString stringWithUTF8String:@encode(long long)] : @"(long long)",
                                [NSString stringWithUTF8String:@encode(unsigned char)] : @"(unsigned char))",
                                [NSString stringWithUTF8String:@encode(unsigned int)] : @"(unsigned int)",
                                [NSString stringWithUTF8String:@encode(unsigned short)] : @"(unsigned short)",
                                [NSString stringWithUTF8String:@encode(unsigned long)] : @"(unsigned long)",
                                [NSString stringWithUTF8String:@encode(unsigned long long)] : @"(unsigned long long)",
                                [NSString stringWithUTF8String:@encode(float)] : @"(float)",
                                [NSString stringWithUTF8String:@encode(double)] : @"(double)",
                                [NSString stringWithUTF8String:@encode(BOOL)] : @"(BOOL)",
                                [NSString stringWithUTF8String:@encode(void)] : @"(void)",
                                [NSString stringWithUTF8String:@encode(char *)] : @"(char *)",
                                [NSString stringWithUTF8String:@encode(id)] : @"(id)",
                                [NSString stringWithUTF8String:@encode(Class)] : @"(Class)",
                                [NSString stringWithUTF8String:@encode(SEL)] : @"(SEL)",
                                [NSString stringWithUTF8String:@encode(CGRect)] : @"(CGRect)",
                                [NSString stringWithUTF8String:@encode(CGPoint)] : @"(CGPoint)",
                                [NSString stringWithUTF8String:@encode(CGSize)] : @"(CGSize)",
                                [NSString stringWithUTF8String:@encode(CGVector)] : @"(CGVector)",
                                [NSString stringWithUTF8String:@encode(CGAffineTransform)] : @"(CGAffineTransform)",
                                [NSString stringWithUTF8String:@encode(UIOffset)] : @"(UIOffset)",
                                [NSString stringWithUTF8String:@encode(UIEdgeInsets)] : @"(UIEdgeInsets)",
                                @"@?" : @"(block)", // block??????
    }; // ??????????????????
}

- (void)initTracePositionDict
{
    // @interface NSObject
    self.tracePositionDict = @{ @"initialize" : @(OMTTracePositionBefore | OMTTracePositionAfter),
                                @"init" : @(OMTTracePositionBefore | OMTTracePositionAfter),
                                @"new" : @(OMTTracePositionBefore | OMTTracePositionAfter),
                                @"allocWithZone:" : @(OMTTracePositionBefore | OMTTracePositionAfter),
                                @"alloc" : @(OMTTracePositionBefore | OMTTracePositionAfter),
                                @"dealloc" : @(OMTTracePositionBefore),
                                @"finalize" : @(OMTTracePositionBefore),
    }; // ??????????????????
}

+ (NSString *)errorString:(OMTErrorCode)errorCode
{
    struct CodeToString {
        OMTErrorCode errorCode;
        const char *errorString;
    };
    static const struct CodeToString kCodeToString[] = {
        {OMTErrorNoError, "NERR"},
        {OMTErrorSelectorPassThrough, "SPTH"},
        {OMTErrorSelectorAlreadyHooked, "SAHK"},
        {OMTErrorSelectorInUserBlacklist, "SIUB"},
        {OMTErrorClassInSelfBlacklist, "CISB"},
        {OMTErrorSelectorInSelfBlacklist, "SISB"},
        {OMTErrorSelectorUnsuppotedMethodSignature, "SUMS"},
        {OMTErrorSelectorUnsuppotedEncodeType, "SUEY"},
        {OMTErrorDoesNotRespondToMethod, "NMTD"},
        {OMTErrorDoesNotRespondToSelector, "NSEL"},
        {OMTErrorDoesNotRespondToIMP, "NIMP"},
        {OMTErrorSwizzleMethodFailed, "SMDF"},
    };

    static const size_t kNumCodeToString = sizeof(kCodeToString) / sizeof(kCodeToString[0]);

    size_t i;
    for (i = 0; i < kNumCodeToString; i++) {
        if (errorCode == kCodeToString[i].errorCode) {
            break;
        }
    }
    NSAssert(i != kNumCodeToString, @"Unknown errorCode???");

    return [NSString stringWithUTF8String:kCodeToString[i].errorString];
}

+ (BOOL)detectInfiniteLoopAtSelectorArray:(NSArray *)selectorArray
{
    void *callstack[128];
    int frames = backtrace(callstack, 128);
    char **strs = backtrace_symbols(callstack, frames);

    BOOL exists = NO;
    // ??????????????????????????????1??????
    for (int i = 1; i < frames && strs && !exists; i++) {
        NSString *frame = [NSString stringWithUTF8String:strs[i]];
        // OMT_LOGD(@"frame[%d]: %@", i, frame);
        for (NSString *selector in selectorArray) {
            if ([frame containsString:selector]) {
                exists = YES;
                break;
            }
        }
    }
    if (strs) {
        free(strs);
    }
    return exists;
}

- (NSString *)descriptionWithTarget:(id)target class:(Class)cls selector:(SEL)sel targetPosition:(OMTTargetPosition)targetPosition {
    if (nil != self.delegate && [self.delegate respondsToSelector:@selector(descriptionWithTarget:class:selector:targetPosition:)]) {
        return [self.delegate descriptionWithTarget:target class:cls selector:sel targetPosition:targetPosition];
    }
    else {
        return [target description];
    }
}

    - (BOOL)isClassInBlackList : (NSString *)className
{
    return [self.defaultClassBlackList containsObject:className];
}

- (BOOL)isSelectorInBlackList:(NSString *)methodName
{
    return [self.defaultMethodBlackList containsObject:methodName];
}

- (BOOL)isSupportedType:(NSString *)typeEncode
{
    return [self.supportedTypeDict.allKeys containsObject:typeEncode];
}

- (OMTTracePosition)tracePosition:(NSString *)methodName
{
    OMTTracePosition defaultPostion = OMTTracePositionBefore | OMTTracePositionAfter;
    return [self.tracePositionDict.allKeys containsObject:methodName] ? [self.tracePositionDict[methodName] intValue] : defaultPostion;
}

- (void)setBlock:(OMTBlock *)block forKey:(NSString *)key
{
    pthread_mutex_lock(&_blockMutex);
    [self.blockCache setObject:block forKey:key];
    pthread_mutex_unlock(&_blockMutex);
}

- (OMTBlock *)blockforKey:(NSString *)key
{
    pthread_mutex_lock(&_blockMutex);
    OMTBlock *block = [self.blockCache objectForKey:key];
    pthread_mutex_unlock(&_blockMutex);
    return block;
}

- (OMTBlock *)blockWithTarget:(id)target
{
    pthread_mutex_lock(&_blockMutex);
    Class cls = [target class];
    OMTBlock *block = [self.blockCache objectForKey:NSStringFromClass(cls)];
    while (nil == block) {
        cls = [cls superclass];
        if (nil == cls) {
            break;
        }
        block = [self.blockCache objectForKey:NSStringFromClass(cls)];
    }
    pthread_mutex_unlock(&_blockMutex);
    return block;
}

- (int)atomicAddDeep
{
    pthread_mutex_lock(&_deepMutex);
    int deep = _deep++;
    pthread_mutex_unlock(&_deepMutex);
    return deep;
}

- (void)atomicIncDeep
{
    pthread_mutex_lock(&_deepMutex);
    _deep--;
    pthread_mutex_unlock(&_deepMutex);
}

- (void)traceMethodWithClass:(Class)cls condition:(OMTConditionBlock)condition
{
    unsigned int outCount;
    Method *methods = class_copyMethodList(cls, &outCount);
    for (unsigned int i = 0; i < outCount; i++) {
        Method method = *(methods + i);
        SEL selector = method_getName(method);

        OMTErrorCode errorCode = [self isTraceSupportedWithClass:cls method:method];
        if (errorCode == OMTErrorNoError && condition) {
            // ?????????????????????????????????????????????
            if (!condition(selector)) {
                errorCode = OMTErrorSelectorInUserBlacklist;
            }
        }

        if (errorCode == OMTErrorNoError) {
            errorCode = [self swizzleMethodWithClass:cls selector:selector];
        }

        OMT_LOG(LOG_LEVEL_4_ERROR_CODE(errorCode), @"[%@] trace class: %@ method: %@ types: %s",
                [self.class errorString:errorCode],
                NSStringFromClass(cls),
                NSStringFromSelector(selector),
                method_getDescription(method)->types);
    }
    free(methods);
}

- (OMTErrorCode)isTraceSupportedWithClass:(Class)cls method:(Method)method
{
    char returnTypeCString[1024];
    memset(returnTypeCString, 0, sizeof(returnTypeCString));
    method_getReturnType(method, returnTypeCString, sizeof(returnTypeCString));
    const char *returnType = returnTypeCString;


    NSString *selectorName = NSStringFromSelector(method_getName(method));
    if ([selectorName hasPrefix:@"omt_"]) {
        // 1 ?????????????????????
        return OMTErrorSelectorPassThrough;
    }
    else if ([selectorName hasPrefix:OMTMessageFinalPrefix]) {
        // 2 ???????????????????????????
        return OMTErrorSelectorAlreadyHooked;
    }

    // 3 ????????????????????????????????????
    if ([self isSelectorInBlackList:selectorName]) {
        return OMTErrorSelectorInSelfBlacklist;
    }

    // 4 ?????????????????????????????????????????????????????????????????????(??????????????????)????????????????????????[NSMethodSignature signatureWithObjCTypes:] crash????????????????????????
    BOOL hasSignatureException = NO;
    @try {
        __unused NSMethodSignature *methodSignature = [NSMethodSignature signatureWithObjCTypes:method_getTypeEncoding(method)];
    }
    @catch (__unused NSException *e) {
        hasSignatureException = YES;
    }
    if (hasSignatureException) {
        return OMTErrorSelectorUnsuppotedMethodSignature;
    }

    // 5 ?????????????????????
    // ?????????????????????
    if (omt_isTypeQualifier(returnType[0])) {
        returnType++;
    }

    // ??????????????????
    if (returnType[0] != _C_PTR) {
        // struct???union????????????????????????????????????????????????????????????NSValue????????????????????????????????????
        if (!(omt_isStructType(returnType) || omt_isUnionType(returnType))) {
            if (![self isSupportedType:[NSString stringWithUTF8String:returnType]]) {
                return OMTErrorSelectorUnsuppotedEncodeType;
            }
        }
    }

    // 6 ??????????????????????????????????????????????????????0????????????self, ???1????????????sel??????2??????????????????????????????????????????????????????????????????2?????????
    for (int k = 2; k < method_getNumberOfArguments(method); k++) {
        char argumentTypeCString[1024];
        memset(argumentTypeCString, 0, sizeof(argumentTypeCString));
        method_getArgumentType(method, k, argumentTypeCString, sizeof(argumentTypeCString));
        const char *argumentType = argumentTypeCString;

        // ?????????????????????
        if (omt_isTypeQualifier(argumentType[0])) {
            argumentType++;
        }
        // ??????????????????
        if (argumentType[0] == _C_PTR) {
            continue;
        }

        // struct???union????????????????????????????????????????????????????????????NSValue????????????????????????????????????
        if (!(omt_isStructType(argumentType) || omt_isUnionType(argumentType))) {
            if (![self isSupportedType:[NSString stringWithUTF8String:argumentType]]) {
                return OMTErrorSelectorUnsuppotedEncodeType;
            }
        }
    }

    return OMTErrorNoError;
}

- (OMTErrorCode)swizzleMethodWithClass:(Class)cls selector:(SEL)selector
{
    // 1 ?????????selector????????????hook???
    SEL newSelector = NSSelectorFromString([NSString stringWithFormat:@"%@%@->%@",
                                                                      OMTMessageFinalPrefix,
                                                                      NSStringFromClass(cls),
                                                                      NSStringFromSelector(selector)]);
    if (class_respondsToSelector(cls, newSelector)) {
        return OMTErrorSelectorAlreadyHooked;
    }

    // 2 ?????????????????????
    Method originMethod = class_getInstanceMethod(cls, selector);
    if (!originMethod) {
        return OMTErrorDoesNotRespondToMethod;
    }
    IMP originIMP = method_getImplementation(originMethod);
    if (!originIMP) {
        return OMTErrorDoesNotRespondToIMP;
    }
    const char *originTypes = method_getTypeEncoding(originMethod);

    // 3 ?????????????????????????????????IMP
    // ?????????????????????"?????????????????????"??????"->"???????????????"_"????????????????????????????????????????????????"__CFNotification"????????????
    SEL forwardingSEL = NSSelectorFromString([NSString stringWithFormat:@"%@%@->%@",
                                                                        OMTMessageTempPrefix,
                                                                        NSStringFromClass(cls),
                                                                        NSStringFromSelector(selector)]);
    IMP forwardingIMP = imp_implementationWithSelector(forwardingSEL, originTypes);
    NSAssert(originIMP != forwardingIMP, @"originIMP != forwardingIMP");
    method_setImplementation(originMethod, forwardingIMP);

    // 4 ????????????SEL????????????IMP
    if (!class_addMethod(cls, newSelector, originIMP, originTypes)) {
        return OMTErrorSwizzleMethodFailed;
    }

    return OMTErrorNoError;
}

- (void)omt_forwardInvocation:(NSInvocation *)invocation
{
    if (self.disableTrace) {
        [invocation invoke];
        return;
    }

    Class originClass = [invocation omt_originClass];
    SEL originSelector = [invocation omt_originSelector];
    // XXX ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????email?????????
    // ?????????????????????description??????????????????description?????????????????????????????????runBefore???runAfer???????????????description???????????????????????????????????????.
    BOOL disableTrace = [[self class] detectInfiniteLoopAtSelectorArray:@[ OMTBlockRunBeforeSelector,
                                                                           OMTBlockRunAfterSelector,
                                                                           OMTDescriptionWithTargetSelector ]];
    int deep = [self atomicAddDeep];

    if (!disableTrace) {
        OMTBlock *block = [self blockWithTarget:invocation.target];
        OMTTracePosition postion = [self tracePosition:NSStringFromSelector(originSelector)];
        NSDate *start;

        // 1 ????????????????????????
        if (postion & OMTTracePositionBefore) {
            [block runBefore:invocation.target class:originClass sel:originSelector args:[invocation omt_getArguments] deep:deep];
        }
        if (postion & OMTTracePositionAfter) {
            start = [NSDate date];
        }

        // 2 ???????????????
        [invocation invoke];

        // 3 ????????????????????????
        if (postion & OMTTracePositionAfter) {
            NSTimeInterval interval = [[NSDate date] timeIntervalSinceDate:start];
            [block runAfter:invocation.target class:originClass sel:originSelector ret:[invocation omt_getReturnValue] deep:deep interval:interval];
        }
    }
    else {
        // ?????????????????????
        [invocation invoke];
    }

    [self atomicIncDeep];
}

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - OMTBlock

@implementation OMTBlock

- (BOOL)runCondition:(SEL)sel
{
    if (self.condition) {
        return self.condition(sel);
    }
    else {
        return YES;
    }
}

- (void)runBefore:(id)target class:(Class)cls sel:(SEL)sel args:(NSArray *)args deep:(int)deep {
    if (self.before) {
        self.before(target, cls, sel, args, deep);
    }
}

    - (void)runAfter : (id)target class : (Class)cls sel : (SEL)sel ret : (id)ret deep : (int)deep interval : (NSTimeInterval)interval {
    if (self.after) {
        self.after(target, cls, sel, ret, deep, interval);
    }
}

    @end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - OMTMessageStub

    @implementation OMTMessageStub

    - (instancetype)initWithTarget : (id)target selector : (SEL)aSelector
{
    self = [super init];
    if (self) {
        self.target = target;
        NSString *finalSelectorName = [NSStringFromSelector(aSelector) stringByReplacingOccurrencesOfString:OMTMessageTempPrefix withString:OMTMessageFinalPrefix];
        self.selector = NSSelectorFromString(finalSelectorName);
    }
    return self;
}

- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector
{
    Method method = class_getInstanceMethod(object_getClass(self.target), self.selector);
    if (NULL == method) {
        OMT_LOGE(@"No Method, target: %@ selector: %@", self.target, NSStringFromSelector(self.selector));
        assert(NULL != method);
    }

    const char *types = method_getTypeEncoding(method);
    if (NULL == types) {
        OMT_LOGE(@"No Types, target: %@ selector: %@", self.target, NSStringFromSelector(self.selector));
        assert(NULL != types);
    }

    return [NSMethodSignature signatureWithObjCTypes:types];
}

- (void)forwardInvocation:(NSInvocation *)anInvocation
{
    anInvocation.target = self.target;
    anInvocation.selector = self.selector;

    // ???????????????????????????????????????
    __unused const char *className = [NSStringFromClass([self.target class]) UTF8String];
    __unused const char *selectorName = [NSStringFromSelector(self.selector) UTF8String];

    [[OCMethodTrace sharedInstance] omt_forwardInvocation:anInvocation];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@: %p target: %p selector: %@>",
                                      NSStringFromClass([self class]), self, self.target, NSStringFromSelector(self.selector)];
}

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - NSObject (OCMethodTrace)

@implementation NSObject (OCMethodTrace)

+ (void)load
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      swizzle_class_method([self class], @selector(forwardingTargetForSelector:), @selector(omt_forwardingTargetForSelector:));
      swizzle_instance_method([self class], @selector(forwardingTargetForSelector:), @selector(omt_forwardingTargetForSelector:));
    });
}

+ (id)omt_forwardingTargetForSelector:(SEL)aSelector
{
    if ([NSStringFromSelector(aSelector) hasPrefix:OMTMessageTempPrefix] && ![self isKindOfClass:[OMTMessageStub class]]) {
        return [[OMTMessageStub alloc] initWithTarget:self selector:aSelector];
    }
    return [self omt_forwardingTargetForSelector:aSelector];
}

- (id)omt_forwardingTargetForSelector:(SEL)aSelector
{
    if ([NSStringFromSelector(aSelector) hasPrefix:OMTMessageTempPrefix] && ![self isKindOfClass:[OMTMessageStub class]]) {
        return [[OMTMessageStub alloc] initWithTarget:self selector:aSelector];
    }
    return [self omt_forwardingTargetForSelector:aSelector];
}

@end

////////////////////////////////////////////////////////////////////////////////
#pragma mark - NSInvocation (OCMethodTrace)

@implementation NSInvocation (OCMethodTrace)

- (Class)omt_originClass
{
    NSString *finalSelectorName = [NSStringFromSelector(self.selector) stringByReplacingOccurrencesOfString:OMTMessageFinalPrefix withString:@""];
    NSUInteger location = [finalSelectorName rangeOfString:@"->"].location;
    NSString *originClassName = [finalSelectorName substringWithRange:NSMakeRange(0, location)];
    return NSClassFromString(originClassName);
}

- (SEL)omt_originSelector
{
    NSString *finalSelectorName = [NSStringFromSelector(self.selector) stringByReplacingOccurrencesOfString:OMTMessageFinalPrefix withString:@""];
    NSUInteger location = [finalSelectorName rangeOfString:@"->"].location;
    NSString *originSelectorName = [finalSelectorName substringWithRange:NSMakeRange(location + 2, finalSelectorName.length - location - 2)];
    return NSSelectorFromString(originSelectorName);
}

- (id)omt_getReturnValue
{
    const char *returnType = self.methodSignature.methodReturnType;
    id ret = nil;

    // ?????????????????????
    if (omt_isTypeQualifier(returnType[0])) {
        returnType++;
    }

// ????????????
#define GET_RETURN_VALUE(_type)                    \
    if (0 == strcmp(returnType, @encode(_type))) { \
        _type ret_temp;                            \
        [self getReturnValue:&ret_temp];           \
        ret = @(ret_temp);                         \
    }

// ???????????????
#define GET_STRUCT_RETURN_VALUE(_type)       \
    if (is##_type(returnType)) {             \
        _type ret_temp;                      \
        [self getReturnValue:&ret_temp];     \
        ret = NSStringFrom##_type(ret_temp); \
    }

    if (omt_isStructType(returnType)) {
        GET_STRUCT_RETURN_VALUE(CGRect)
        else GET_STRUCT_RETURN_VALUE(CGPoint) else GET_STRUCT_RETURN_VALUE(CGSize) else GET_STRUCT_RETURN_VALUE(CGVector) else GET_STRUCT_RETURN_VALUE(UIOffset) else GET_STRUCT_RETURN_VALUE(UIEdgeInsets) else GET_STRUCT_RETURN_VALUE(CGAffineTransform)
    }
    else if (omt_isUnionType(returnType)) {
        // do nothing
    }
    else
        GET_RETURN_VALUE(char)
    else GET_RETURN_VALUE(int)else GET_RETURN_VALUE(short)else GET_RETURN_VALUE(long)else GET_RETURN_VALUE(long long)else GET_RETURN_VALUE(unsigned char)else GET_RETURN_VALUE(unsigned int)else GET_RETURN_VALUE(unsigned short)else GET_RETURN_VALUE(unsigned long)else GET_RETURN_VALUE(unsigned long long)else GET_RETURN_VALUE(float)else GET_RETURN_VALUE(double)else GET_RETURN_VALUE(BOOL) else if (strcmp(returnType, @encode(void)) == 0)
    {
        ret = @"void";
    }
    else if (0 == strcmp(returnType, @encode(char *)))
    {
        char *ret_temp;
        [self getReturnValue:&ret_temp];
        ret = [NSString stringWithUTF8String:ret_temp ? ret_temp : "NULL"];
    }
    else if (0 == strcmp(returnType, @encode(id)))
    {
        __unsafe_unretained id ret_temp;
        [self getReturnValue:&ret_temp];
        ret = [[OCMethodTrace sharedInstance] descriptionWithTarget:ret_temp class:[self omt_originClass] selector:[self omt_originSelector] targetPosition:OMTTargetPositionAfterReturnValue];
    }
    else if (0 == strcmp(returnType, @encode(Class)))
    {
        Class ret_temp;
        [self getReturnValue:&ret_temp];
        ret = NSStringFromClass(ret_temp);
    }
    else if (0 == strcmp(returnType, @encode(SEL)))
    {
        SEL ret_temp;
        [self getReturnValue:&ret_temp];
        ret = NSStringFromSelector(ret_temp);
    }
    else if (0 == strcmp(returnType, "@?"))
    { // block
        // ?????????lldb bt???????????????????????????????????????
        void *ret_temp;
        [self getReturnValue:&ret_temp];
        ret = [NSString stringWithFormat:@"%p", ret_temp];
    }
    else if (returnType[0] == _C_PTR)
    {
        void *ret_temp;
        [self getReturnValue:&ret_temp];
        if (0 == strcmp(returnType, @encode(CFStringRef))) {
            ret = [NSString stringWithString:ret_temp ? (__bridge NSString *)ret_temp : @"NULL"]; // ?????????
        }
        if (nil == ret) {
            // ??????lldb bt???????????????????????????????????????
            ret = [NSString stringWithFormat:@"%p", ret_temp];
        }
    }

    if (nil == ret) {
        NSUInteger valueSize = 0;
        NSGetSizeAndAlignment(returnType, &valueSize, NULL);
        unsigned char valueBytes[valueSize];
        [self getReturnValue:valueBytes];
        ret = [NSValue valueWithBytes:valueBytes objCType:returnType];
    }

    return ret;
}

- (NSArray *)omt_getArguments
{
    NSMethodSignature *methodSignature = [self methodSignature];
    NSMutableArray *argList = (methodSignature.numberOfArguments > 2 ? [NSMutableArray array] : nil);
    for (NSUInteger i = 2; i < methodSignature.numberOfArguments; i++) {
        const char *argumentType = [methodSignature getArgumentTypeAtIndex:i];
        id arg = nil;

        // ?????????????????????
        if (omt_isTypeQualifier(argumentType[0])) {
            argumentType++;
        }

// ????????????
#define GET_ARGUMENT(_type)                          \
    if (0 == strcmp(argumentType, @encode(_type))) { \
        _type arg_temp;                              \
        [self getArgument:&arg_temp atIndex:i];      \
        arg = @(arg_temp);                           \
    }

// ???????????????
#define GET_STRUCT_ARGUMENT(_type)              \
    if (is##_type(argumentType)) {              \
        _type arg_temp;                         \
        [self getArgument:&arg_temp atIndex:i]; \
        arg = NSStringFrom##_type(arg_temp);    \
    }


        if (omt_isStructType(argumentType)) {
            GET_STRUCT_ARGUMENT(CGRect)
            else GET_STRUCT_ARGUMENT(CGPoint) else GET_STRUCT_ARGUMENT(CGSize) else GET_STRUCT_ARGUMENT(CGVector) else GET_STRUCT_ARGUMENT(UIOffset) else GET_STRUCT_ARGUMENT(UIEdgeInsets) else GET_STRUCT_ARGUMENT(CGAffineTransform)
        }
        else if (omt_isUnionType(argumentType)) {
            // do nothing
        }
        else
            GET_ARGUMENT(char)
        else GET_ARGUMENT(int)else GET_ARGUMENT(short)else GET_ARGUMENT(long)else GET_ARGUMENT(long long)else GET_ARGUMENT(unsigned char)else GET_ARGUMENT(unsigned int)else GET_ARGUMENT(unsigned short)else GET_ARGUMENT(unsigned long)else GET_ARGUMENT(unsigned long long)else GET_ARGUMENT(float)else GET_ARGUMENT(double)else GET_ARGUMENT(BOOL) else if (0 == strcmp(argumentType, @encode(char *)))
        {
            char *arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            arg = [NSString stringWithUTF8String:arg_temp ? arg_temp : "NULL"];
        }
        else if (0 == strcmp(argumentType, @encode(id)))
        {
            __unsafe_unretained id arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            arg = [[OCMethodTrace sharedInstance] descriptionWithTarget:arg_temp class:[arg_temp class] selector:[self omt_originSelector] targetPosition:OMTTargetPositionBeforeArgument];
        }
        else if (0 == strcmp(argumentType, @encode(Class)))
        {
            Class arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            arg = NSStringFromClass(arg_temp);
        }
        else if (0 == strcmp(argumentType, @encode(SEL)))
        {
            SEL arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            arg = NSStringFromSelector(arg_temp);
        }
        else if (0 == strcmp(argumentType, "@?"))
        { // block
            // ?????????lldb bt???????????????????????????????????????
            void *arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            arg = [NSString stringWithFormat:@"%p", arg_temp];
        }
        else if (argumentType[0] == _C_PTR)
        {
            void *arg_temp;
            [self getArgument:&arg_temp atIndex:i];
            if (0 == strcmp(argumentType, @encode(CFStringRef))) {
                arg = [NSString stringWithString:arg_temp ? (__bridge NSString *)arg_temp : @"NULL"]; // ?????????
            }
            if (nil == arg) {
                // ?????????lldb bt???????????????????????????????????????
                arg = [NSString stringWithFormat:@"%p", arg_temp];
            }
        }

        if (nil == arg) {
            NSUInteger valueSize = 0;
            NSGetSizeAndAlignment(argumentType, &valueSize, NULL);
            unsigned char valueBytes[valueSize];
            [self getArgument:valueBytes atIndex:i];
            arg = [NSValue valueWithBytes:valueBytes objCType:argumentType];
        }

        [argList addObject:arg];
    }
    return argList;
}

@end
