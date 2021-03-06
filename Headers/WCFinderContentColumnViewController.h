//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewAnimationDelegate-Protocol.h"
#import "WCFinderCommentDetailViewControllerDelegate-Protocol.h"
#import "WCFinderCommentIdentityViewControllerDelegate-Protocol.h"
#import "WCFinderContentColumnEndViewDelegate-Protocol.h"
#import "WCFinderContentColumnViewModelDelegate-Protocol.h"
#import "WCFinderContentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderFriendLikeTableViewCellDelegate-Protocol.h"
#import "WCFinderInduceCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderLiveNoticeTableViewCellDelegate-Protocol.h"
#import "WCFinderMoreContentColumnsViewDelegate-Protocol.h"
#import "WCFinderMultiMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderToolbarTableViewCellDelegate-Protocol.h"
#import "WCFinderVideoPlayerExt-Protocol.h"
#import "WCGeneralListMonitorExt-Protocol.h"

@class ForwardMessageLogicController, NSIndexPath, NSMutableDictionary, NSString, UILabel, UITableView, UITapGestureRecognizer, UIView, UIViewController, WCActionSheet, WCFinderAnimationLoadingView, WCFinderContentColumnEndView, WCFinderContentColumnViewModel, WCFinderCreateCoordinator, WCFinderFeedContentVM, WCFinderRefreshTableFooterView;
@protocol WCFinderCommentBaseViewProtocol, WCFinderContentColumnViewControllerDelegate;

