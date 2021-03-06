//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface SafeMutableDictionary : NSObject
{
    NSMutableDictionary *_m_dic;
    NSRecursiveLock *_m_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableDictionary *m_dic; // @synthesize m_dic=_m_dic;
- (id)dictionaryAllKeys;
- (void)dictionaryRemoveObjectForKey:(id)arg1;
- (id)dictionaryGetObjectForKey:(id)arg1;
- (void)dictionarySetObject:(id)arg1 key:(id)arg2;
- (void)dictionaryReset;
- (id)init;

@end

