//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class FinderLiveExtInfo, FinderLiveMediaSpec, FinderLiveSdkChannelInfo, FinderLiveTabInfo, NSString;

@interface WCFinderLiveInfo : NSObject <WCTColumnCoding, PBCoding>
{
    unsigned int onlineCnt;
    unsigned int startTime;
    unsigned int likeCnt;
    unsigned int endTime;
    unsigned int participantCnt;
    unsigned int extFlag;
    unsigned int sourceType;
    unsigned int liveBusinessType;
    unsigned long long liveId;
    unsigned long long liveStatus;
    NSString *streamUrl;
    FinderLiveExtInfo *liveExtInfo;
    FinderLiveSdkChannelInfo *liveSdkChannelInfo;
    unsigned long long rewardTotalAmountInWecoin;
    FinderLiveMediaSpec *liveSpec;
    FinderLiveTabInfo *liveTabInfo;
    NSString *liveBarMsg;
    unsigned long long newLikeCount;
    unsigned long long _rewardTotalAmountInHeat;
}

+ (unsigned int)transferToSrcFinderLiveSourceType:(unsigned int)arg1;
+ (unsigned int)transferToFinderLiveSourceType:(unsigned int)arg1;
+ (id)finderLiveInfoFrom:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_newLikeCount;
+ (void)PBArrayAdd_liveBusinessType;
+ (void)PBArrayAdd_liveBarMsg;
+ (void)PBArrayAdd_liveTabInfo;
+ (void)PBArrayAdd_sourceType;
+ (void)PBArrayAdd_liveSpec;
+ (void)PBArrayAdd_rewardTotalAmountInWecoin;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_participantCnt;
+ (void)PBArrayAdd_liveSdkChannelInfo;
+ (void)PBArrayAdd_liveExtInfo;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_streamUrl;
+ (void)PBArrayAdd_liveStatus;
+ (void)PBArrayAdd_onlineCnt;
+ (void)PBArrayAdd_liveId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long newLikeCount; // @synthesize newLikeCount;
@property(nonatomic) unsigned int liveBusinessType; // @synthesize liveBusinessType;
@property(retain, nonatomic) NSString *liveBarMsg; // @synthesize liveBarMsg;
@property(retain, nonatomic) FinderLiveTabInfo *liveTabInfo; // @synthesize liveTabInfo;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType;
@property(retain, nonatomic) FinderLiveMediaSpec *liveSpec; // @synthesize liveSpec;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @synthesize rewardTotalAmountInWecoin;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag;
@property(nonatomic) unsigned int participantCnt; // @synthesize participantCnt;
@property(retain, nonatomic) FinderLiveSdkChannelInfo *liveSdkChannelInfo; // @synthesize liveSdkChannelInfo;
@property(retain, nonatomic) FinderLiveExtInfo *liveExtInfo; // @synthesize liveExtInfo;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int likeCnt; // @synthesize likeCnt;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *streamUrl; // @synthesize streamUrl;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus;
@property(nonatomic) unsigned int onlineCnt; // @synthesize onlineCnt;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(readonly, copy) NSString *description;
- (_Bool)isLiveClosed;
- (id)genFinderLiveObject;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
