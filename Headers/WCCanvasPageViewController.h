//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMProductControllerExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "ViewLocationDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCanvasActionSheetDelegate-Protocol.h"
#import "WCCanvasComponentDelegate-Protocol.h"
#import "WCCanvasDynamicDataLoaderDelegate-Protocol.h"
#import "WCCanvasFloatViewDelegate-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"
#import "WCWeAppBizTempSessionHelperDelegate-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CMessageWrap, ForwardMessageLogicController, MMLoadingView, MMProgressViewEx, MMTableView, MMTimer, MMUIView, MMUIWindow, MMWebImageView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURLRequest, ScanQRCodeLogicController, UIButton, UIImage, UIImageView, UINavigationController, UIView, WCActionSheetWithScanWXCode, WCAdvertiseInfo, WCCanvasActionSheet, WCCanvasArrowDownIcon, WCCanvasComponentItem, WCCanvasDynamicDataLoader, WCCanvasFloatActionBtnView, WCCanvasFloatConversionBarView, WCCanvasFloatJumpView, WCCanvasFloatScrollView, WCCanvasFloatView, WCCanvasReportMgr, WCDataItem, WCWeAppBizTempSessionHelper;
@protocol WCCanvasPageViewControllerDelegate;

@interface WCCanvasPageViewController : MMUIViewController <WCCanvasComponentDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate, UIViewControllerAnimatedTransitioning, UINavigationControllerDelegate, WCCanvasImageLoaderObserver, ViewLocationDelegate, FavForwardLogicDelegate, WCCanvasDynamicDataLoaderDelegate, MMWebImageViewDelegate, MMProductControllerExt, YYWebViewDelegate, WCNetworkMediaPlayerDelegate, WCCanvasActionSheetDelegate, WCCanvasFloatViewDelegate, WCWeAppBizTempSessionHelperDelegate, BaseScanLogicDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    WCDataItem *m_dataItem;
    MMTableView *m_tableView;
    CMessageWrap *m_msgWrap;
    WCAdvertiseInfo *m_advertiseInfo;
    UINavigationController *_shareToTimelineNavController;
    MMLoadingView *_loadingView;
    ForwardMessageLogicController *m_forwardLogic;
    MMUIWindow *m_fullScreenWindow;
    _Bool m_bShowSelfView;
    _Bool m_bForbidFavMenu;
    _Bool _m_bAllowFirstSightVoice;
    _Bool _shouldGenForwardAdXml;
    _Bool _shouldHideNavigationWhenPop;
    _Bool _m_bClickedCloseBtn;
    _Bool _m_bHasTryDownloadAllPage;
    _Bool _m_bHasDrag;
    _Bool _isKeyboardShowing;
    _Bool _isKeyboardDidShow;
    _Bool _hasShowFloatView;
    _Bool _isActionSheetShow;
    _Bool _isFloatViewInvisible;
    _Bool _shouldDetectBottomSwipeAction;
    _Bool _shouldForbidRefreshTwistComponent;
    _Bool _adDataHasChange;
    _Bool _isViewAppear;
    _Bool _floatJumpViewHadSwipeJumped;
    _Bool _isCanvasViewDisplay;
    int _m_canvasPageScene;
    int _m_originCanvasScene;
    unsigned int _specialTransitioningType;
    unsigned int _beginTimeDownloadFirstImage;
    UIView *m_originView;
    MMWebImageView *m_FirstViewToAnimate;
    UIView *m_topView;
    WCCanvasArrowDownIcon *m_arrowDownIcon;
    UIImageView *m_topMaskView;
    UIImage *m_arrowDownImage;
    UIView *m_originViewCopyToShowAnimation;
    NSString *sessionId;
    NSString *statBuffer;
    id <WCCanvasPageViewControllerDelegate> _m_delegate;
    NSString *_m_thumbUrl;
    NSDictionary *_extraInfo;
    NSString *_currentCanvasId;
    NSString *_fromCanvasId;
    NSString *_candidateTwistCardId;
    double _videoContinuePlayInterval;
    UIImage *_canvasSnapShot;
    UIImage *_originSnapShot;
    UIImage *_cardBottomSnapShot;
    UIView *_originCellView;
    MMProgressViewEx *_progressLoadingView;
    UIButton *_m_scrollDownArea;
    NSMutableArray *_m_arrowDownIconHasShowList;
    NSMutableDictionary *_m_dicCellIdToHeight;
    MMTimer *_timer;
    UIButton *_m_fullScreenExitButton;
    WCCanvasDynamicDataLoader *_dynamicLoader;
    NSMutableDictionary *_URL2BgImageViewMap;
    WCCanvasComponentItem *_m_oFirstVideoComponentItem;
    WCCanvasActionSheet *_actionSheet;
    WCWeAppBizTempSessionHelper *_bizSessionHelper;
    NSMutableDictionary *_m_dicH5UrlToPreloadWebview;
    WCCanvasReportMgr *_m_reportMgr;
    MMUIView *_fixIphoneXView;
    WCCanvasFloatView *_floatView;
    WCCanvasFloatScrollView *_floatScrollView;
    WCCanvasFloatConversionBarView *_floatConversionBar;
    WCCanvasFloatActionBtnView *_floatActionView;
    NSString *_sharedUxinfo;
    unsigned long long _qrScanComponentType;
    NSString *_qrExtInfo;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    WCActionSheetWithScanWXCode *_actionSheetWithWXCode;
    MMTimer *_exposureReportTimer;
    CDUnknownBlockType _qrCodeScanCompleteCallback;
    WCCanvasFloatJumpView *_floatJumpView;
    double _floatJumpViewInitPositionY;
    struct CGPoint _offsetBeforeDragging;
    struct CGPoint _fromOffsetBeforeScoll;
    struct CGPoint _toOffsetAfterScroll;
    struct CGPoint _contentOffsetWhenKeyboardWillShow;
    struct CGRect m_originRectInScreen;
    struct CGRect _originCardFrameInScreen;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCanvasViewDisplay; // @synthesize isCanvasViewDisplay=_isCanvasViewDisplay;
