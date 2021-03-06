//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMiniMizeUserdRecordUpdateExt-Protocol.h"
#import "MiniTaskCollectionCellDelegate-Protocol.h"
#import "MiniTaskPanGestureHandlerDelegate-Protocol.h"
#import "MiniTaskTransitionAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMUIButton, MMUILabel, MiniTaskCollectioViewMaskLayer, MiniTaskCollectionViewLayout, MiniTaskDynamicBgView, MiniTaskPanGestureHandler, MiniTaskViewControllerContext, MultiTaskPageActionInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIImageView, UIView;

@interface MiniTaskViewController : MMUIViewController <MiniTaskPanGestureHandlerDelegate, MiniTaskTransitionAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MiniTaskCollectionCellDelegate, IMiniMizeUserdRecordUpdateExt>
{
    _Bool _hasBeenPushed;
    _Bool _isCollectionUpdateAnimating;
    MultiTaskPageActionInfo *_pageActionInfo;
    UIView *_collectionContainerView;
    UICollectionView *_collectionView;
    MMUILabel *_titleLabel;
    MiniTaskCollectionViewLayout *_collectionViewLayout;
    NSMutableArray *_arrCellViewModel;
    MiniTaskCollectioViewMaskLayer *_maskLayer;
    NSMutableSet *_exposedTaskKey;
    NSMutableDictionary *_dicLastExposeTimeStamp;
    MiniTaskViewControllerContext *_context;
    MiniTaskDynamicBgView *_backgroundView;
    UIImageView *_fakeMainFrameSnapshotView;
    MMUIButton *_fakeSnapshotMaskView;
    UIView *_fakeSnapshotShadowView;
    MiniTaskPanGestureHandler *_leftPanPopGestureHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniTaskPanGestureHandler *leftPanPopGestureHandler; // @synthesize leftPanPopGestureHandler=_leftPanPopGestureHandler;
@property(retain, nonatomic) UIView *fakeSnapshotShadowView; // @synthesize fakeSnapshotShadowView=_fakeSnapshotShadowView;
@property(retain, nonatomic) MMUIButton *fakeSnapshotMaskView; // @synthesize fakeSnapshotMaskView=_fakeSnapshotMaskView;
@property(retain, nonatomic) UIImageView *fakeMainFrameSnapshotView; // @synthesize fakeMainFrameSnapshotView=_fakeMainFrameSnapshotView;
@property(retain, nonatomic) MiniTaskDynamicBgView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MiniTaskViewControllerContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool isCollectionUpdateAnimating; // @synthesize isCollectionUpdateAnimating=_isCollectionUpdateAnimating;
@property(nonatomic) _Bool hasBeenPushed; // @synthesize hasBeenPushed=_hasBeenPushed;
@property(retain, nonatomic) NSMutableDictionary *dicLastExposeTimeStamp; // @synthesize dicLastExposeTimeStamp=_dicLastExposeTimeStamp;
@property(retain, nonatomic) NSMutableSet *exposedTaskKey; // @synthesize exposedTaskKey=_exposedTaskKey;
@property(retain, nonatomic) MiniTaskCollectioViewMaskLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSMutableArray *arrCellViewModel; // @synthesize arrCellViewModel=_arrCellViewModel;
@property(retain, nonatomic) MiniTaskCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo; // @synthesize pageActionInfo=_pageActionInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reportVisibleCellsExposed;
- (void)reportItemActionWithTaskData:(id)arg1 actionType:(unsigned long long)arg2;
- (void)reportWhenExit;
- (long long)indexOfTaskData:(id)arg1;
- (double)collectionViewTop;
- (double)titleCenterY;
- (void)onTaskSnapShotUpdate:(id)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void)onUpdateMinimizedTaskData:(id)arg1;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)onMinimizedTaskDataListChanged;
- (double)collectionViewOffsetY;
- (unsigned long long)currentCellCount;
- (void)onCollectionViewPinnedCellCloseBtnClick:(id)arg1;
- (void)scrollToMakeFirstCellFull;
- (void)updateVisibleCellsFrontViewWithContentOffsetY:(double)arg1;
- (void)updateViewWhenDataListChanged;
- (void)checkAddMiniTaskBackFromNavigationController:(id)arg1;
- (CDUnknownBlockType)createDimissEndCallback;
- (CDUnknownBlockType)createDimisssBeginCallback;
- (CDUnknownBlockType)createPresentEndCallbackWithTaskData:(id)arg1;
- (CDUnknownBlockType)cellFrameForDataTaskGetter;
- (void)launchTaskWithCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)shouldInteractivePop;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)onFakeSnapshotClicked;
- (id)indexPathForTaskData:(id)arg1;
- (void)updateTaskTransitionContext:(id)arg1;
- (void)updateDefaultTaskTransitionContext:(id)arg1;
- (id)getCurrentContextId;
- (void)setupFakeSnapshot;
- (void)setupBackgroundView;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canRightEdgeInteractiveDismiss;
- (void)initTitleLabel;
- (void)initMaskLayer;
- (void)initCollectionView;
- (void)initNavigationItems;
- (void)initMainUI;
- (void)initData;
- (void)dealloc;
- (void)updateContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)onTransitionEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)arg1 isComplete:(_Bool)arg2;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)arg1;
- (void)setupLeftPanGestureHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

