//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCCanvasDynamicDataLoaderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, WCAdDynamicUpdateLogic, WCCanvasDynamicDataLoader;
@protocol WCLogicMgrDelegate;

@interface WCAdvertiseLogicMgr : MMObject <PBMessageObserverDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    NSMutableArray *arrUpdateItemList;
    _Bool bUpdating;
    unsigned int updateTime;
    id <WCLogicMgrDelegate> m_delegate;
    NSMutableDictionary *adOperationLogicCache;
    NSString *_adDeviceInfo;
    WCCanvasDynamicDataLoader *_dynamicDataLoader;
    NSMutableDictionary *_expressionJumpCanvasLoadInfoDic;
    WCAdDynamicUpdateLogic *_adDynamicUpdateLogic;
    NSMutableSet *_weAppContactLoadedSet;
    NSMutableSet *_weAppPkgLoadedSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *weAppPkgLoadedSet; // @synthesize weAppPkgLoadedSet=_weAppPkgLoadedSet;
@property(retain, nonatomic) NSMutableSet *weAppContactLoadedSet; // @synthesize weAppContactLoadedSet=_weAppContactLoadedSet;
@property(retain, nonatomic) WCAdDynamicUpdateLogic *adDynamicUpdateLogic; // @synthesize adDynamicUpdateLogic=_adDynamicUpdateLogic;
@property(retain, nonatomic) NSMutableDictionary *expressionJumpCanvasLoadInfoDic; // @synthesize expressionJumpCanvasLoadInfoDic=_expressionJumpCanvasLoadInfoDic;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicDataLoader; // @synthesize dynamicDataLoader=_dynamicDataLoader;
@property(retain, nonatomic) NSString *adDeviceInfo; // @synthesize adDeviceInfo=_adDeviceInfo;
@property(nonatomic) __weak id <WCLogicMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)updateOnTimeLineDetailExposure:(id)arg1;
- (void)updateOnTimeLineExposure:(id)arg1;
- (void)updateFinderLiveInfo:(id)arg1;
- (_Bool)checkExistAndSetIfNotExist:(id)arg1 inDataSet:(id)arg2;
- (void)tryToPreloadWeApp:(id)arg1 preloadWeAppPkg:(_Bool)arg2;
- (void)tryToPreloadWeAppForAdCanvas:(id)arg1;
- (void)tryToPreloadWeAppForAdResource:(id)arg1;
- (void)forceUpdateFinderTopicInfo:(id)arg1;
- (void)forceUpdateWeAppLiveInfo:(id)arg1;
- (void)adDynamicUpdate:(id)arg1;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)hideLoadingFromVC:(id)arg1;
- (void)showLoadingAutoHideAfter:(double)arg1 fromVC:(id)arg2;
- (void)showLoadingFromVC:(id)arg1;
- (void)jumpCanvasFromExpression:(id)arg1 withScene:(int)arg2;
- (void)updateWeAppTradingGuarantee:(id)arg1;
- (void)preloadH5OnAdExposure:(id)arg1;
- (void)handleCommonDynamicUpdateResponse:(id)arg1;
- (void)commonDynamicUpdateWithType:(unsigned int)arg1 params:(id)arg2 dataItem:(id)arg3 aid:(id)arg4 uxinfo:(id)arg5 needSpeedy:(_Bool)arg6;
- (void)handleUpdateAdChainWordingResponse:(id)arg1 dataItem:(id)arg2;
- (void)updateAdChainInfo:(id)arg1;
- (void)preloadAdResAfterRecvAtFriendMention:(id)arg1;
- (void)sendSubscriptionMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)sendSubscriptionMsg:(id)arg1 aid:(unsigned long long)arg2 appType:(int)arg3 waUsername:(id)arg4;
- (id)getAdOperationLogic:(id)arg1;
- (void)deleteAdOperationLogic:(id)arg1;
- (void)addAdOperationLogic:(id)arg1 withSnsId:(id)arg2;
- (void)handleDoChannelMsgReportResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)doChannelMsgReport:(id)arg1 channelId:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)responseForSnsADObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (int)getNetworkType;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3 syncBuffer:(id)arg4 RemindFriendsInfoData:(id)arg5;
- (void)requestForSnsADObjectDetailRequest:(id)arg1 FromScene:(unsigned int)arg2 source:(int)arg3;
- (void)onOperation:(id)arg1 Finished:(long long)arg2;
- (_Bool)responseForSnsADObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForSnsADObjectOpRequest:(id)arg1;
- (void)spanUnInterestAdvertiseReasonListForData:(id)arg1;
- (void)unInterestOpenIMTimeLineDataItem:(id)arg1;
- (void)unInterestAdvertiseDataItem:(id)arg1;
- (_Bool)unLikeAdvertiseDataItem:(id)arg1 source:(int)arg2;
- (_Bool)unCommentAdvertiseDataItem:(id)arg1 commentID:(id)arg2 source:(int)arg3;
- (void)updateDataItemDetail:(id)arg1 source:(int)arg2 RemindFriendsInfoData:(id)arg3;
- (void)updateAdvertiseDataItemDetail:(id)arg1 source:(int)arg2;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)deleteAdvertiseDataItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

