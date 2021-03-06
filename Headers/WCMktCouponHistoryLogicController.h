//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCMktCouponHistoryPageCgiDelegate-Protocol.h"
#import "WCMktDeleteCouponInInvalidlistCgiDelegate-Protocol.h"

@class GetCouponAndGiftHistoryResponse, NSString, WCMktCouponHistoryPageCgi, WCMktDeleteCouponInInvalidlistCgi;
@protocol WCMktCouponHistoryLogicControllerDelegate;

@interface WCMktCouponHistoryLogicController : NSObject <WCMktCouponHistoryPageCgiDelegate, WCMktDeleteCouponInInvalidlistCgiDelegate>
{
    _Bool _bHasSendHomePageRequest;
    _Bool _bNeedUpdateDataAfterViewControllerWillApper;
    id <WCMktCouponHistoryLogicControllerDelegate> _delegate;
    GetCouponAndGiftHistoryResponse *_mktCouponHistoryHomePageResp;
    WCMktCouponHistoryPageCgi *_historyHomePageCgi;
    WCMktDeleteCouponInInvalidlistCgi *_deleteCardCgi;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNeedUpdateDataAfterViewControllerWillApper; // @synthesize bNeedUpdateDataAfterViewControllerWillApper=_bNeedUpdateDataAfterViewControllerWillApper;
@property(retain, nonatomic) WCMktDeleteCouponInInvalidlistCgi *deleteCardCgi; // @synthesize deleteCardCgi=_deleteCardCgi;
@property(retain, nonatomic) WCMktCouponHistoryPageCgi *historyHomePageCgi; // @synthesize historyHomePageCgi=_historyHomePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetCouponAndGiftHistoryResponse *mktCouponHistoryHomePageResp; // @synthesize mktCouponHistoryHomePageResp=_mktCouponHistoryHomePageResp;
@property(nonatomic) __weak id <WCMktCouponHistoryLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleClickRightBtnWithItemData:(id)arg1;
- (void)handleDeleteCardSuccWithCardId:(id)arg1;
- (void)onGetMktDeleteCouopnInInvalidlistCgiResp:(id)arg1;
- (void)handleDeleteCouponHistoryItemWithIndexPath:(id)arg1;
- (void)handleClickCouponHistoryItemWithIndexPath:(id)arg1;
- (void)onGetCouponHistoryPageCgiResp:(id)arg1;
- (void)getCoponHistoryPageDataFromSvrWithOffset:(unsigned long long)arg1;
- (void)handleCouponHistoryLoadingMore;
- (void)refreshHomePageDataFromSvr;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (void)handleH5OpenWithUrl:(id)arg1 needUpdateHomePage:(_Bool)arg2;
- (id)getHistoryItemList;
- (id)getRightButtonList;
- (id)getCouponHistoryDataWithIndexPath:(id)arg1;
- (long long)getTableViewRowCount;
- (id)getHistoryPageTitle;
- (_Bool)hasRespData;
- (_Bool)isMktCouponHistoryDataAllLoad;
- (_Bool)hasMktCouponHistoryData;
- (void)saveCouponHistoryHomePageDataToFile;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
- (void)setupData;
- (id)initLogicControllerWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

