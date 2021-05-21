//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCCardPkgExt-Protocol.h"
#import "WCMktCardHomePageV2CgiDelegate-Protocol.h"
#import "WCMktRemoveCardInRecentListCgiDelegate-Protocol.h"
#import "WCNewCardDetailViewControllerDelegate-Protocol.h"

@class GetMktCardHomePageV2Response, NSString, WCMktCardHomePageV2Cgi, WCMktRemoveCardInRecentListCgi;
@protocol WCMktCardHomeLogicControllerV2Delegate;

@interface WCMktCardHomeLogicControllerV2 : NSObject <WCMktCardHomePageV2CgiDelegate, WCMktRemoveCardInRecentListCgiDelegate, WCNewCardDetailViewControllerDelegate, IWCCardPkgExt>
{
    _Bool _bHasSendHomePageRequest;
    id <WCMktCardHomeLogicControllerV2Delegate> _delegate;
    GetMktCardHomePageV2Response *_mktCardHomePageResponse;
    WCMktCardHomePageV2Cgi *_homePageCgi;
    WCMktRemoveCardInRecentListCgi *_removeCardInRecentListCgi;
    NSString *_deletingCardID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deletingCardID; // @synthesize deletingCardID=_deletingCardID;
@property(retain, nonatomic) WCMktRemoveCardInRecentListCgi *removeCardInRecentListCgi; // @synthesize removeCardInRecentListCgi=_removeCardInRecentListCgi;
@property(retain, nonatomic) WCMktCardHomePageV2Cgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property(nonatomic) _Bool bHasSendHomePageRequest; // @synthesize bHasSendHomePageRequest=_bHasSendHomePageRequest;
@property(retain, nonatomic) GetMktCardHomePageV2Response *mktCardHomePageResponse; // @synthesize mktCardHomePageResponse=_mktCardHomePageResponse;
@property(nonatomic) __weak id <WCMktCardHomeLogicControllerV2Delegate> delegate; // @synthesize delegate=_delegate;
- (void)onUseCard:(id)arg1;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)updateRecentListAfterCardDataChange;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onDeleteCard:(id)arg1;
- (void)onGetMktRemoveCardInRecentListCgiResp:(id)arg1;
- (void)removeRecentListCardWithData:(id)arg1;
- (void)onGetWCMktCardHomePageV2CgiResp:(id)arg1;
- (void)getHomePageDataFromSvrWithOffset:(double)arg1;
- (void)getMoreHomePageDataFromSvr;
- (void)removeRecentListDataWithUserCardId:(id)arg1;
- (void)handleH5OpenWithUrl:(id)arg1;
- (void)handleTinyAppOpenWithAppInfo:(id)arg1;
- (void)handleRecentCardSectionClickWithIndexPath:(id)arg1;
- (void)handleTopCellSectionClickWithIndexPath:(id)arg1;
- (void)handleHomePageElemCellClickWithIndexPath:(id)arg1;
- (void)handleFaqItemClick;
- (void)handleHomePageDataLoadingMore;
- (void)refreshHomePageDataFromSvr;
- (void)handleRemoveRecentListCellWithIndexPath:(id)arg1;
- (id)getHomePageRecentCellElemWithIndexPath:(id)arg1;
- (id)getHomePageTopCellElemWithIndexPath:(id)arg1;
- (_Bool)isLastTopCellItemWithIndexPath:(id)arg1;
- (id)getRecentListEmptyTips;
- (id)getRecentListHeaderTitle;
- (_Bool)isTopCellIndexPath:(id)arg1;
- (_Bool)isTopCellSection:(long long)arg1;
- (long long)getTableViewRowCountInSection:(long long)arg1;
- (long long)getTableViewSectionCount;
- (_Bool)hasRecentListData;
- (_Bool)hasTopCellListData;
- (_Bool)hasRespData;
- (id)getHomePageRecentCardListData;
- (id)getHomePageTopCellGroupData;
- (id)getHomePageFaqItem;
- (_Bool)isRecentListCardDataAllLoad;
- (void)saveHomePageDataToFile;
- (void)loadHomePageCacheDataAndRefreshFromSvr;
- (void)setupData;
- (id)initLogicControllerWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
