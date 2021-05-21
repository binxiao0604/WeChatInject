//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMainControll, MMExtensionCenter, MMLongLink, MMServiceCenter, NSRecursiveLock, NSString;

@interface MMContext : NSObject
{
    unsigned long long m_contextType;
    unsigned int m_uin;
    char m_uinStr[32];
    NSString *m_userName;
    unsigned long long m_userState;
    id m_mainController;
    NSRecursiveLock *m_contextLock;
    NSString *m_userMd5;
    NSString *m_userDocumentPath;
    NSString *m_userLibraryCachePath;
    basic_string_90719d97 m_marsContext;
    MMLongLink *m_marsLongLink;
    MMServiceCenter *m_serviceCenter;
    MMExtensionCenter *m_extensionCenter;
    NSRecursiveLock *_contextLock;
}

+ (id)currentUserLibraryCachePath;
+ (id)currentUserDocumentPath;
+ (id)currentUserMd5;
+ (id)currentUserName;
+ (const char *)currentUinStrForLog;
+ (unsigned int)currentUin;
+ (void)setContext:(id)arg1 atIndex:(unsigned long long)arg2;
+ (void)pop:(id)arg1;
+ (void)push:(id)arg1;
+ (id)activeUserContext;
+ (id)rootContext;
+ (id)lastContext;
+ (id)fastCurrentContext;
+ (id)currentContext;
+ (void)initContextEnvironment;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *contextLock; // @synthesize contextLock=_contextLock;
@property(readonly, nonatomic) MMExtensionCenter *extensionCenter; // @synthesize extensionCenter=m_extensionCenter;
@property(readonly, nonatomic) MMServiceCenter *serviceCenter; // @synthesize serviceCenter=m_serviceCenter;
@property(retain, nonatomic) CMainControll *mainController; // @synthesize mainController=m_mainController;
- (id)userLibraryCachePath;
- (id)userDocumentPath;
- (id)userMd5;
- (id)userName;
- (unsigned int)uin;
- (id)description;
@property(readonly, nonatomic) _Bool isInvalidContext;
@property(readonly, nonatomic) _Bool isUserContext;
@property(readonly, nonatomic) _Bool isRootContext;
- (void)checkExistExtensionIfNeeded;
- (id)longLink;
- (void)setLongLink:(id)arg1;
- (void)setUin:(unsigned int)arg1 userName:(id)arg2;
- (id)initWithContextType:(unsigned long long)arg1;
- (id)init;
- (void)callKeyExtensionOnMainThreadContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThreadContinuously:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtensionContinuously:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtensionContinuously:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)callKeyExtensionOnMainThread:(id)arg1 key:(id)arg2 selector:(SEL)arg3 sync:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)callExtensionOnMainThread:(id)arg1 selector:(SEL)arg2 sync:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)callKeyExtension:(id)arg1 key:(id)arg2 selector:(SEL)arg3 block:(CDUnknownBlockType)arg4;
- (void)callExtension:(id)arg1 selector:(SEL)arg2 block:(CDUnknownBlockType)arg3;
- (void)unRegisterAllKeyExtension:(id)arg1 withTarget:(id)arg2;
- (void)unRegisterExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)registerExtension:(id)arg1 withKey:(id)arg2 withTarget:(id)arg3;
- (void)unRegisterExtension:(id)arg1 withTarget:(id)arg2;
- (void)registerExtension:(id)arg1 withTarget:(id)arg2;
- (basic_string_90719d97 *)marsLongLinkName;
- (basic_string_90719d97 *)marsContext;
- (void)stopNetworking;
- (void)startNetworking;
- (void)setService:(id)arg1 for:(Class)arg2;
- (void)removeService:(Class)arg1;
- (_Bool)isServiceExist:(Class)arg1;
- (id)getService:(Class)arg1;

@end
