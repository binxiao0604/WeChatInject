//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, WSNumberRedPointList, WSRedPointInfo;

@interface WSRedPointCtrlInfo : NSObject <PBCoding>
{
    _Bool bContentReddotShowedInFindPage;
    unsigned int recommendClearedTimeStamps;
    unsigned int searchClearedTimeStamps;
    unsigned int secondColumnClearedTimeStamps;
    WSRedPointInfo *searchRedPointInfo;
    WSRedPointInfo *recommendHaokanContentRedPointInfo;
    WSNumberRedPointList *recommendNumRedPoints;
    WSRedPointInfo *recommendContentRedPointInfo;
    WSRedPointInfo *settingRedPointInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_bContentReddotShowedInFindPage;
+ (void)PBArrayAdd_secondColumnClearedTimeStamps;
+ (void)PBArrayAdd_settingRedPointInfo;
+ (void)PBArrayAdd_recommendContentRedPointInfo;
+ (void)PBArrayAdd_recommendNumRedPoints;
+ (void)PBArrayAdd_searchClearedTimeStamps;
+ (void)PBArrayAdd_recommendClearedTimeStamps;
+ (void)PBArrayAdd_recommendHaokanContentRedPointInfo;
+ (void)PBArrayAdd_searchRedPointInfo;
- (void).cxx_destruct;
@property(nonatomic) _Bool bContentReddotShowedInFindPage; // @synthesize bContentReddotShowedInFindPage;
@property(nonatomic) unsigned int secondColumnClearedTimeStamps; // @synthesize secondColumnClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *settingRedPointInfo; // @synthesize settingRedPointInfo;
@property(retain, nonatomic) WSRedPointInfo *recommendContentRedPointInfo; // @synthesize recommendContentRedPointInfo;
@property(retain, nonatomic) WSNumberRedPointList *recommendNumRedPoints; // @synthesize recommendNumRedPoints;
@property(nonatomic) unsigned int searchClearedTimeStamps; // @synthesize searchClearedTimeStamps;
@property(nonatomic) unsigned int recommendClearedTimeStamps; // @synthesize recommendClearedTimeStamps;
@property(retain, nonatomic) WSRedPointInfo *recommendHaokanContentRedPointInfo; // @synthesize recommendHaokanContentRedPointInfo;
@property(retain, nonatomic) WSRedPointInfo *searchRedPointInfo; // @synthesize searchRedPointInfo;
- (unsigned int)getClearedTimeStamps:(unsigned long long)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

