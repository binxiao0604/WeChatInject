//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveCommentInputEmoticonView, MMFinderLiveOnlineUserProfileView, MMFinderLiveTask, MMFinderLiveTopCommentContentView, NSIndexPath, NSString;

@interface MMFinderLiveCommentView : MMLiveCommentView <WCActionSheetDelegate, WCFinderLiveExt, UIGestureRecognizerDelegate>
{
    _Bool _isEnableAnchorStatusRequesting;
    _Bool _needTableViewAutoScrollToRereshBeforeRotate;
    _Bool _needTableViewAutoScrollToRereshBeforeMinimize;
    CDUnknownBlockType _commentContentViewTopDidChanged;
    CDUnknownBlockType _commentCellDidLongPressedBlock;
    double _commentContentViewTop;
    MMFinderLiveCommentInputEmoticonView *_inputEmoticonView;
    MMFinderLiveTopCommentContentView *_topCommentContentView;
    MMFinderLiveOnlineUserProfileView *_profileView;
    NSString *_cachedLastTextForRetry;
    unsigned long long _enableAnchorStatusRequestSeq;
    double _lastEnableAnchorStatusRequestResultTime;
    NSIndexPath *_visbleIndexPathBeforeRotate;
    double _enterLiveTime;
}

+ (double)getContentWidgetsTopInPortraitForAudience:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidth:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double enterLiveTime; // @synthesize enterLiveTime=_enterLiveTime;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeMinimize; // @synthesize needTableViewAutoScrollToRereshBeforeMinimize=_needTableViewAutoScrollToRereshBeforeMinimize;
@property(nonatomic) _Bool needTableViewAutoScrollToRereshBeforeRotate; // @synthesize needTableViewAutoScrollToRereshBeforeRotate=_needTableViewAutoScrollToRereshBeforeRotate;
@property(retain, nonatomic) NSIndexPath *visbleIndexPathBeforeRotate; // @synthesize visbleIndexPathBeforeRotate=_visbleIndexPathBeforeRotate;
@property(nonatomic) double lastEnableAnchorStatusRequestResultTime; // @synthesize lastEnableAnchorStatusRequestResultTime=_lastEnableAnchorStatusRequestResultTime;
@property(nonatomic) _Bool isEnableAnchorStatusRequesting; // @synthesize isEnableAnchorStatusRequesting=_isEnableAnchorStatusRequesting;
@property(nonatomic) unsigned long long enableAnchorStatusRequestSeq; // @synthesize enableAnchorStatusRequestSeq=_enableAnchorStatusRequestSeq;
@property(retain, nonatomic) NSString *cachedLastTextForRetry; // @synthesize cachedLastTextForRetry=_cachedLastTextForRetry;
@property(retain, nonatomic) MMFinderLiveOnlineUserProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) MMFinderLiveTopCommentContentView *topCommentContentView; // @synthesize topCommentContentView=_topCommentContentView;
@property(retain, nonatomic) MMFinderLiveCommentInputEmoticonView *inputEmoticonView; // @synthesize inputEmoticonView=_inputEmoticonView;
@property(nonatomic) double commentContentViewTop; // @synthesize commentContentViewTop=_commentContentViewTop;
@property(copy, nonatomic) CDUnknownBlockType commentCellDidLongPressedBlock; // @synthesize commentCellDidLongPressedBlock=_commentCellDidLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType commentContentViewTopDidChanged; // @synthesize commentContentViewTopDidChanged=_commentContentViewTopDidChanged;
- (void)onSendingGiftBatchFinish:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4;
- (void)handleDisableCommentState:(id)arg1;
- (_Bool)isTableViewNeedAutoScrollToRefresh;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeMinimize;
- (void)restoreVisibleCommentAfterRotate;
- (void)storeVisibleCommentBeforeRotate;
- (void)updateComponentHiddenForCommentEnableChanged;
- (void)updateNotifyContentViewHidden;
- (double)commentTableHeight;
- (double)commentTableWidth;
- (void)onInputViewShowChange:(_Bool)arg1;
- (void)notifySelfGoToShopBusinessPage:(unsigned long long)arg1;
- (void)onPostFailError:(id)arg1 localSeq:(long long)arg2 taskId:(id)arg3;
- (void)adjustCommentTableViewHeight;
- (void)retryPostLiveCommentAfterSuccessVerified;
- (void)reportForCommentStateUpdated;
- (void)updateAntiSpamCommentStateWithBanNotify;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)arg1;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)handleLiveIsEnableCommentForAudience:(_Bool)arg1;
- (void)handleLiveIsEnableCommentForAnchor:(_Bool)arg1;
- (_Bool)checkCommentAbilityForAudience;
- (void)showInputViewWithSelectedComment:(id)arg1;
- (void)showInputViewWithText:(id)arg1;
- (void)onCommentButtonClick;
- (void)handleCommentTableViewPanGesture:(id)arg1;
- (void)handleCommentTableBackViewPanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateAnchorStatusItem:(_Bool)arg1;
- (void)onFinderLiveAnchorStatusUpdated:(id)arg1;
- (void)onFinderLiveUpdateCommentSingleEnable;
- (void)onFinderLiveUpdateCommentEnable;
- (void)updateCommentViewIfAnchorBanComment;
- (id)createUnReadCountLabel;
- (void)updateCommentStateForSingle:(unsigned long long)arg1;
- (void)handleOnNotifyLiveIsSingleEnableComment:(_Bool)arg1;
- (_Bool)isEnableCommentForSingle;
- (_Bool)isEnableCommentForAll;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)showToastForBanOrAllowComment:(_Bool)arg1 success:(_Bool)arg2;
- (id)registerCellClasses;
- (Class)commentTableCellClass;
- (void)onExitLive;
- (void)onEnterLive;
- (double)commentButtonLeft;
- (double)initialCommentTableBackViewBottom;
- (double)commentTableBackViewBottom;
- (id)commentFetchEngine;
- (id)commentPostEngine;
- (_Bool)applyUpdateLiveCommentEnabled:(_Bool)arg1 taskId:(id)arg2;
- (void)banOrOpenComment:(_Bool)arg1;
- (id)createCommentTableViewModel;
- (double)commentTableHeightForInputShow:(_Bool)arg1;
- (void)addRectTrianglePubbleView:(id)arg1;
- (void)showContent;
- (void)hideContent;
- (void)createCommentButton;
- (void)layoutCommentButton;
- (void)layoutCommentTableTapView;
- (void)layoutEmoticonBoardView;
- (void)layoutInputView;
- (void)configLiveInputView;
- (id)emoticonBoardView;
- (id)liveInputView;
- (struct CGSize)getCommentTableBackBottomAreaSize;
- (void)layoutNotifyCommentContentView;
- (void)layoutContentBackView;
- (void)layoutTopCommentContentView;
- (void)addGestureRecognizers;
- (void)layoutUI;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(_Bool)arg2 delegate:(id)arg3 inputEmoticonView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

