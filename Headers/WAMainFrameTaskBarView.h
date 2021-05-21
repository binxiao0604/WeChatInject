//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IUiUtilExt-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MiniTaskUIMgrExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WADynamicBackgroundGLViewControllerDelegate-Protocol.h"
#import "WAMainFrameTaskBarSectionBaseViewReportDelegate-Protocol.h"
#import "WAMainFrameTaskBarSectionOtherViewDelegate-Protocol.h"
#import "WAMainFrameTaskBarSectionWeAppViewDelegate-Protocol.h"
#import "WAMainFrameTaskItemMgrExt-Protocol.h"
#import "WCMainWindowExt-Protocol.h"

@class CADisplayLink, CAGradientLayer, DynamicBackgroundSystemConfig, MFTitleView, MMUIViewController, NSMutableArray, NSString, NewMainFrameRightTopMenuBtn, UIButton, UICollectionView, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, UISearchBar, WADynamicBackgroundGLViewController, WAMainFrameTaskBarCloseArea, WAMainFrameTaskBarDotLoadingView, WAMainFrameTaskBarLogic, WAMainFrameTaskBarSectionMyWeAppView, WATaskBarCollectionViewLayout;
@protocol WAMainFrameTaskBarViewDelegate;

@interface WAMainFrameTaskBarView : UIView <WAMainFrameTaskItemMgrExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WADynamicBackgroundGLViewControllerDelegate, WAMainFrameTaskBarSectionWeAppViewDelegate, WAMainFrameTaskBarSectionBaseViewReportDelegate, WAMainFrameTaskBarSectionOtherViewDelegate, IUiUtilExt, UIGestureRecognizerDelegate, WCMainWindowExt, MMLimitedModeExt, MiniTaskUIMgrExt>
{
    _Bool _containerVCDisappearing;
    _Bool _visible;
    _Bool _draggingShowState;
    _Bool _showState;
    _Bool _isSpread;
    _Bool _isStarNodeSpread;
    _Bool _containerTableViewIsSettingInset;
    _Bool _isPresentingSecondaryPage;
    _Bool _isPresentingSearch;
    _Bool _forbidInnerItemTransform;
    _Bool _tapTicState;
    _Bool _reseted;
    _Bool _canShowDynamicBackground;
    _Bool _isDraggingDown;
    _Bool _notifiedStartPull;
    _Bool _isAnimatingShowing;
    _Bool _isAnimatingHiding;
    _Bool _currentInDarkStyle;
    _Bool _isInDarkMode;
    _Bool _isLandscape;
    float _deskTopContainerViewWidth;
    float _deskTopContainerViewHeight;
    id <WAMainFrameTaskBarViewDelegate> _taskBarViewDelegate;
    MMUIViewController *_containerVC;
    UIView *_fakeNavigationBottomBackground;
    UIView *_fakeNavigationBackground;
    UISearchBar *_realSearchBar;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    UIView *_backgroundContainerView;
    UIView *_backgroundView;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
    CAGradientLayer *_backgroundLayer;
    UIView *_contentView;
    UIView *_fakeTopTitleView;
    UILabel *_fakeTopTitleLabel;
    UIView *_fakeTopTitleSeperateLine;
    UIView *_transformViewContainerView;
    UIView *_mixedCollectionViewContainerView;
    UIView *_transformView;
    CAGradientLayer *_gradientLayer;
    UICollectionView *_mixedCollectionView;
    WAMainFrameTaskBarCloseArea *_closeArea;
    UIView *_closeAreaBackgroundView;
    UIImageView *_closeImageView;
    UILabel *_closeLabel;
    UIButton *_closeButton;
    WAMainFrameTaskBarDotLoadingView *_arrowImageView;
    WATaskBarCollectionViewLayout *_mixedLayout;
    WAMainFrameTaskBarLogic *_taskBarLogic;
    NSMutableArray *_mixedSectionData;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    CADisplayLink *_displayLink;
    double _manualColorRatio;
    UIView *_fakeNavigationBarView;
    UIView *_fakeNavigationBarBackgroundView;
    UIView *_fakeNavigationBarInnerView;
    MFTitleView *_fakeNavigationBarTitleView;
    WAMainFrameTaskBarSectionMyWeAppView *_myWeAppView;
    UIImageView *_fakeNavigationBarLeftBarButton;
    NewMainFrameRightTopMenuBtn *_fakeNavigationBarRightButton;
    UIButton *_fakeMenuBtnArea;
    double _emptyViewAreaHeight;
    struct CGPoint _tableViewContentOffsetOnTapSearch;
    struct CGPoint _tableViewLastContentOffset;
}

