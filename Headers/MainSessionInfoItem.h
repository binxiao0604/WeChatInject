//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSessionInfo, NSString;

@interface MainSessionInfoItem : NSObject <PBCoding>
{
    _Bool showAsRedDot;
    unsigned int mainUnReadCount;
    unsigned int mainMuteUnReadCount;
    unsigned int mainAtMeCount;
    unsigned int mainAtAllCount;
    MMSessionInfo *mainSession;
}

+ (void)initialize;
+ (void)PBArrayAdd_mainAtAllCount;
+ (void)PBArrayAdd_mainAtMeCount;
+ (void)PBArrayAdd_mainMuteUnReadCount;
+ (void)PBArrayAdd_showAsRedDot;
+ (void)PBArrayAdd_mainUnReadCount;
+ (void)PBArrayAdd_mainSession;
- (void).cxx_destruct;
@property(nonatomic) unsigned int mainAtAllCount; // @synthesize mainAtAllCount;
@property(nonatomic) unsigned int mainAtMeCount; // @synthesize mainAtMeCount;
@property(nonatomic) unsigned int mainMuteUnReadCount; // @synthesize mainMuteUnReadCount;
@property(nonatomic) _Bool showAsRedDot; // @synthesize showAsRedDot;
@property(nonatomic) unsigned int mainUnReadCount; // @synthesize mainUnReadCount;
@property(retain, nonatomic) MMSessionInfo *mainSession; // @synthesize mainSession;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

