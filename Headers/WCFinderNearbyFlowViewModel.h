//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderNearbyStreamFetchMgrExt-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderNearbyFlowViewModelDelegate;

@interface WCFinderNearbyFlowViewModel : NSObject <WCFinderDataItemExt, WCFinderNearbyStreamFetchMgrExt>
{
    _Bool _stopFetchNextPage;
    _Bool _hasFetchEnterData;
    id <WCFinderNearbyFlowViewModelDelegate> _delegate;
    NSMutableArray *_allDataItems;
    unsigned long long _preFetchNextPageIndex;
    unsigned long long _refreshTime;
    unsigned long long _maxTid;
    NSMutableSet *_tidContainSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool hasFetchEnterData; // @synthesize hasFetchEnterData=_hasFetchEnterData;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(nonatomic) __weak id <WCFinderNearbyFlowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNearbyStreamFetchHistory:(unsigned long long)arg1 dataItems:(id)arg2;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)arg1 dataItems:(id)arg2 userLocation:(id)arg3 preFetchNextPageIndex:(unsigned long long)arg4;
- (void)onNearbyStreamFetchWillSuccess:(unsigned long long)arg1;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)arg1;
- (void)onNearbyStreamFetchError:(unsigned long long)arg1;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)arg1;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)addFavRelateActionWithContentVM:(id)arg1 relateActionType:(unsigned long long)arg2;
- (id)transformHistoryFinderItemToContentVM:(id)arg1;
- (id)transformFinderItemToContentVM:(id)arg1;
- (_Bool)isValiadServerDataItem:(id)arg1;
- (void)contentUnlikeFeedback:(id)arg1 subType:(long long)arg2;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (void)clearAllContentVMLayoutCache;
- (id)contentVMWithTid:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)fetchMoreNearbyList;
- (void)dealloc;
- (id)initWithData:(id)arg1 stopFetchNextPage:(_Bool)arg2 hasFetchEnterData:(_Bool)arg3 preFetchNextPageIndex:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

