//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCommentBaseViewProtocol-Protocol.h"
#import "WCFinderCommentDetailHeaderViewDelegate-Protocol.h"
#import "WCFinderCommentDetailViewModelDelegate-Protocol.h"
#import "WCFinderContentHeaderViewDelegate-Protocol.h"
#import "WCFinderFansProfileViewControllerDelegate-Protocol.h"
#import "WCFinderFeedDetailCommentCellActionDelegate-Protocol.h"
#import "WCFinderFeedDetailRootCommentCellDelegate-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"

@class EmoticonBoardView, MMGrowTextView, MMUILabel, NSIndexPath, NSString, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UITableView, UITapGestureRecognizer, UIView, WCFinderAnimationLoadingView, WCFinderCommentDetailHeaderView, WCFinderCommentDetailViewModel, WCFinderCommentIdentityActionSheetView, WCFinderCommentListHeaderRefreshView, WCFinderContentHeaderView, WCFinderCreateCoordinator, WCFinderHeadImageView, WCFinderRefreshTableFooterView, WCInputController;
@protocol WCFinderCommentDetailViewControllerDelegate;

@interface WCFinderCommentDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MMGrowTextViewDelegate, WCFinderCommentDetailHeaderViewDelegate, WCFinderRefreshTableFooterViewDelegate, InputControllerDelegate, WCFinderFeedDetailCommentCellActionDelegate, WCFinderCommentDetailViewModelDelegate, WCFinderFeedDetailRootCommentCellDelegate, EGORefreshTableHeaderDelegate, WCActionSheetDelegate, WCFinderFansProfileViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderContentHeaderViewDelegate, WCFinderCommentBaseViewProtocol>
{
    _Bool _statusBarHidden;
    _Bool _disableCommentFunctions;
    _Bool _callFromDetail;
    _Bool _isCurrentRepaly;
    _Bool _isCurrentRepalySubComment;
    _Bool _shouldSaveLastCommentIdentity;
    _Bool _showTitle;
    CDUnknownBlockType _beforePushVCBlock;
    CDUnknownBlockType _afterPopVCBlock;
    id <WCFinderCommentDetailViewControllerDelegate> _delegate;
    UITableView *_tableView;
    MMGrowTextView *_growTextView;
    UIView *_textViewBackGroundView;
    UIView *_inputBackView;
    UITapGestureRecognizer *_tapGesture;
    NSIndexPath *_currentRepalyIndexPath;
    WCFinderCommentDetailHeaderView *_headerView;
    UIView *_containerView;
    WCFinderRefreshTableFooterView *_footerView;
    UIButton *_expressionButton;
    UIButton *_backgroundButton;
    EmoticonBoardView *_emoticonBoardView;
    WCInputController *_inputController;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderCommentDetailViewModel *_viewModel;
    UIView *_commentBackgroundView;
    unsigned long long _createTime;
    UIPanGestureRecognizer *_panGesture;
    WCFinderCommentListHeaderRefreshView *_headerRefreshView;
    UIView *_emptyHeaderView;
    UIView *_inputBottomView;
    WCFinderContentHeaderView *_contentHeaderView;
    UIView *_authenticationErrorHeaderView;
    UILabel *_commentCloseTips;
    UIView *_lastTipHeaderView;
    unsigned long long _lastTipHeaderType;
    WCFinderCreateCoordinator *_createCoordinator;
    unsigned long long _commentTextMaxLimit;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
    unsigned long long _commentStyleType;
    double _inputViewDefaultHeight;
    MMUILabel *_educateDoubleIdentityLabel;
    UIView *_educateDoubleIdentityShadowView;
    UIView *_triangleBViewShadowView;
    UIImageView *_triangleBView;
    NSIndexPath *_indexPath;
    WCFinderHeadImageView *_avatarImageView;
    UIImageView *_iconImageView;
    WCFinderCommentIdentityActionSheetView *_identityActionSheet;
    double _lastCloseTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool shouldSaveLastCommentIdentity; // @synthesize shouldSaveLastCommentIdentity=_shouldSaveLastCommentIdentity;
@property(nonatomic) double lastCloseTimestamp; // @synthesize lastCloseTimestamp=_lastCloseTimestamp;
@property(retain, nonatomic) WCFinderCommentIdentityActionSheetView *identityActionSheet; // @synthesize identityActionSheet=_identityActionSheet;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImageView *triangleBView; // @synthesize triangleBView=_triangleBView;
@property(retain, nonatomic) UIView *triangleBViewShadowView; // @synthesize triangleBViewShadowView=_triangleBViewShadowView;
@property(retain, nonatomic) UIView *educateDoubleIdentityShadowView; // @synthesize educateDoubleIdentityShadowView=_educateDoubleIdentityShadowView;
@property(retain, nonatomic) MMUILabel *educateDoubleIdentityLabel; // @synthesize educateDoubleIdentityLabel=_educateDoubleIdentityLabel;
@property(nonatomic) double inputViewDefaultHeight; // @synthesize inputViewDefaultHeight=_inputViewDefaultHeight;
@property(nonatomic) unsigned long long commentStyleType; // @synthesize commentStyleType=_commentStyleType;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(nonatomic) unsigned long long commentTextMaxLimit; // @synthesize commentTextMaxLimit=_commentTextMaxLimit;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) unsigned long long lastTipHeaderType; // @synthesize lastTipHeaderType=_lastTipHeaderType;
@property(nonatomic) __weak UIView *lastTipHeaderView; // @synthesize lastTipHeaderView=_lastTipHeaderView;
@property(retain, nonatomic) UILabel *commentCloseTips; // @synthesize commentCloseTips=_commentCloseTips;
@property(retain, nonatomic) UIView *authenticationErrorHeaderView; // @synthesize authenticationErrorHeaderView=_authenticationErrorHeaderView;
@property(retain, nonatomic) WCFinderContentHeaderView *contentHeaderView; // @synthesize contentHeaderView=_contentHeaderView;
@property(nonatomic) __weak UIView *inputBottomView; // @synthesize inputBottomView=_inputBottomView;
@property(retain, nonatomic) UIView *emptyHeaderView; // @synthesize emptyHeaderView=_emptyHeaderView;
@property(retain, nonatomic) WCFinderCommentListHeaderRefreshView *headerRefreshView; // @synthesize headerRefreshView=_headerRefreshView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) UIView *commentBackgroundView; // @synthesize commentBackgroundView=_commentBackgroundView;
@property(retain, nonatomic) WCFinderCommentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderCommentDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool isCurrentRepalySubComment; // @synthesize isCurrentRepalySubComment=_isCurrentRepalySubComment;
@property(retain, nonatomic) NSIndexPath *currentRepalyIndexPath; // @synthesize currentRepalyIndexPath=_currentRepalyIndexPath;
@property(nonatomic) _Bool isCurrentRepaly; // @synthesize isCurrentRepaly=_isCurrentRepaly;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIView *inputBackView; // @synthesize inputBackView=_inputBackView;
@property(retain, nonatomic) UIView *textViewBackGroundView; // @synthesize textViewBackGroundView=_textViewBackGroundView;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCFinderCommentDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool callFromDetail; // @synthesize callFromDetail=_callFromDetail;
@property(nonatomic) _Bool disableCommentFunctions; // @synthesize disableCommentFunctions=_disableCommentFunctions;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(copy, nonatomic) CDUnknownBlockType afterPopVCBlock; // @synthesize afterPopVCBlock=_afterPopVCBlock;
@property(copy, nonatomic) CDUnknownBlockType beforePushVCBlock; // @synthesize beforePushVCBlock=_beforePushVCBlock;
- (_Bool)hidesStatusBar;
- (_Bool)shouldStopPlayingVideo;
- (id)viewmodelOfCommentVC;
- (_Bool)presentWithAnimation;
- (void)enterShowKeyBoard;
- (_Bool)canUseCache;
- (unsigned long long)commentViewControllerShowType;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)fansProfileViewController:(id)arg1 clickLikeListWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickActionWithComment:(id)arg2 type:(unsigned long long)arg3;
- (void)clickToToast;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (_Bool)isCommentFunctionEnable;
- (_Bool)isInProfileScene;
- (_Bool)isMusicVideoCommentScene;
- (void)reportUserComment:(id)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (_Bool)isSelfPostComment:(id)arg1;
- (_Bool)isSelfPostFeed;
- (_Bool)isFinderComment:(unsigned long long)arg1;
- (void)showRevertBlackListActionViewWithComment:(id)arg1;
- (void)showBlackListActionViewWithComment:(id)arg1;
- (_Bool)canShowBlackListActionWithComment:(id)arg1;
- (void)showDeleteconfirmActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)feedDetailCommentCellOnLongPress:(id)arg1;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)startLoadingNextPage;
- (void)retryFetchNextPage;
- (void)showRetryNextPageFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (void)showEmptyRetryFetchView;
- (void)onClickUserHead:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedCommentFetchByRefCommentWithTid:(id)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(id)arg3;
- (void)showEmptyTipsView;
- (void)stopLoadingView;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(id)arg2 comment:(id)arg3;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(id)arg2 direction:(unsigned long long)arg3;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)finderFeedSubCommentPostTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1;
- (void)finderFeedCommentClickRefcontentFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentPostTid:(id)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentDataChange:(id)arg1;
- (void)finderFeedCommentIsEmpty:(id)arg1;
- (void)finderFeedCommentNoMoreData:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)onClickSubCommentWeChat:(id)arg1;
- (void)onClickSubCommentFinder:(id)arg1;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handlePopGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (void)closeCommentVC;
- (void)onClickCloseCommentDetailHeaderBtn;
- (void)hideErrorTips;
- (void)showErrorTipsWithType:(unsigned long long)arg1;
- (void)clickErrorHeaderViewAction;
- (void)resignResponder;
- (void)exitEnterComment;
- (void)scrollCommentToTop;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (_Bool)commentFunctionIsSpam;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)requestInitDataWithAnimation;
- (void)updateCommentSpamState;
- (void)updateCommetIdentityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateTextViewPostCommentIdentity;
- (void)updateCommentIdentityStatus;
- (void)showEducateDoubleIdentityLabel;
- (void)hiddenEducateDoubleIdentityLabel;
- (void)clickCommentIdentityChange;
- (_Bool)isMentionByFeedAuthor;
- (void)addGrowTextView;
- (void)setGrowTextViewPlaceholderWithReplyNickname:(id)arg1 isDefaultComment:(_Bool)arg2 useVMData:(_Bool)arg3;
- (void)setupInputView;
- (void)updateViewModelReplyScene:(int)arg1;
- (void)setUpTextView;
- (void)initEmoticonView;
- (void)onCommentContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)configureTableView;
- (void)updateCommentCountTitle;
- (void)keyboardDidShow;
- (void)keyboardWillShow;
- (void)tapBecomeFirstResponder;
- (void)activeInput;
- (void)initEducateDoubleIdentityLabel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)resetUI;
- (id)tid;
- (void)restoreCommentIdentity;
- (void)correctCommentIdentity;
- (void)viewWillPop:(_Bool)arg1;
- (void)updateEducateLabelShowCount;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewModel:(id)arg1 showTitle:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

