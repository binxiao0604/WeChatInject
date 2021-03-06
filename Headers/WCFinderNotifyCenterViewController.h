//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderNotifyCenterCellDelegate-Protocol.h"
#import "WCFinderNotifyCenterViewModelDelegate-Protocol.h"
#import "WCFinderNotifySelectViewDelegate-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, WCFinderNotifyCenterCellViewModel, WCFinderNotifyCenterViewModel, WCFinderNotifySelectView, WCFinderRedDotCtrlInfo;

@interface WCFinderNotifyCenterViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderNotifyCenterViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderNotifyCenterCellDelegate, WCFinderRedDotNotifyExt, WCFinderFeedBaseViewControllerProtocol, WCFinderNotifySelectViewDelegate>
{
    _Bool _showByPush;
    int _fetchFlag;
    WCFinderNotifyCenterViewModel *_viewModel;
    unsigned long long _currentTableViewSelectType;
    WCFinderNotifySelectView *_selectView;
    NSMutableArray *_tableViewArray;
    NSMutableArray *_refreshViewArray;
    NSMutableArray *_emptyLabelArray;
    NSMutableArray *_loadingViewArray;
    NSMutableArray *_retryViewArray;
    long long _unreadLikeCount;
    long long _unreadCommentCount;
    long long _unreadNotifyCount;
    double _enterTime;
    WCFinderNotifyCenterCellViewModel *_showProfileViewModel;
    NSMutableSet *_lastestDisplayIDSet;
    NSMutableSet *_oldDisplayIDSet;
    NSMutableSet *_lastestFollowIDSet;
    NSMutableSet *_oldFollowIDSet;
    NSMutableSet *_lastestCommentIDSet;
    NSMutableSet *_oldCommentIDSet;
    NSMutableSet *_lastestLikeIDSet;
    NSMutableSet *_oldLikeIDSet;
    NSMutableSet *_lastestAtIDSet;
    NSMutableSet *_oldAtIDSet;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(retain, nonatomic) NSMutableSet *oldAtIDSet; // @synthesize oldAtIDSet=_oldAtIDSet;
@property(retain, nonatomic) NSMutableSet *lastestAtIDSet; // @synthesize lastestAtIDSet=_lastestAtIDSet;
@property(retain, nonatomic) NSMutableSet *oldLikeIDSet; // @synthesize oldLikeIDSet=_oldLikeIDSet;
@property(retain, nonatomic) NSMutableSet *lastestLikeIDSet; // @synthesize lastestLikeIDSet=_lastestLikeIDSet;
@property(retain, nonatomic) NSMutableSet *oldCommentIDSet; // @synthesize oldCommentIDSet=_oldCommentIDSet;
@property(retain, nonatomic) NSMutableSet *lastestCommentIDSet; // @synthesize lastestCommentIDSet=_lastestCommentIDSet;
@property(retain, nonatomic) NSMutableSet *oldFollowIDSet; // @synthesize oldFollowIDSet=_oldFollowIDSet;
@property(retain, nonatomic) NSMutableSet *lastestFollowIDSet; // @synthesize lastestFollowIDSet=_lastestFollowIDSet;
@property(retain, nonatomic) NSMutableSet *oldDisplayIDSet; // @synthesize oldDisplayIDSet=_oldDisplayIDSet;
@property(retain, nonatomic) NSMutableSet *lastestDisplayIDSet; // @synthesize lastestDisplayIDSet=_lastestDisplayIDSet;
@property(nonatomic) _Bool showByPush; // @synthesize showByPush=_showByPush;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *showProfileViewModel; // @synthesize showProfileViewModel=_showProfileViewModel;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long unreadNotifyCount; // @synthesize unreadNotifyCount=_unreadNotifyCount;
@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) long long unreadLikeCount; // @synthesize unreadLikeCount=_unreadLikeCount;
@property(retain, nonatomic) NSMutableArray *retryViewArray; // @synthesize retryViewArray=_retryViewArray;
@property(retain, nonatomic) NSMutableArray *loadingViewArray; // @synthesize loadingViewArray=_loadingViewArray;
@property(retain, nonatomic) NSMutableArray *emptyLabelArray; // @synthesize emptyLabelArray=_emptyLabelArray;
@property(retain, nonatomic) NSMutableArray *refreshViewArray; // @synthesize refreshViewArray=_refreshViewArray;
@property(retain, nonatomic) NSMutableArray *tableViewArray; // @synthesize tableViewArray=_tableViewArray;
@property(nonatomic) __weak WCFinderNotifySelectView *selectView; // @synthesize selectView=_selectView;
@property(nonatomic) int fetchFlag; // @synthesize fetchFlag=_fetchFlag;
@property(nonatomic) unsigned long long currentTableViewSelectType; // @synthesize currentTableViewSelectType=_currentTableViewSelectType;
@property(retain, nonatomic) WCFinderNotifyCenterViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)notifyCenterRedDotDataReport:(id)arg1 isTriggerByUser:(_Bool)arg2 actionType:(unsigned long long)arg3;
- (id)redDotPathWith:(unsigned long long)arg1;
- (void)exposeTableViewCell:(id)arg1 type:(unsigned long long)arg2;
- (void)finderNotifySelectView:(id)arg1 didSelectButtonType:(unsigned long long)arg2 isSelectedByUser:(_Bool)arg3;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (id)atIDSetWithSection:(unsigned long long)arg1;
- (id)likeIDSetWithSection:(unsigned long long)arg1;
- (id)commentIDSetWithSection:(unsigned long long)arg1;
- (id)followIDSetWithSection:(unsigned long long)arg1;
- (id)displaySetWithSection:(unsigned long long)arg1;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)notifyCenterCell:(id)arg1 didClickThumbWithViewModel:(id)arg2;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)notifyCenterLoadMoreDataSuccessfulWithType:(unsigned long long)arg1;
- (void)notifyCenterLoadMoreDataFailWithType:(unsigned long long)arg1;
- (void)notifyCenterLoadNoMoreDataWithType:(unsigned long long)arg1;
- (void)notifyCenterNeedReloadWithType:(unsigned long long)arg1 isLoadMore:(_Bool)arg2;
- (void)openMusicVCWithDataItem:(id)arg1 viewModel:(id)arg2;
- (id)tableViewOfSelectType:(unsigned long long)arg1;
- (unsigned long long)notifyTypeOfTableView:(id)arg1;
- (void)fetchNewestMentionWithType:(unsigned long long)arg1;
- (void)showDataItemWasPrivateSetTips;
- (void)showDataItemWasDeletedTips;
- (void)showMentionDetailViewController:(id)arg1 shouldShowCommentList:(_Bool)arg2 navigationTitle:(id)arg3 shouldShowLikeList:(_Bool)arg4;
- (void)showDetailDataItemVC:(id)arg1 shouldShowCommentList:(_Bool)arg2 navigationTitle:(id)arg3 forceToMentionDetailViewController:(_Bool)arg4 shouldShowLikeList:(_Bool)arg5;
- (void)showDataItemDetailVCActionWithViewModel:(id)arg1 forceToMentionDetailViewController:(_Bool)arg2;
- (void)showFansListViewController;
- (void)retryFetchNewestMention;
- (void)exposeCellWithViewModel:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createNotifyCenterViewTableView;
- (id)createTopRetryView;
- (id)createTopLoadingView;
- (id)createRetryView;
- (id)createLoadingView;
- (void)configureTableView;
- (void)startFetchLastestMentionWithType:(unsigned long long)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (unsigned long long)defaultSelectType;
- (id)navigationBarBackgroundColor;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setUpExposeSet;
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