+ (id)mixColor1:(id)arg1 color2:(id)arg2 ratio:(double)arg3;
+ (_Bool)checkLimitedBlockForType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) double emptyViewAreaHeight; // @synthesize emptyViewAreaHeight=_emptyViewAreaHeight;
@property(nonatomic) float deskTopContainerViewHeight; // @synthesize deskTopContainerViewHeight=_deskTopContainerViewHeight;
@property(nonatomic) float deskTopContainerViewWidth; // @synthesize deskTopContainerViewWidth=_deskTopContainerViewWidth;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) _Bool currentInDarkStyle; // @synthesize currentInDarkStyle=_currentInDarkStyle;
@property(retain, nonatomic) UIButton *fakeMenuBtnArea; // @synthesize fakeMenuBtnArea=_fakeMenuBtnArea;
@property(retain, nonatomic) NewMainFrameRightTopMenuBtn *fakeNavigationBarRightButton; // @synthesize fakeNavigationBarRightButton=_fakeNavigationBarRightButton;
@property(retain, nonatomic) UIImageView *fakeNavigationBarLeftBarButton; // @synthesize fakeNavigationBarLeftBarButton=_fakeNavigationBarLeftBarButton;
@property(retain, nonatomic) WAMainFrameTaskBarSectionMyWeAppView *myWeAppView; // @synthesize myWeAppView=_myWeAppView;
@property(retain, nonatomic) MFTitleView *fakeNavigationBarTitleView; // @synthesize fakeNavigationBarTitleView=_fakeNavigationBarTitleView;
@property(retain, nonatomic) UIView *fakeNavigationBarInnerView; // @synthesize fakeNavigationBarInnerView=_fakeNavigationBarInnerView;
@property(retain, nonatomic) UIView *fakeNavigationBarBackgroundView; // @synthesize fakeNavigationBarBackgroundView=_fakeNavigationBarBackgroundView;
@property(retain, nonatomic) UIView *fakeNavigationBarView; // @synthesize fakeNavigationBarView=_fakeNavigationBarView;
@property(nonatomic) _Bool isAnimatingHiding; // @synthesize isAnimatingHiding=_isAnimatingHiding;
@property(nonatomic) _Bool isAnimatingShowing; // @synthesize isAnimatingShowing=_isAnimatingShowing;
@property(nonatomic) _Bool notifiedStartPull; // @synthesize notifiedStartPull=_notifiedStartPull;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
@property(nonatomic) struct CGPoint tableViewLastContentOffset; // @synthesize tableViewLastContentOffset=_tableViewLastContentOffset;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(nonatomic) _Bool canShowDynamicBackground; // @synthesize canShowDynamicBackground=_canShowDynamicBackground;
@property(retain, nonatomic) NSMutableArray *mixedSectionData; // @synthesize mixedSectionData=_mixedSectionData;
@property(nonatomic) _Bool reseted; // @synthesize reseted=_reseted;
@property(nonatomic) _Bool tapTicState; // @synthesize tapTicState=_tapTicState;
@property(retain, nonatomic) WAMainFrameTaskBarLogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(retain, nonatomic) WATaskBarCollectionViewLayout *mixedLayout; // @synthesize mixedLayout=_mixedLayout;
@property(retain, nonatomic) WAMainFrameTaskBarDotLoadingView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIView *closeAreaBackgroundView; // @synthesize closeAreaBackgroundView=_closeAreaBackgroundView;
@property(retain, nonatomic) WAMainFrameTaskBarCloseArea *closeArea; // @synthesize closeArea=_closeArea;
@property(retain, nonatomic) UICollectionView *mixedCollectionView; // @synthesize mixedCollectionView=_mixedCollectionView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(retain, nonatomic) UIView *mixedCollectionViewContainerView; // @synthesize mixedCollectionViewContainerView=_mixedCollectionViewContainerView;
@property(retain, nonatomic) UIView *transformViewContainerView; // @synthesize transformViewContainerView=_transformViewContainerView;
@property(retain, nonatomic) UIView *fakeTopTitleSeperateLine; // @synthesize fakeTopTitleSeperateLine=_fakeTopTitleSeperateLine;
@property(retain, nonatomic) UILabel *fakeTopTitleLabel; // @synthesize fakeTopTitleLabel=_fakeTopTitleLabel;
@property(retain, nonatomic) UIView *fakeTopTitleView; // @synthesize fakeTopTitleView=_fakeTopTitleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(nonatomic) struct CGPoint tableViewContentOffsetOnTapSearch; // @synthesize tableViewContentOffsetOnTapSearch=_tableViewContentOffsetOnTapSearch;
@property(nonatomic) _Bool forbidInnerItemTransform; // @synthesize forbidInnerItemTransform=_forbidInnerItemTransform;
@property(nonatomic) _Bool isPresentingSearch; // @synthesize isPresentingSearch=_isPresentingSearch;
@property(nonatomic) _Bool isPresentingSecondaryPage; // @synthesize isPresentingSecondaryPage=_isPresentingSecondaryPage;
@property(nonatomic) _Bool containerTableViewIsSettingInset; // @synthesize containerTableViewIsSettingInset=_containerTableViewIsSettingInset;
@property(nonatomic) _Bool isStarNodeSpread; // @synthesize isStarNodeSpread=_isStarNodeSpread;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) _Bool showState; // @synthesize showState=_showState;
@property(nonatomic) _Bool draggingShowState; // @synthesize draggingShowState=_draggingShowState;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
@property(retain, nonatomic) UIView *fakeNavigationBackground; // @synthesize fakeNavigationBackground=_fakeNavigationBackground;
@property(retain, nonatomic) UIView *fakeNavigationBottomBackground; // @synthesize fakeNavigationBottomBackground=_fakeNavigationBottomBackground;
@property(nonatomic) _Bool containerVCDisappearing; // @synthesize containerVCDisappearing=_containerVCDisappearing;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WAMainFrameTaskBarViewDelegate> taskBarViewDelegate; // @synthesize taskBarViewDelegate=_taskBarViewDelegate;
- (void)reportTaskBarFeedAppear:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)reportWeTaskBarFeedDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)reportWeTaskBarWeAppFeedClick:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)reportWeTaskBarFeedClick:(id)arg1 weappData:(id)arg2 position:(long long)arg3;
- (void)onSectionViewWillDisplay:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onSectionViewDelete:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(_Bool)arg4;
- (void)onWeAppSectionViewClick:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)onSectionViewClick:(id)arg1 weappData:(id)arg2 position:(int)arg3;
- (void)notifyLimitedModeUpdated;
- (void)onMiniTaskEntryShowStateChanged;
- (void)onNavigationBarHiddenChanged;
- (void)mm_onColorAppearanceDidChange;
- (void)onLimitedModeChanged;
- (void)willEndSearch;
- (void)willBeginSearch;
- (_Bool)isDynamicBackgroundDarkStyle;
- (_Bool)isPointInItemArea:(struct CGPoint)arg1;
- (void)updateFakeNavigationBarRightBtnRedDot:(_Bool)arg1;
- (void)updateFakeNavigationBarTitleViewNearMode;
- (void)updateFakeNavigationBarTitleView:(unsigned int)arg1 title:(id)arg2;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)endLoadBGWebView;
- (void)reloadBGWebView;
- (_Bool)getStarNodeShowState;
- (id)getItemDataFromIndexPath:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onClickSearch;
- (void)notifyMyWeAppChanged:(_Bool)arg1 isFromMyWeApp:(_Bool)arg2 weappItem:(id)arg3 position:(int)arg4;
- (void)onClickMyWeApp;
- (void)onClickRencentWeApp;
- (void)animateChangeSectionHeight;
- (void)onMyWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)onWeAppItemDeleted:(id)arg1 position:(int)arg2;
- (void)onWeAppItemSelected:(id)arg1 position:(int)arg2 isMyWeApp:(_Bool)arg3;
- (void)onListViewHeightChange:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)udpateMyWeAppTopState;
- (void)dragUpToClose;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTranslationYChanged:(double)arg1;
- (double)getSelfContentViewY;
- (void)reverseVoiceTic;
- (void)voiceTic;
- (void)taptic;
- (_Bool)canBecomeFirstResponder;
- (void)onTapCloseArea:(id)arg1;
- (void)onTapFakeMenuBtn:(id)arg1;
- (void)layoutArrow;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)getIndexPathForFirstTaskItem;
- (id)getIndexPathForLastTaskItem;
- (void)layoutFakeNavigationBarRightButton;
- (void)layoutContentView;
- (void)layoutBackgroundView;
- (_Bool)needFixVerticalScrollIssue;
- (void)reloadData;
- (void)updateFakeNavigationBarContentColor:(id)arg1;
- (void)initFakeNavigationBarView;
- (void)initCloseAreaBackgroundView;
- (void)initCloseArea;
- (void)addGradientMaskView;
- (void)initMixedCollectionView;
- (id)createLayout;
- (void)initArrow;
- (void)initFakeTopTitleView;
- (void)initContentView;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (void)backgroundDisplayLink:(id)arg1;
- (void)buildBackgroundLayer;
- (void)buildGLLayer;
- (void)buildManualBackgroundDisplayLink;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackground;
- (void)initBackgroundView;
- (void)initView;
- (void)checkViewNodes;
- (void)relayoutSubviews;
- (void)layoutSubviews;
- (void)didEnterBackground;
- (void)onEnterForeground;
- (void)onMemoryWarning;
- (void)didRotate:(id)arg1;
- (void)moveToTopMostItem;
- (void)reset;
- (void)unreset;
- (void)endAnimateToHide;
- (void)startAnimateToHide;
- (void)endAnimateToShow;
- (void)startAnimateToShow;
- (void)animateToHide;
- (void)updateDarkStyle;
- (_Bool)isXDevice;
- (void)animateToShow;
- (void)updateGifAlphaProgress:(double)arg1;
- (void)updateFloatingProgress:(double)arg1 borderOffset:(double)arg2;
- (double)getBackgourndViewAlpha;
- (id)getBackgroundViewColor;
- (void)updateWebBgViewAlphaProgress:(double)arg1;
- (void)updateCollectionViewScaleProgress:(double)arg1;
- (void)updateCollectionViewAlphaProgress:(double)arg1;
- (void)updateFilteredVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateVisibleOffset:(double)arg1 startOffset:(double)arg2 borderOffset:(double)arg3;
- (void)updateFilteredVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateVisiableOffset:(double)arg1 borderOffset:(double)arg2;
- (void)updateFilteredStickingOffset:(double)arg1;
- (void)updateStickingOffset:(double)arg1;
- (double)calFakeNavigationBarHeight;
- (double)calCloseAreaHeight;
- (double)getFullScreenHeight;
- (double)calTaskBarHeight;
- (void)becomeUnVisible;
- (void)becomeVisible;
- (void)relayout;
- (void)updateItemPerLine;
- (void)animateRemoveSection:(id)arg1;
- (id)currentSectionState;
- (void)updateSectionData;
- (_Bool)enableOthersWording;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)detectDarkMode;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithMainFrameTaskBarLogic:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

