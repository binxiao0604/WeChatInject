//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class CEmoticonWrap, NSString;

@interface EmoticonRemoteRecentUse : NSObject <PBCoding>
{
    unsigned int lastUsedTime;
    NSString *md5;
    NSString *query;
    CEmoticonWrap *refEmoticon;
}

+ (void)initialize;
+ (void)PBArrayAdd_refEmoticon;
+ (void)PBArrayAdd_lastUsedTime;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_md5;
- (void).cxx_destruct;
@property(retain, nonatomic) CEmoticonWrap *refEmoticon; // @synthesize refEmoticon;
@property(nonatomic) unsigned int lastUsedTime; // @synthesize lastUsedTime;
@property(retain, nonatomic) NSString *query; // @synthesize query;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(readonly, copy) NSString *debugDescription;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