@property(nonatomic) _Bool floatJumpViewHadSwipeJumped; // @synthesize floatJumpViewHadSwipeJumped=_floatJumpViewHadSwipeJumped;
@property(nonatomic) double floatJumpViewInitPositionY; // @synthesize floatJumpViewInitPositionY=_floatJumpViewInitPositionY;
@property(retain, nonatomic) WCCanvasFloatJumpView *floatJumpView; // @synthesize floatJumpView=_floatJumpView;
@property(copy, nonatomic) CDUnknownBlockType qrCodeScanCompleteCallback; // @synthesize qrCodeScanCompleteCallback=_qrCodeScanCompleteCallback;
@property(retain, nonatomic) MMTimer *exposureReportTimer; // @synthesize exposureReportTimer=_exposureReportTimer;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) WCActionSheetWithScanWXCode *actionSheetWithWXCode; // @synthesize actionSheetWithWXCode=_actionSheetWithWXCode;
@property(retain, nonatomic) ScanQRCodeLogicController *scanQRCodeLogic; // @synthesize scanQRCodeLogic=_scanQRCodeLogic;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(nonatomic) unsigned long long qrScanComponentType; // @synthesize qrScanComponentType=_qrScanComponentType;
@property(retain, nonatomic) NSString *sharedUxinfo; // @synthesize sharedUxinfo=_sharedUxinfo;
@property(nonatomic) _Bool adDataHasChange; // @synthesize adDataHasChange=_adDataHasChange;
@property(nonatomic) _Bool shouldForbidRefreshTwistComponent; // @synthesize shouldForbidRefreshTwistComponent=_shouldForbidRefreshTwistComponent;
@property(nonatomic) _Bool shouldDetectBottomSwipeAction; // @synthesize shouldDetectBottomSwipeAction=_shouldDetectBottomSwipeAction;
@property(retain, nonatomic) WCCanvasFloatActionBtnView *floatActionView; // @synthesize floatActionView=_floatActionView;
@property(retain, nonatomic) WCCanvasFloatConversionBarView *floatConversionBar; // @synthesize floatConversionBar=_floatConversionBar;
@property(retain, nonatomic) WCCanvasFloatScrollView *floatScrollView; // @synthesize floatScrollView=_floatScrollView;
@property(nonatomic) _Bool isFloatViewInvisible; // @synthesize isFloatViewInvisible=_isFloatViewInvisible;
@property(nonatomic) _Bool isActionSheetShow; // @synthesize isActionSheetShow=_isActionSheetShow;
@property(nonatomic) _Bool hasShowFloatView; // @synthesize hasShowFloatView=_hasShowFloatView;
@property(retain, nonatomic) WCCanvasFloatView *floatView; // @synthesize floatView=_floatView;
@property(retain, nonatomic) MMUIView *fixIphoneXView; // @synthesize fixIphoneXView=_fixIphoneXView;
@property(retain, nonatomic) WCCanvasReportMgr *m_reportMgr; // @synthesize m_reportMgr=_m_reportMgr;
@property(retain, nonatomic) NSMutableDictionary *m_dicH5UrlToPreloadWebview; // @synthesize m_dicH5UrlToPreloadWebview=_m_dicH5UrlToPreloadWebview;
@property(nonatomic) _Bool isKeyboardDidShow; // @synthesize isKeyboardDidShow=_isKeyboardDidShow;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) struct CGPoint contentOffsetWhenKeyboardWillShow; // @synthesize contentOffsetWhenKeyboardWillShow=_contentOffsetWhenKeyboardWillShow;
@property(retain, nonatomic) WCWeAppBizTempSessionHelper *bizSessionHelper; // @synthesize bizSessionHelper=_bizSessionHelper;
@property(retain, nonatomic) WCCanvasActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) WCCanvasComponentItem *m_oFirstVideoComponentItem; // @synthesize m_oFirstVideoComponentItem=_m_oFirstVideoComponentItem;
@property(nonatomic) _Bool m_bHasDrag; // @synthesize m_bHasDrag=_m_bHasDrag;
@property(retain, nonatomic) NSMutableDictionary *URL2BgImageViewMap; // @synthesize URL2BgImageViewMap=_URL2BgImageViewMap;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dynamicLoader; // @synthesize dynamicLoader=_dynamicLoader;
@property(retain, nonatomic) UIButton *m_fullScreenExitButton; // @synthesize m_fullScreenExitButton=_m_fullScreenExitButton;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned int beginTimeDownloadFirstImage; // @synthesize beginTimeDownloadFirstImage=_beginTimeDownloadFirstImage;
@property(nonatomic) _Bool m_bHasTryDownloadAllPage; // @synthesize m_bHasTryDownloadAllPage=_m_bHasTryDownloadAllPage;
@property(nonatomic) _Bool m_bClickedCloseBtn; // @synthesize m_bClickedCloseBtn=_m_bClickedCloseBtn;
@property(retain, nonatomic) NSMutableDictionary *m_dicCellIdToHeight; // @synthesize m_dicCellIdToHeight=_m_dicCellIdToHeight;
@property(retain, nonatomic) NSMutableArray *m_arrowDownIconHasShowList; // @synthesize m_arrowDownIconHasShowList=_m_arrowDownIconHasShowList;
@property(retain, nonatomic) UIButton *m_scrollDownArea; // @synthesize m_scrollDownArea=_m_scrollDownArea;
@property(retain, nonatomic) MMProgressViewEx *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(retain, nonatomic) UIView *originCellView; // @synthesize originCellView=_originCellView;
@property(retain, nonatomic) UIImage *cardBottomSnapShot; // @synthesize cardBottomSnapShot=_cardBottomSnapShot;
@property(retain, nonatomic) UIImage *originSnapShot; // @synthesize originSnapShot=_originSnapShot;
@property(retain, nonatomic) UIImage *canvasSnapShot; // @synthesize canvasSnapShot=_canvasSnapShot;
@property(nonatomic) struct CGRect originCardFrameInScreen; // @synthesize originCardFrameInScreen=_originCardFrameInScreen;
@property(nonatomic) struct CGPoint toOffsetAfterScroll; // @synthesize toOffsetAfterScroll=_toOffsetAfterScroll;
@property(nonatomic) struct CGPoint fromOffsetBeforeScoll; // @synthesize fromOffsetBeforeScoll=_fromOffsetBeforeScoll;
@property(nonatomic) struct CGPoint offsetBeforeDragging; // @synthesize offsetBeforeDragging=_offsetBeforeDragging;
@property(nonatomic) double videoContinuePlayInterval; // @synthesize videoContinuePlayInterval=_videoContinuePlayInterval;
@property(nonatomic) unsigned int specialTransitioningType; // @synthesize specialTransitioningType=_specialTransitioningType;
@property(nonatomic) _Bool shouldHideNavigationWhenPop; // @synthesize shouldHideNavigationWhenPop=_shouldHideNavigationWhenPop;
@property(nonatomic) _Bool shouldGenForwardAdXml; // @synthesize shouldGenForwardAdXml=_shouldGenForwardAdXml;
@property(retain, nonatomic) NSString *candidateTwistCardId; // @synthesize candidateTwistCardId=_candidateTwistCardId;
@property(retain, nonatomic) NSString *fromCanvasId; // @synthesize fromCanvasId=_fromCanvasId;
@property(retain, nonatomic) NSString *currentCanvasId; // @synthesize currentCanvasId=_currentCanvasId;
@property(nonatomic) int m_originCanvasScene; // @synthesize m_originCanvasScene=_m_originCanvasScene;
@property(nonatomic) _Bool m_bAllowFirstSightVoice; // @synthesize m_bAllowFirstSightVoice=_m_bAllowFirstSightVoice;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) int m_canvasPageScene; // @synthesize m_canvasPageScene=_m_canvasPageScene;
@property(retain, nonatomic) NSString *m_thumbUrl; // @synthesize m_thumbUrl=_m_thumbUrl;
@property(nonatomic) __weak id <WCCanvasPageViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *statBuffer; // @synthesize statBuffer;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(retain, nonatomic) UIView *m_originViewCopyToShowAnimation; // @synthesize m_originViewCopyToShowAnimation;
@property(retain, nonatomic) UIImage *m_arrowDownImage; // @synthesize m_arrowDownImage;
@property(retain, nonatomic) WCAdvertiseInfo *m_advertiseInfo; // @synthesize m_advertiseInfo;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) UIImageView *m_topMaskView; // @synthesize m_topMaskView;
@property(nonatomic) _Bool m_bForbidFavMenu; // @synthesize m_bForbidFavMenu;
@property(retain, nonatomic) WCCanvasArrowDownIcon *m_arrowDownIcon; // @synthesize m_arrowDownIcon;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
@property(retain, nonatomic) MMWebImageView *m_FirstViewToAnimate; // @synthesize m_FirstViewToAnimate;
@property(retain, nonatomic) UIView *m_originView; // @synthesize m_originView;
@property(nonatomic) struct CGRect m_originRectInScreen; // @synthesize m_originRectInScreen;
@property(nonatomic) _Bool m_bShowSelfView; // @synthesize m_bShowSelfView;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
- (void)openUrlInSafari;
- (id)fetchUltraWebviewUrl;
- (void)pushViewController:(id)arg1 animationType:(int)arg2;
- (void)addJumpTransitionAnimationFromBottom;
- (double)getFirstComponentHeight;
- (void)doAdCanvasExposureReport:(_Bool)arg1;
- (_Bool)needToReportAdCanvasExposure;
- (void)doAdCanvasValidExposureReport;
- (void)tryToDoAdCanvasExposureReport;
- (void)doShareReportInner:(int)arg1 toUser:(id)arg2;
- (void)doShareToTimelineReport;
- (void)doShareToContactReport:(id)arg1;
- (void)didTakeScreenShot;
- (void)onApplicationDidBecomeActive;
- (void)onResignActive;
- (void)onScanEnds;
- (void)doTwistGetTwistCardIdResultReportWithResult:(_Bool)arg1;
- (void)doQRScanReport:(unsigned long long)arg1 qrUrl:(id)arg2 qrResultUrl:(id)arg3;
- (void)scanQRCode:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3;
- (void)checkAndShowQRCodeDialog;
- (unsigned long long)convertComponentTypeToExtType:(unsigned long long)arg1 isForClick:(_Bool)arg2;
- (unsigned long long)getAdQRResultType;
- (_Bool)isFountQRResult;
- (void)onPureImageLongPress:(_Bool)arg1 image:(id)arg2 url:(id)arg3 componentType:(unsigned long long)arg4 qrExtInfo:(id)arg5 scanComplete:(CDUnknownBlockType)arg6;
- (void)preScanImage:(id)arg1 url:(id)arg2 type:(unsigned long long)arg3 encKey:(id)arg4;
- (id)getQRLogic:(unsigned long long)arg1;
- (unsigned int)convertComponentTypeToSourceType:(unsigned long long)arg1;
- (id)fetchAdvertiseInfo;
- (void)onComponentBeClicked:(id)arg1;
- (_Bool)updateVoteAdInfoInner:(id)arg1 dicInfo:(id)arg2;
- (void)updateVoteAdInfo:(id)arg1 rightVoteInfo:(id)arg2;
- (void)resetSightViewVoice:(_Bool)arg1;
- (void)onFloatViewWillDisappear;
- (void)onBtnComponentClick:(long long)arg1;
- (void)onFloatViewDisapper;
- (void)onFloatViewDidAppear;
- (void)onCloseBtnClick;
- (void)bizTempSessionEndWithError:(id)arg1;
- (void)bizTempSessionEndWithSuccess:(id)arg1;
- (void)bizTempSessionJumpWithSuccess:(id)arg1;
- (void)stopBizTempSessionLoadingView;
- (void)startBizTempSessionLoadingView;
- (void)updateFloatJumpView;
- (void)fireBottomSwipeAction;
- (void)tryToFiredBottomSwipeAction;
- (void)tryToDisableBottomSwipeAction;
- (void)tryToDetectBottomSwipeAction;
- (void)tryRemoveFloatView;
- (void)addFloatViewWithComponentItem:(id)arg1;
- (void)triggerToShowFloatView:(id)arg1 triggerId:(id)arg2;
- (void)checkAutoShowFloatLayoutView;
- (id)getFloatComponentByCID:(id)arg1;
- (id)getAutoShowFloatLayoutComponent;
- (void)onMediaPlayer:(id)arg1 playerStateChange:(long long)arg2;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (_Bool)needHiddenMoreMenu;
- (void)onClosePlayer;
- (id)getPreInjectScriptStr;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onTrySetStatusBarHiddenForCanvasAd;
- (void)onLoadImageOK:(id)arg1;
- (id)getFavForawrdViewController;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)updateAdData;
- (void)onUpdateSharedUxinfo:(id)arg1;
- (void)exposureCurrentScreen;
- (void)animateShowAfterFirstImageDownloaded;
- (void)stopLoadingAndShowAnimation;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onFetchTwistCardId:(id)arg1;
- (void)onComponentTryToShareWithType:(long long)arg1;
- (void)componentSizeDidChanged;
- (void)updateGroup:(id)arg1 usingDynamicInfo:(id)arg2;
- (_Bool)updateComponent:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)updatePage:(id)arg1 usingDynamicInfo:(id)arg2;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onFavProductReturn:(unsigned int)arg1 errMsg:(id)arg2;
- (void)onUpdateCanvasStateResult:(_Bool)arg1;
- (void)onCanvasDynamicDataReturn:(id)arg1;
- (void)onExitBtnClicked;
- (unsigned int)getDownloadSceneFromPageScene;
- (_Bool)shouldInteractivePop;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hideWithoutAnimate;
- (void)animateHide;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)fetchCanvasSnapshotImage:(_Bool)arg1 returnNewFrame:(struct CGRect *)arg2;
- (id)fetchTimeLineOriginSnapshotImageForView:(id)arg1;
- (id)fetchTimeLineCurrentSnapshotImageForView:(id)arg1;
- (void)simpleTwistAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)twistAnimateFlipSpecialView:(id)arg1 clockwise:(_Bool)arg2;
- (id)fetchDestComponentForTwistAnim;
- (void)twistAnimateFlipCanvasComponentViewWithContainerView:(id)arg1 specialView:(id)arg2 clockwise:(_Bool)arg3;
- (void)twistAnimateHideSubviewsInHugeDiskView:(id)arg1 specialView:(id)arg2 clockwise:(_Bool)arg3;
- (void)twistAnimateStage2WithContainerView:(id)arg1 hugeDiskView:(id)arg2 specialView:(id)arg3 clockwise:(_Bool)arg4;
- (void)twistAnimateShowCanvasView:(id)arg1;
- (void)twistAnimateAsyncShowCanvasView:(id)arg1;
- (void)twistAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animationEnded:(_Bool)arg1;
- (void)newAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)transitionFromBottom:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (_Bool)needUseOldAnimation;
- (double)transitionDuration:(id)arg1;
- (void)animateHideWithOrientation:(long long)arg1;
- (void)animateShowStep2WithFinalFrame:(struct CGRect)arg1;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)WillEnterForeground:(id)arg1;
- (void)DidEnterBackground:(id)arg1;
- (void)notifyComponetWithAppearedFactorInMainScreen;
- (void)notifyFullyAppearOrDisappearComponetInMainScreen;
- (void)notifyFullyAppearComponetInMainScreen;
- (void)notifyComponentHasAppearInMainScreenFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (id)shareDescForAdInfo:(id)arg1;
- (id)shareTitleForAdInfo:(id)arg1;
- (int)getOriginCanvasScene;
- (void)tryToCancelLoadFirstImage;
- (id)getCanvasComponentItemAtIndexPath:(id)arg1;
- (id)getBackGroundColorAtSection:(long long)arg1;
- (id)getCellIdentifierAtIndexPath:(id)arg1;
- (unsigned int)getAdType;
- (id)getUxInfo;
- (id)getSnsId;
- (_Bool)getUseSnsCdnDownloadMode:(id)arg1;
- (_Bool)isSearchCanvas;
- (_Bool)isCurrentVCFromCanvasAd;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isFirstCellInSection:(id)arg1;
- (_Bool)isLastCellInSection:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFloatJumpViewVisibility:(_Bool)arg1;
- (void)onComponentVideoPlayEnd:(id)arg1 isFullScreen:(_Bool)arg2;
- (void)setTableViewScrollEnabled:(_Bool)arg1;
- (void)notifyFloatComponentsStatusChanged:(_Bool)arg1;
- (_Bool)isFloatConversionBarVisible;
- (_Bool)isFloatActionViewsVisible;
- (void)updateFloatActionViewsStatus;
- (_Bool)shouldComponentAddToFloatConversionView:(id)arg1;
- (_Bool)shouldComponentAddToFloatJumpView:(id)arg1;
- (_Bool)shouldComponentAddToFloatScrollView:(id)arg1;
- (_Bool)shouldComponentAddToFloatView:(id)arg1;
- (void)initFloatComponents;
- (void)tryToUpdateTwistCardId;
- (id)tryAppendAdParamsForWeappPath:(id)arg1;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)hideActionSheet;
- (void)showActionSheet:(id)arg1 body:(id)arg2 withIcon:(id)arg3 hideHeader:(_Bool)arg4 showCancelAction:(_Bool)arg5;
- (void)jumpToPhonePage:(id)arg1;
- (void)jumpToLocationPage:(id)arg1;
- (void)dimScrollDownArea:(long long)arg1;
- (void)lightScrollDownArea:(long long)arg1;
- (void)clearScrollDownArea;
- (double)fetchScrollDownAreaDelayTime;
- (_Bool)shouldShowScrollDownArea;
- (void)clearDownArrowIcon;
- (void)hideDownArrowIcon;
- (_Bool)shouldShowSpecialAnimatedTransitioning;
- (_Bool)shouldUseCustomAnimation;
- (_Bool)forbidCustomAnimation;
- (void)resumeTableViewUserInteraction;
- (void)tryShowArrowDownIconWithCurrentOffsetAndLastComponent;
- (_Bool)shouldShowArrowDownIconWithCurrentOffset;
- (_Bool)canShowDownArrow:(long long)arg1;
- (void)tryShowDownArrowAnimate:(long long)arg1;
- (void)handleScrollDownAreaClickEvent:(id)arg1;
- (void)delayShowScrollDownAreaWithNumber:(id)arg1;
- (void)showScrollDownAreaWithAnimation;
- (void)showScrollDownAreaWithSection:(long long)arg1;
- (void)showDownArrowAnimateWithSection:(long long)arg1;
- (void)showDownArrowAfterPushed;
- (double)fetchVideoContinuePlayIntervalForComponentItem:(id)arg1;
- (_Bool)shouldHideVideoFullScreenButton;
- (_Bool)shouldVideoLayerRasterize;
- (_Bool)shouldVideoComponentTryToPlay:(long long)arg1;
- (_Bool)isCurSectionBlackMoreThanWhite:(long long)arg1;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (void)onCloseCanvasByComponent:(id)arg1;
- (_Bool)canvasComponent:(id)arg1 isChildViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willPresentUrl:(id)arg2;
- (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(inout id)arg2 withComponentItem:(id)arg3;
- (void)canvasComponentItem:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)setLoading:(_Bool)arg1;
- (void)canvasComponent:(id)arg1 willJumpToCanvas:(id)arg2 canvasId:(id)arg3 pageScene:(int)arg4;
- (void)updateVideoComponentPlayingState:(_Bool)arg1;
- (void)jumpStreamVideoForSightComponent:(id)arg1;
- (id)getCanvasOriginScene;
- (void)getCanvasScene:(int *)arg1;
- (void)reloadDataImmediately;
- (void)reloadData;
- (id)getWeAppSceneNoteForComponentItem:(id)arg1;
- (id)getAdUxInfo;
- (id)getAdUxInfoByWhetherUseSharedFirst:(_Bool)arg1;
- (_Bool)isCanvasOpenedFromH5;
- (_Bool)isCanvasOpenedInShareScene;
- (id)getReportMgr;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (id)getThumbUrl;
- (void)loadingAfterDownFirstImageFail;
- (void)loadingAfterForwardMessageOK;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onClickRightBarCanvasItem;
- (void)onMoreBtnClicked;
- (void)shareCanvasPageToTimeline;
- (id)getCanvasXml;
- (id)genStatExtString;
- (id)genUploadTask;
- (void)sendCanvasPageToFriend;
- (id)fetchShareWebUrl;
- (void)favCavasPage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)clearQRScanActionSheet;
- (_Bool)isFloatViewWithWebStoreComponent;
- (void)closeCanvasPageWithAnimation;
- (void)onBtnCloseCanvasPage;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGRect)rectForSection:(id)arg1 section:(long long)arg2;
- (void)didTableViewEndDecelerating;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initView;
- (void)updateArrowDownImageWithSection:(long long)arg1;
- (void)addBlurView:(id)arg1 page:(id)arg2;
- (void)tryInitSectionBgView;
- (void)initFirstCellView;
- (void)initTopBar;
- (void)initPushingNavigationItem;
- (void)initNavigationItem;
- (void)initTableView;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)navigationBarBackgroundColor;
- (_Bool)useTransparentNavibar;
- (void)dealloc;
- (void)tryToReportExitWithLeaveType;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)getCacheWebviewWithUrl:(id)arg1;
- (void)tryClearAllCacheWebview;
- (void)tryPreloadWebview;
- (void)addPreloadWebviewInCacheArray:(id)arg1 andKey:(id)arg2;
- (void)notifyVisibleComponentsDidAppear;
- (void)notifyVisibleComponentsWillDisappear;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preloadScanGoodsResIfNeeded;
- (_Bool)checkNeedUpdateSharedUxinfo;
- (void)updateSharedUxinfo;
- (_Bool)hasTableViewAlreadyReachBottom;
- (void)updateCanvasDownloadScene;
- (void)updateCanvasAuth;
- (void)updateAdCanvasPages;
- (void)commonInit;
- (id)initWithMsgWrap:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3 enterScene:(int)arg4;
- (id)initWithDataItem:(id)arg1 advertiseInfo:(id)arg2 originView:(id)arg3 enterScene:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

