//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FinderLiveNoticeInfo, WCFinderContact;

@protocol WCFinderContactExt <NSObject>

@optional
- (void)onFinderContactLiveNoticeInfoUpdate:(FinderLiveNoticeInfo *)arg1;
- (void)onFinderContactLivingStatusHasChange:(WCFinderContact *)arg1;
- (void)onFinderSelfContactInit:(WCFinderContact *)arg1;
- (void)onFinderContactLikeFeedListHasChange:(WCFinderContact *)arg1 isRefuse:(_Bool)arg2;
- (void)onFinderContactFollowUnFollowStart;
- (void)onFinderContactFollowStatusUpdateFailure:(WCFinderContact *)arg1;
- (void)onFinderContactFollowListHasChange:(WCFinderContact *)arg1;
- (void)onFinderContactFollowStatusUpdate:(WCFinderContact *)arg1;
- (void)onFinderCreateSuccessful:(WCFinderContact *)arg1;
- (void)onFinderContactDelete:(WCFinderContact *)arg1;
- (void)onFinderContactUpdate:(WCFinderContact *)arg1;
@end

