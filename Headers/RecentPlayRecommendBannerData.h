//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, RecentPlayBannerB;

@interface RecentPlayRecommendBannerData : MMObject <PBCoding>
{
    NSString *bannerABigPicUrl;
    NSString *bannerAJumpUrl;
    RecentPlayBannerB *bannerB;
}

+ (void)initialize;
+ (void)PBArrayAdd_bannerB;
+ (void)PBArrayAdd_bannerAJumpUrl;
+ (void)PBArrayAdd_bannerABigPicUrl;
- (void).cxx_destruct;
@property(retain, nonatomic) RecentPlayBannerB *bannerB; // @synthesize bannerB;
@property(retain, nonatomic) NSString *bannerAJumpUrl; // @synthesize bannerAJumpUrl;
@property(retain, nonatomic) NSString *bannerABigPicUrl; // @synthesize bannerABigPicUrl;
- (void)parse:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

