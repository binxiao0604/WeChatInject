//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMExtensionDictionary : NSObject
{
    struct os_unfair_lock_s m_lock;
    struct unordered_map<unsigned long, MMExtensionImplememter *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, MMExtensionImplememter *>>> *m_dict;
    _Bool m_needCleanUp;
}

- (id)existExtensionObject;
- (void)cleanUp;
- (void)testNeedsCleanUp;
-     // Error parsing type: ^{MMExtensionObjectList=^^{MMExtensionObject}QQ{atomic<bool>={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>=AB}}{atomic_flag={__cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool>>=AB}}^{vector<MMExtensionObject **, std::__1::allocator<MMExtensionObject **>>}}24@0:8@16, name: getKeyExtensionList:
- (_Bool)unregisterAllKeyExtension:(id)arg1;
- (_Bool)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)registerExtension:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

