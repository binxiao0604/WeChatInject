//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"
#import "WCFinderLocationServiceExt-Protocol.h"
#import "WCFinderNearbyStreamFetchMgrExt-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, WCFinderFeedLayoutContentVM;
@protocol WCFinderNearbyViewModelDelegate;

@interface WCFinderNearbyViewModel : NSObject <WCFinderDataItemExt, WCFinderRedDotNotifyExt, WCFinderPostingCommentExt, WCFinderNearbyStreamFetchMgrExt, WCFinderLocationServiceExt, WCFinderLiveExt>
{
    _Bool _stopFetchNextPage;
    _Bool _hasFetchEnterData;
    _Bool _isLocationServiceAuthorized;
    _Bool _isFetchLivingStream;
    id <WCFinderNearbyViewModelDelegate> _delegate;
    NSArray *_commentFailTidArray;
    NSMutableArray *_allDataItems;
    unsigned long long _preFetchNextPageIndex;
    unsigned long long _unReadMSGCount;
    unsigned long long _commentFailTidCount;
    NSString *_userCity;
    NSString *_enterDataReportID;
    unsigned long long _refreshTime;
    WCFinderFeedLayoutContentVM *_livingLayout;
    unsigned long long _maxTid;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchLivingStream; // @synthesize isFetchLivingStream=_isFetchLivingStream;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(retain, nonatomic) WCFinderFeedLayoutContentVM *livingLayout; // @synthesize livingLayout=_livingLayout;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *enterDataReportID; // @synthesize enterDataReportID=_enterDataReportID;
@property(nonatomic) _Bool isLocationServiceAuthorized; // @synthesize isLocationServiceAuthorized=_isLocationServiceAuthorized;
@property(copy, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(readonly, nonatomic) unsigned long long commentFailTidCount; // @synthesize commentFailTidCount=_commentFailTidCount;
@property(readonly, nonatomic) unsigned long long unReadMSGCount; // @synthesize unReadMSGCount=_unReadMSGCount;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(retain, nonatomic) NSArray *commentFailTidArray; // @synthesize commentFailTidArray=_commentFailTidArray;
@property(nonatomic) __weak id <WCFinderNearbyViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)clearAllCachedDataItem;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onNearbyStreamFetchHistory:(unsigned long long)arg1 dataItems:(id)arg2;
- (void)onNearbyStreamLayoutInfoChange:(id)arg1;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)arg1 dataItems:(id)arg2 userLocation:(id)arg3 preFetchNextPageIndex:(unsigned long long)arg4;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)arg1;
- (void)onNearbyStreamFetchError:(unsigned long long)arg1;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)arg1;
- (void)fetchMoreLivingList;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (_Bool)isValiadServerDataItem:(id)arg1;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (id)getUnreadDataItems;
- (void)fetchFirstPageData;
- (void)fetchLastestData;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (_Bool)isDataSection:(unsigned long long)arg1;
- (_Bool)isDataIndexPath:(id)arg1;
- (id)vaildTopIndexPath;
- (long long)contentIndexOfTid:(id)arg1;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)sectionNums;
- (_Bool)isDataEmpty;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

