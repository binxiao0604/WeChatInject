//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMGameUIViewController.h"

#import "GameCenter3GameViewDelegate-Protocol.h"
#import "GameCenterFeedsCardViewDelegate-Protocol.h"
#import "GameCenterHeaderActionDelegate-Protocol.h"
#import "GameCenterMiniGameEntryViewDelegate-Protocol.h"
#import "GameCenterMyGameViewV5Delegate-Protocol.h"
#import "GameCenterNavCategoryViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GameCenterHeaderView, GameCenterHomeLogicControllerV5, MMLoadingView, MMTableView, MMUIView, NSMutableDictionary, NSMutableSet, NSString, UIImageView;

@interface GameCenterHomeViewControllerV5 : MMGameUIViewController <GameCenterMiniGameEntryViewDelegate, GameCenterMyGameViewV5Delegate, GameCenter3GameViewDelegate, GameCenterNavCategoryViewDelegate, GameCenterFeedsCardViewDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterHeaderActionDelegate>
{
    MMLoadingView *_loadingView;
    MMTableView *_tableView;
    GameCenterHomeLogicControllerV5 *_logicController;
    GameCenterHeaderView *_headerView;
    double _preContentOffsetY;
    UIImageView *_loadingFeedsImageView;
    MMUIView *_loadingFeedsBottomView;
    _Bool _bHasH5FloatLayer;
    _Bool _bfirstPageRetFromCgi;
    _Bool _bLoadingMoreFeeds;
    long long _entryNotifyType;
    NSMutableSet *_reportedIndexKeySet;
    NSMutableDictionary *_cachedKey2RowHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedKey2RowHeight; // @synthesize cachedKey2RowHeight=_cachedKey2RowHeight;
@property(retain, nonatomic) NSMutableSet *reportedIndexKeySet; // @synthesize reportedIndexKeySet=_reportedIndexKeySet;
@property(nonatomic) _Bool bLoadingMoreFeeds; // @synthesize bLoadingMoreFeeds=_bLoadingMoreFeeds;
@property _Bool bfirstPageRetFromCgi; // @synthesize bfirstPageRetFromCgi=_bfirstPageRetFromCgi;
@property(nonatomic) _Bool bHasH5FloatLayer; // @synthesize bHasH5FloatLayer=_bHasH5FloatLayer;
@property(nonatomic) long long entryNotifyType; // @synthesize entryNotifyType=_entryNotifyType;
- (void)commonFeedsClickReport:(id)arg1 ClickType:(id)arg2 Action:(long long)arg3 UiPosition:(int)arg4;
- (void)exposureReport:(int)arg1 ExternInfo:(id)arg2 AppId:(id)arg3;
- (_Bool)trySetExposureFlag:(long long)arg1 Row:(long long)arg2;
- (void)tryFeedsExposureReport:(id)arg1 Section:(long long)arg2 Row:(long long)arg3;
- (void)feedsQiPaiExposureReport:(id)arg1;
- (void)feedsGameListExposureReport:(id)arg1;
- (void)try3GameRecommExposureReport:(id)arg1 Section:(long long)arg2 Row:(long long)arg3;
- (void)tryMyGameExposureReport:(id)arg1 Section:(long long)arg2 Row:(long long)arg3;
- (void)tryMiniGameExposureReport:(id)arg1 Section:(long long)arg2 Row:(long long)arg3;
- (void)onMiniGameOrPortalClick:(_Bool)arg1 WxaInfo:(id)arg2 Index:(int)arg3;
- (void)topBannerClicked:(id)arg1 ExternInfo:(id)arg2;
- (void)onFeedsNoPlayGameRowClicked:(id)arg1 GameInfo:(id)arg2;
- (void)onFeedsGameListGameRowClicked:(id)arg1 GameInfo:(id)arg2 Rank:(int)arg3;
- (void)onFeedsDownloadGameClicked:(id)arg1 GameInfo:(id)arg2 ShouldUseHvAppInfo:(_Bool)arg3 UiPosition:(int)arg4;
- (void)onFeedsGameListMoreGame:(id)arg1 GameListMoreGameJumpUrl:(id)arg2;
- (void)onFeedsMiddleContentClicked:(id)arg1 JumpUrl:(id)arg2;
- (void)onFeedsCornerClicked:(id)arg1 CornerData:(id)arg2 IsLeft:(_Bool)arg3;
- (void)onNavCategoryItemClicked:(id)arg1 ItemIndex:(int)arg2;
- (void)onRecommMoreGameClicked:(id)arg1 UiArea:(unsigned int)arg2;
- (void)onRecommGameClicked:(id)arg1 UiArea:(unsigned int)arg2;
- (void)onMyGame:(id)arg1 moreGameClick:(id)arg2 MoreGameJumpUrl:(id)arg3;
- (void)onMyGame:(id)arg1 contentClick:(id)arg2 ContentItem:(id)arg3 JumpUrl:(id)arg4;
- (void)onMyGame:(id)arg1 quickEntranceClick:(id)arg2 EntranceItem:(id)arg3;
- (void)onMyGame:(id)arg1 gameRowClick:(id)arg2 ShouldUseHvAppInfo:(_Bool)arg3;
- (void)onMyGame:(id)arg1 downloadGameClick:(id)arg2 ShouldUseHvAppInfo:(_Bool)arg3;
- (void)onSearchButtonClicked:(id)arg1;
- (long long)showWebViewWithUrl:(id)arg1 EntryScene:(id)arg2;
- (void)bubbleButtonClicked;
- (long long)openGameDetailViewWithGameInfo:(id)arg1 sourceScene:(long long)arg2;
- (id)makeFeedsCardCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeTypeNavCell:(id)arg1 identifier:(id)arg2;
- (id)make3GamRecommCell:(id)arg1 identifier:(id)arg2 Section:(long long)arg3 Row:(long long)arg4;
- (id)makeMyGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 section:(long long)arg3 index:(long long)arg4;
- (id)makeMiniGameCell:(id)arg1 identifier:(id)arg2 Section:(long long)arg3 Row:(long long)arg4;
- (id)makeBubbleCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeSearchCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getCachedHeightForKey:(id)arg1;
- (id)cachedKeyForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)topBannerDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)endLoadingAnimation;
- (void)beginLoadingAnimation;
- (void)endFeedsLoading;
- (void)beginFeedsLoading;
- (id)getLoadinBottomView;
- (void)feedsListDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)initTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initHeaderView;
- (void)refreshHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithSourceScene:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