@interface WCFinderContentColumnViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMultiMediaTableViewCellDelegate, WCFinderContentTableViewCellDelegate, WCFinderToolbarTableViewCellDelegate, WCFinderFeedCommentTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCGeneralListMonitorExt, WCFinderCommentDetailViewControllerDelegate, WCFinderCommentIdentityViewControllerDelegate, WCFinderVideoPlayerExt, WCFinderFriendLikeTableViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderContentColumnViewModelDelegate, WCActionSheetDelegate, WCFinderInduceCommentTableViewCellDelegate, WCFinderMoreContentColumnsViewDelegate, WCFinderContentColumnEndViewDelegate, ForwardMessageLogicDelegate, WCCommitViewAnimationDelegate, WCFinderLiveNoticeTableViewCellDelegate>
{
    _Bool _isSilencePlay;
    _Bool _isDisableVideoAutoPlay;
    _Bool _needsResumeTimelineVideo;
    _Bool _shouldShowMachineGuide;
    _Bool _isAppear;
    _Bool _needReportMoreColumnViewExpose;
    id <WCFinderContentColumnViewControllerDelegate> _delegate;
    WCFinderContentColumnViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UIView *_noDataTipsView;
    UITableView *_tableView;
    WCFinderFeedContentVM *_currentShareContentVM;
    NSString *_latestAutoplayVideoTid;
    NSIndexPath *_currentForceIndexPath;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    NSMutableDictionary *_exposureDict;
    WCFinderCreateCoordinator *_createCoordinator;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    NSString *_currentVideoTid;
    unsigned long long _refreshTime;
    WCFinderFeedContentVM *_targetVM;
    NSString *_titleWording;
    WCFinderAnimationLoadingView *_loadingView;
    UIView *_loadingViewContainer;
    WCActionSheet *_forwardActionSheet;
    UIView *_guideFooterView;
    NSString *_endWording;
    ForwardMessageLogicController *_forwardLogic;
    WCFinderContentColumnEndView *_endView;
    NSString *_clickMoreTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clickMoreTitle; // @synthesize clickMoreTitle=_clickMoreTitle;
@property(nonatomic) _Bool needReportMoreColumnViewExpose; // @synthesize needReportMoreColumnViewExpose=_needReportMoreColumnViewExpose;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) __weak WCFinderContentColumnEndView *endView; // @synthesize endView=_endView;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(copy, nonatomic) NSString *endWording; // @synthesize endWording=_endWording;
@property(retain, nonatomic) UIView *guideFooterView; // @synthesize guideFooterView=_guideFooterView;
@property(nonatomic) _Bool shouldShowMachineGuide; // @synthesize shouldShowMachineGuide=_shouldShowMachineGuide;
@property(retain, nonatomic) WCActionSheet *forwardActionSheet; // @synthesize forwardActionSheet=_forwardActionSheet;
@property(retain, nonatomic) UIView *loadingViewContainer; // @synthesize loadingViewContainer=_loadingViewContainer;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(retain, nonatomic) WCFinderFeedContentVM *targetVM; // @synthesize targetVM=_targetVM;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(nonatomic) _Bool isDisableVideoAutoPlay; // @synthesize isDisableVideoAutoPlay=_isDisableVideoAutoPlay;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) WCFinderFeedContentVM *currentShareContentVM; // @synthesize currentShareContentVM=_currentShareContentVM;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *noDataTipsView; // @synthesize noDataTipsView=_noDataTipsView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderContentColumnViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderContentColumnViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2;
- (void)liveNoticeTableViewCell:(id)arg1 updateLiveNoticeInfo:(id)arg2;
- (void)reportEndViewExport:(_Bool)arg1 clickTitle:(id)arg2;
- (void)finderContentColumnEndViewOnUnExposeMoreFeedView:(id)arg1;
- (void)finderContentColumnEndViewOnExposeColumnsView:(id)arg1;
- (void)finderContentColumnEndViewOnExposeMoreFeedView:(id)arg1;
- (void)jumpHotTab;
- (void)finderContentColumnEndViewOnClickMorePage:(id)arg1 cardType:(long long)arg2;
- (void)finderContentColumnFeedsJustEndLinkFailed;
- (void)moreContentColumnsTableViewCell:(id)arg1 clickedLinkInfo:(id)arg2 withTitle:(id)arg3 forEndLinkCard:(id)arg4;
- (void)onClickInduceCommnetView:(id)arg1 forFeedVM:(id)arg2 identifyType:(unsigned long long)arg3 commentPostScene:(long long)arg4;
- (unsigned long long)feedViewControllerScene;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToMoment:(id)arg1;
- (void)sharedToFriend:(id)arg1;
- (void)handleFeedScrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)thumbUrlForFeedVMAtIndex:(long long)arg1;
- (id)createContentCardSharedItem;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickRightItem;
- (void)onClickCommentUserName:(id)arg1 contentVM:(id)arg2;
- (void)finderCommentCell:(id)arg1 didClickCommentLikeWithcomment:(id)arg2 contentVM:(id)arg3;
- (void)onRefreshMediaUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onRefreshCommentUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onClickCommentAction:(id)arg1 contentVM:(id)arg2;
- (void)showCommentActionSheetWithComment:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1;
- (id)getItemArrayConfig;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)doShowInduceCommentForCurrentPhoto:(id)arg1;
- (void)tryShowInduceCommentForCurrentPhoto:(id)arg1 preContentVM:(id)arg2;
- (void)showLongVideoBubble:(id)arg1;
- (void)reloadInduceCommentCell:(id)arg1;
- (void)onShowLongVideoBubble:(id)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (id)getItemArrayConfigWithContentVM:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickLiveNowView:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellDidClickHeaderView:(id)arg1 contentVM:(id)arg2;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)scrollEndProcess;
- (void)throttleScrollProcess;
- (void)preloadVideoItems;
- (void)checkCurrentForceIndexPath;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopVisibleVideo;
- (void)stopCurrentVideo;
- (void)autoplayVideoProcess;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderContentColumnFeedsDidAppendFeeds:(id)arg1;
- (void)finderContentColumnFeedsEmpty;
- (void)finderContentColumnFeedsRequestHasLoadData;
- (void)finderContentColumnFeedsRequestStartLoading;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)finderContentColumnFeedsFetchFailWithErrorCode:(int)arg1;
- (void)finderLikeListEmpty;
- (void)finderLikeListDeleteDataItemVM:(id)arg1;
- (void)finderLikeListDisinclineContentVM:(id)arg1 index:(long long)arg2;
- (void)finderContentColumnFeedsRequestNoMoreData;
- (void)finderContentColumnFeedsRequestFinished;
- (id)specialParamsForFeedId:(id)arg1;
- (void)reloadDataWrap;
- (id)getListView;
- (id)feedIdByIndex:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)showDisplayMoreViewType;
- (_Bool)showDisplayEndMoreViewsForSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)clickMoreAction;
- (void)resetLoadingStateWithAnimation:(_Bool)arg1;
- (void)startLoadingState;
- (void)showFirstPageFeeds;
- (void)configureTableView;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)reportCurrentTidStats;
- (void)currentForceIndexPathWillChanged;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willDisappear;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollToTargetVM;
- (void)setupRightMenuItem;
- (id)navigationBarBackgroundColor;
- (id)displayTitle;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 shouldShowMachineGuide:(_Bool)arg2 manualLoadNextPage:(_Bool)arg3 target:(id)arg4 titleWording:(id)arg5 endWording:(id)arg6 streamCard:(id)arg7;
- (id)initWithDataArray:(id)arg1 target:(id)arg2 lastBuffer:(id)arg3 continueFlag:(_Bool)arg4 similarDataItem:(id)arg5 scene:(unsigned long long)arg6 title:(id)arg7 fetchScene:(long long)arg8 shouldShowMachineGuide:(_Bool)arg9 endWording:(id)arg10 textCard:(id)arg11 manualLoadNextPage:(_Bool)arg12 streamCard:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

