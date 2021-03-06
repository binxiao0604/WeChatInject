//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "IRecordPermissionCheckExt-Protocol.h"
#import "IStreamVoiceInputExt-Protocol.h"
#import "MMWebSearchViewDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "SearchVoiceInputViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "WCStoryDismissInteractiveTransitionDelegate-Protocol.h"
#import "WSTagSearchDelegate-Protocol.h"
#import "WSWebViewPluginableProtocol-Protocol.h"
#import "_TtP6WeChat24WSPlugin_NavControllable_-Protocol.h"

@class FTSWebSearchMgr, MMLoadingView, MMTagTextField, MMUILabel, MMWebSearchController, NSData, NSDictionary, NSMutableDictionary, NSString, SearchVoiceInputViewController, UIButton, UIImage, UIImageView, UILabel, UIScreenEdgePanGestureRecognizer, UIView, WAAppDismissAnimateTransition, WCFullScreenTitleView, WCStatTimerHelper, WCStoryDismissInteractiveTransition, WSEmoticonPadViewController, WSTagSearchLogic, WSWebViewPluginScheduler;
@protocol WCWebSearchViewControllerDelegate, YYWebViewInterface;

@interface WCWebSearchViewControllerNewH5 : MMUIViewController <UITextFieldDelegate, MMWebSearchViewDelegate, WSTagSearchDelegate, SearchVoiceInputViewControllerDelegate, IStreamVoiceInputExt, IRecordPermissionCheckExt, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, _TtP6WeChat24WSPlugin_NavControllable_, UIViewControllerTransitioningDelegate, WCStoryDismissInteractiveTransitionDelegate, MMWebViewDelegate, WSWebViewPluginableProtocol>
{
    NSString *_lastFormatQueryFromMultiStageForFixingWKSearchBug;
    UIView *_navBarBkg;
    UIView *_navBarShadowView;
    unsigned long long _currentSwitchBusinessType;
    WCFullScreenTitleView *_titleView;
    UIView *_navContentView;
    UIView *_navContentRightDivideView;
    UIImageView *_navSearchLeftView;
    UIButton *_navVoiceInputButton;
    UIView *_logoContainerView;
    UIImageView *_titleLogoView;
    MMUILabel *_titleLabel;
    UIView *_cornerWrapView;
    UIView *_cornerClipView;
    UIView *_contentSearchTextFieldWrapView;
    MMTagTextField *_contentSearchTextField;
    UIImageView *_contentSearchLeftView;
    UIButton *_contentSearchHitBtn;
    UIButton *_contentVoiceInputButton;
    WSEmoticonPadViewController *_emoticonPad;
    WSTagSearchLogic *_tagSearchLogic;
    _Bool _isAnimatingToWebSearch;
    _Bool _isAnimatingCloseLastDetailView;
    int _sugOpStat;
    _Bool _isFirstPage;
    _Bool _isSencondPageFromVerticalEntrance;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _needSendOnFocusEventAfterJsbridgeReady;
    _Bool _needSendSwitchTabAfterJsbridgeReady;
    _Bool _needReloadWebView;
    _Bool _hasReloadWebView;
    _Bool _isResumeReloading;
    _Bool _isAppInForeground;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool _hasInitContainerView;
    unsigned long long _beginPreloadTime;
    _Bool _hasSendOnUiInitEvent;
    UILabel *_noSearchBarNavTitle;
    _Bool _hasBecomeFirstResponder;
    NSMutableDictionary *_jumpWebParams;
    _Bool _bMixSearchWithNonNavBackItem;
    _Bool _bSearchWithNonNavCancelItem;
    _Bool _bFromWebRecommendSetting;
    _Bool _enablePopBackInteractiveGesture;
    _Bool _isUpdatingH5;
    _Bool _canScreenShot;
    _Bool _tempHideCancelButton;
    _Bool _bViewWillBePushed;
    int _VCType;
    int _initScene;
    NSDictionary *_initedUrlParams;
    id <WCWebSearchViewControllerDelegate> _delegate;
    NSString *_fromUrlString;
    WSWebViewPluginScheduler *_pluginScheduler;
    unsigned long long _enterTime;
    SearchVoiceInputViewController *_searchVoiceInputViewController;
    MMWebSearchController *_webSearchController;
    UIView<YYWebViewInterface> *_firstPageWebView;
    MMTagTextField *_navSearchTextField;
    UIView *_updateH5View;
    FTSWebSearchMgr *_ftsWebSearchMgr;
    MMLoadingView *_loadingView;
    UIView *_screenshotMaskView;
    UIImageView *_screenshowImageView;
    UIImageView *_mergeImageView;
    UIImage *_screenshotImage;
    MMUILabel *_tipsLabel;
    NSData *_exifImageData;
    NSString *_currentQuery;
    UIButton *_testScreenshowBtn;
    WCStoryDismissInteractiveTransition *_dismissInteractiveTransition;
    WAAppDismissAnimateTransition *_dismissAnimateTransition;
    UIScreenEdgePanGestureRecognizer *_popBackInteractivePopGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture; // @synthesize popBackInteractivePopGesture=_popBackInteractivePopGesture;
@property(retain, nonatomic) WAAppDismissAnimateTransition *dismissAnimateTransition; // @synthesize dismissAnimateTransition=_dismissAnimateTransition;
@property(retain, nonatomic) WCStoryDismissInteractiveTransition *dismissInteractiveTransition; // @synthesize dismissInteractiveTransition=_dismissInteractiveTransition;
@property(nonatomic) _Bool bViewWillBePushed; // @synthesize bViewWillBePushed=_bViewWillBePushed;
@property(nonatomic) _Bool tempHideCancelButton; // @synthesize tempHideCancelButton=_tempHideCancelButton;
@property(retain, nonatomic) UIButton *testScreenshowBtn; // @synthesize testScreenshowBtn=_testScreenshowBtn;
@property(nonatomic) _Bool canScreenShot; // @synthesize canScreenShot=_canScreenShot;
@property(retain, nonatomic) NSString *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(retain, nonatomic) NSData *exifImageData; // @synthesize exifImageData=_exifImageData;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;
@property(retain, nonatomic) UIImageView *mergeImageView; // @synthesize mergeImageView=_mergeImageView;
@property(retain, nonatomic) UIImageView *screenshowImageView; // @synthesize screenshowImageView=_screenshowImageView;
@property(retain, nonatomic) UIView *screenshotMaskView; // @synthesize screenshotMaskView=_screenshotMaskView;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FTSWebSearchMgr *ftsWebSearchMgr; // @synthesize ftsWebSearchMgr=_ftsWebSearchMgr;
@property(retain, nonatomic) UIView *updateH5View; // @synthesize updateH5View=_updateH5View;
@property(nonatomic) _Bool isUpdatingH5; // @synthesize isUpdatingH5=_isUpdatingH5;
@property(nonatomic) int initScene; // @synthesize initScene=_initScene;
@property(retain, nonatomic) MMTagTextField *navSearchTextField; // @synthesize navSearchTextField=_navSearchTextField;
@property(retain, nonatomic) UIView<YYWebViewInterface> *firstPageWebView; // @synthesize firstPageWebView=_firstPageWebView;
@property(retain, nonatomic) MMWebSearchController *webSearchController; // @synthesize webSearchController=_webSearchController;
@property(retain, nonatomic) SearchVoiceInputViewController *searchVoiceInputViewController; // @synthesize searchVoiceInputViewController=_searchVoiceInputViewController;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) _Bool enablePopBackInteractiveGesture; // @synthesize enablePopBackInteractiveGesture=_enablePopBackInteractiveGesture;
@property(retain, nonatomic) NSString *fromUrlString; // @synthesize fromUrlString=_fromUrlString;
@property(nonatomic) __weak id <WCWebSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
@property(nonatomic) _Bool bFromWebRecommendSetting; // @synthesize bFromWebRecommendSetting=_bFromWebRecommendSetting;
@property(nonatomic) _Bool bSearchWithNonNavCancelItem; // @synthesize bSearchWithNonNavCancelItem=_bSearchWithNonNavCancelItem;
@property(nonatomic) _Bool bMixSearchWithNonNavBackItem; // @synthesize bMixSearchWithNonNavBackItem=_bMixSearchWithNonNavBackItem;
@property(retain, nonatomic) NSDictionary *initedUrlParams; // @synthesize initedUrlParams=_initedUrlParams;
- (void)doExitPage;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (void)onSendButtonClicked;
- (void)addDownloadTaskWith:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onTagSearchBarInfoChangedToNotify:(id)arg1;
- (void)initiativeSearch:(id)arg1;
- (void)onGotoEmoticonPad:(id)arg1;
- (void)onQuerySimilarPicSearch:(id)arg1;
- (void)tryParallelAsyncWebSearch:(unsigned long long)arg1 scene:(unsigned int)arg2 query:(id)arg3;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)onOpenWebRecommend:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)resumeWebSearchView;
- (void)findCanvasWrapViewIn:(id)arg1 toDic:(id)arg2;
- (void)removeAllCanvasWrapperView;
- (void)reInitWebSearchVCAndReplace;
- (void)onInjectPreJsFailWhenReloadWebview:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchBackToPreviousView;
- (void)onViewTypeChanged;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onSearchReset;
- (void)webviewScrollViewWillBeginDragging:(id)arg1;
- (id)getNativeHeight;
- (id)getInputHeight;
- (id)getInputMarginLeftRight;
- (id)getInputMarginTop;
- (void)onSearchHotWord:(id)arg1;
- (void)onStartVerticalSearch:(unsigned long long)arg1 focusSearchBar:(_Bool)arg2;
- (void)tryRestoreNavSearchBar;
- (void)onRemoveDetailView:(id)arg1;
- (void)onControllerWillBeginDetailSearch:(id)arg1;
- (void)onConfigNavBarWithParams:(id)arg1;
- (void)onSearchInputSetPlaceHolder:(id)arg1;
- (void)onSearchInputSetText:(id)arg1 tagInfo:(id)arg2;
- (double)webSearchViewPosY;
- (void)startCommonSearch:(id)arg1 withSugId:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)onSwitchSearchContext:(int)arg1 andType:(unsigned long long)arg2 andQuery:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned long long)arg2;
- (void)reportOpenWebViewStatusWithHttpStatus:(long long)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onTextViewAttributeTextChange:(id)arg1;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)onVoiceInputEndWithText:(id)arg1;
- (id)localSessionId;
- (void)animateShowVoiceInputController;
- (void)contentSearchBtnClicked:(id)arg1 isVoiceInputBtnClick:(_Bool)arg2;
- (void)onContentSearchHitBtnClick:(id)arg1;
- (void)onClickVoiceInput:(id)arg1;
- (_Bool)isDetailSearch;
- (_Bool)isVertSearh;
- (_Bool)isMixSearch;
- (id)getSearchMarkImageForBusinesstype:(unsigned long long)arg1;
- (id)getPlaceHolderForBusinessType:(unsigned long long)arg1;
- (id)getMixSearchPlaceHolder;
- (void)setContentSearchUIForType:(unsigned long long)arg1;
- (void)resetContentSearch;
- (void)resetFromWebSearch;
- (void)registerTagSearchLogic;
- (void)outsideSetJumpParams:(id)arg1;
- (void)updateLocalSessionId:(id)arg1;
- (void)endWebSearchAnimation;
- (void)beginWebSearchAnimation;
- (void)didEndWebSearch;
- (void)willEndWebSearch;
- (void)tryInitNavVoiceButton;
- (void)didBeginWebSearch;
- (void)willBeginWebSearch;
- (void)setLogoViewMove:(double)arg1 isUp:(_Bool)arg2;
- (void)setLogoViewHidden:(_Bool)arg1;
- (void)setPlaceImage:(id)arg1;
- (void)adjustContentTopMargin:(double)arg1;
- (void)setNavLeftBarItemHidden:(_Bool)arg1;
- (void)forceSetSwitchButtonHidden:(_Bool)arg1;
- (void)layoutSwitchButton;
- (void)layoutNavContentWithBizType:(unsigned long long)arg1;
- (void)layoutNavContentForNormalStatus;
- (void)layoutNavContentForEditStatus;
- (void)onNavigationCancelItemClick:(id)arg1;
- (void)onNavigationSetItemClick:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)longPressBackButton:(id)arg1;
- (_Bool)shouldForbidNavBack;
- (_Bool)isRightBarButtonItemHidden;
- (void)resetTitle;
- (void)viewDidTransitionToNewSize;
- (double)navbarLeftOriX;
- (void)layoutNavContent;
- (void)setNavCancelButtonHidden:(_Bool)arg1;
- (void)setFakeNavBarHidden:(_Bool)arg1 slideAnimated:(_Bool)arg2;
- (void)resetNavSearch;
- (void)tryShowStreamVoiceInputViewController;
- (void)setLeftBarButtonStyleBack;
- (void)setLeftBarButtonStyleClose;
- (void)setChatSearchNavBar;
- (void)initNavigationBar;
- (void)onCancel;
- (void)adjustNavigationBarFrame;
- (void)initView;
- (void)initWebSearchControllerWithScene:(int)arg1;
- (id)initWithScene:(int)arg1;
- (void)onSystemEnterBackground;
- (void)onSystemEnterForeground;
- (void)viewDidLayoutSubviews;
- (void)willDisappear;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)preInitContainerView;
- (void)tryInitContainerView;
- (void)viewDidLoad;
- (_Bool)showNavigationBarSepLine;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)onDismissInteractiveTransitionBegin:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)addPopBackInteractivePopGesture;
- (_Bool)isSpecialSearch;
- (_Bool)isTopicSearch;
- (_Bool)isImageSearch;
- (_Bool)isFingertipSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

