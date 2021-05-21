//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSVideoPlayerView.h"

#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCPlayerDownloaderExt-Protocol.h"
#import "WSPlayerMaskViewDelegate-Protocol.h"
#import "WSStreamDotAttachViewDelegate-Protocol.h"

@class CAGradientLayer, MMUIImageView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, WAScreenBrightnessStateView, WCNetworkMediaSlider, WSPlayerMaskView, WSPlayerSimpleProgressBar, WSShortVideoPlayStat, WSStreamDotAttachView, WSVideoModel, WSVideoOperateButton, WSVideoPullRecommendStreamLogic, WSVideoSourceView;
@protocol WSVideoPlayerViewDelegate;

@interface WSShortVideoFlowPlayerControlView : WSVideoPlayerView <UIGestureRecognizerDelegate, WSPlayerMaskViewDelegate, MMImageLoaderObserver, IVOIPUILogicMgrExt, WSStreamDotAttachViewDelegate, WCPlayerDownloaderExt>
{
    _Bool _disableScroll;
    _Bool _lockSlider;
    _Bool _touchesProgressMoved;
    _Bool _useCustomDuration;
    unsigned int _pauseTemp;
    long long _panDirection;
    _Bool _adjustVolume;
    struct CGPoint _panTouchStartPoint;
    double _panTouchLastChangedX;
    WAScreenBrightnessStateView *_bvstatusView;
    double _totalDuration;
    _Bool _bShouldBeFirstFrame;
    _Bool _tapToHideCountDownTips;
    _Bool _hasTriggerRecommendInsert;
    WSShortVideoPlayStat *_playStatForFirstPlayTime;
    _Bool _isHandlingExpireUpdate;
    int _errCode;
    NSString *_lastVideoUrl;
    _Bool _autoPlay;
    _Bool _enablePageGesture;
    _Bool _bForbidVideoInsert;
    _Bool _bForbidEvent;
    _Bool _bForbidOperate;
    _Bool _needIPhoneXLayout;
    _Bool _isMute;
    _Bool _needShowNetStatus;
    _Bool _isDisplayAsRecommendStyle;
    _Bool _isShowReplayBtnStatus;
    _Bool _isTapForPlaying;
    _Bool _isSharingDuringCountDownStatus;
    _Bool _isResumingNormalStyle;
    _Bool _hasTryReloadVideoWhen403_405;
    _Bool _isOpenShowAttachView;
    unsigned int _videoId;
    unsigned int _videoFileSize;
    unsigned int _initialPlayTime;
    int _playNextCountdownSec;
    long long _orientation;
    id <WSVideoPlayerViewDelegate> _videoDelagate;
    id <WSVideoPlayerViewDelegate> _fullScreenDelegate;
    NSString *_userData;
    NSString *_scene;
    WSVideoModel *_videoModelForWSFlow;
    NSString *_videoUrl;
    unsigned long long _fullScreenOpCode;
    UIButton *_playBtn;
    WSVideoPullRecommendStreamLogic *_pullRecommendStreamLogic;
    UIView *_bottomView;
    MMUILabel *_currentLabel;
    WCNetworkMediaSlider *_progressSlider;
    MMUILabel *_durationLabel;
    UIButton *_fullBtn;
    UIView *_coverView;
    MMUILabel *_centerTime;
    UIImageView *_thumbImage;
    NSString *_thumbUrl;
    NSString *_videoGravity;
    WSPlayerMaskView *_playerMaskView;
    NSString *_newestNetType;
    UIView *_topView;
    CAGradientLayer *_topViewLayer;
    UIButton *_topBackBtn;
    MMUILabel *_topAreaLabel;
    UIButton *_replayBtn;
    UIButton *_replayLabelBtn;
    WSVideoOperateButton *_fullScreenShareButton;
    WSVideoOperateButton *_goodLookButton;
    NSMutableArray *_arrTagButton;
    WSVideoSourceView *_sourceView;
    UIView *_countDownPanel;
    MMUILabel *_countDownTipsLabel;
    UIView *_controlMaskView;
    unsigned long long _clickPlayTimestamp;
    unsigned long long _videoBeginPlayTimestamp;
    WSPlayerSimpleProgressBar *_bottomProgressBar;
    MMUILabel *_videoConsumeLabel;
    MMUILabel *_durationLabelInShare;
    MMUILabel *_shareSceneSeeMoreLabel;
    WSVideoOperateButton *_shareSceneWowBrandLabel;
    MMUILabel *_shareSceneTitleLabel;
    UIView *_attachVideoContainerView;
    MMUILabel *_attachVideoInfoLabel;
    MMUILabel *_attachVideoTimeLabel;
    MMUIImageView *_attachViewRightArrow;
    WSStreamDotAttachView *_dotAttachView;
    struct CGRect _rect;
    struct CGRect _imageFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSStreamDotAttachView *dotAttachView; // @synthesize dotAttachView=_dotAttachView;
@property(nonatomic) _Bool isOpenShowAttachView; // @synthesize isOpenShowAttachView=_isOpenShowAttachView;
@property(retain, nonatomic) MMUIImageView *attachViewRightArrow; // @synthesize attachViewRightArrow=_attachViewRightArrow;
@property(retain, nonatomic) MMUILabel *attachVideoTimeLabel; // @synthesize attachVideoTimeLabel=_attachVideoTimeLabel;
@property(retain, nonatomic) MMUILabel *attachVideoInfoLabel; // @synthesize attachVideoInfoLabel=_attachVideoInfoLabel;
@property(retain, nonatomic) UIView *attachVideoContainerView; // @synthesize attachVideoContainerView=_attachVideoContainerView;
@property(nonatomic) _Bool hasTryReloadVideoWhen403_405; // @synthesize hasTryReloadVideoWhen403_405=_hasTryReloadVideoWhen403_405;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) _Bool isResumingNormalStyle; // @synthesize isResumingNormalStyle=_isResumingNormalStyle;
@property(retain, nonatomic) MMUILabel *shareSceneTitleLabel; // @synthesize shareSceneTitleLabel=_shareSceneTitleLabel;
@property(retain, nonatomic) WSVideoOperateButton *shareSceneWowBrandLabel; // @synthesize shareSceneWowBrandLabel=_shareSceneWowBrandLabel;
@property(retain, nonatomic) MMUILabel *shareSceneSeeMoreLabel; // @synthesize shareSceneSeeMoreLabel=_shareSceneSeeMoreLabel;
@property(retain, nonatomic) MMUILabel *durationLabelInShare; // @synthesize durationLabelInShare=_durationLabelInShare;
@property(retain, nonatomic) MMUILabel *videoConsumeLabel; // @synthesize videoConsumeLabel=_videoConsumeLabel;
@property(retain, nonatomic) WSPlayerSimpleProgressBar *bottomProgressBar; // @synthesize bottomProgressBar=_bottomProgressBar;
@property(nonatomic) _Bool isSharingDuringCountDownStatus; // @synthesize isSharingDuringCountDownStatus=_isSharingDuringCountDownStatus;
@property(nonatomic) _Bool isTapForPlaying; // @synthesize isTapForPlaying=_isTapForPlaying;
@property(nonatomic) unsigned long long videoBeginPlayTimestamp; // @synthesize videoBeginPlayTimestamp=_videoBeginPlayTimestamp;
@property(nonatomic) unsigned long long clickPlayTimestamp; // @synthesize clickPlayTimestamp=_clickPlayTimestamp;
@property(retain, nonatomic) UIView *controlMaskView; // @synthesize controlMaskView=_controlMaskView;
@property(retain, nonatomic) MMUILabel *countDownTipsLabel; // @synthesize countDownTipsLabel=_countDownTipsLabel;
@property(retain, nonatomic) UIView *countDownPanel; // @synthesize countDownPanel=_countDownPanel;
@property(retain, nonatomic) WSVideoSourceView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) NSMutableArray *arrTagButton; // @synthesize arrTagButton=_arrTagButton;
@property(retain, nonatomic) WSVideoOperateButton *goodLookButton; // @synthesize goodLookButton=_goodLookButton;
@property(retain, nonatomic) WSVideoOperateButton *fullScreenShareButton; // @synthesize fullScreenShareButton=_fullScreenShareButton;
@property(nonatomic) int playNextCountdownSec; // @synthesize playNextCountdownSec=_playNextCountdownSec;
@property(nonatomic) _Bool isShowReplayBtnStatus; // @synthesize isShowReplayBtnStatus=_isShowReplayBtnStatus;
@property(retain, nonatomic) UIButton *replayLabelBtn; // @synthesize replayLabelBtn=_replayLabelBtn;
@property(retain, nonatomic) UIButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(retain, nonatomic) MMUILabel *topAreaLabel; // @synthesize topAreaLabel=_topAreaLabel;
@property(retain, nonatomic) UIButton *topBackBtn; // @synthesize topBackBtn=_topBackBtn;
@property(retain, nonatomic) CAGradientLayer *topViewLayer; // @synthesize topViewLayer=_topViewLayer;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *newestNetType; // @synthesize newestNetType=_newestNetType;
@property(retain, nonatomic) WSPlayerMaskView *playerMaskView; // @synthesize playerMaskView=_playerMaskView;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIImageView *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) MMUILabel *centerTime; // @synthesize centerTime=_centerTime;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIButton *fullBtn; // @synthesize fullBtn=_fullBtn;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) WCNetworkMediaSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) MMUILabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isDisplayAsRecommendStyle; // @synthesize isDisplayAsRecommendStyle=_isDisplayAsRecommendStyle;
@property(retain, nonatomic) WSVideoPullRecommendStreamLogic *pullRecommendStreamLogic; // @synthesize pullRecommendStreamLogic=_pullRecommendStreamLogic;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) _Bool needShowNetStatus; // @synthesize needShowNetStatus=_needShowNetStatus;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(nonatomic) unsigned long long fullScreenOpCode; // @synthesize fullScreenOpCode=_fullScreenOpCode;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) WSVideoModel *videoModelForWSFlow; // @synthesize videoModelForWSFlow=_videoModelForWSFlow;
@property(nonatomic) _Bool needIPhoneXLayout; // @synthesize needIPhoneXLayout=_needIPhoneXLayout;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bForbidOperate; // @synthesize bForbidOperate=_bForbidOperate;
@property(nonatomic) _Bool bForbidEvent; // @synthesize bForbidEvent=_bForbidEvent;
@property(nonatomic) _Bool bForbidVideoInsert; // @synthesize bForbidVideoInsert=_bForbidVideoInsert;
@property(nonatomic) unsigned int initialPlayTime; // @synthesize initialPlayTime=_initialPlayTime;
@property(nonatomic) unsigned int videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(nonatomic) _Bool enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak id <WSVideoPlayerViewDelegate> fullScreenDelegate; // @synthesize fullScreenDelegate=_fullScreenDelegate;
@property(nonatomic) __weak id <WSVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)debugExchangeVideoUrl;
- (void)onDotAttachViewClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)updateBottomViewFrame:(_Bool)arg1 view:(id)arg2;
- (void)updateDotVideoViewFrame:(_Bool)arg1;
- (void)updateDotAttachViewFrame:(_Bool)arg1;
- (void)onShowDragTips;
- (void)resumeExpired;
- (_Bool)isExpiredHandling;
- (void)force403;
- (id)getThumbData;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)didEndFullScreenShare;
- (_Bool)shouldContinuePlayAfterFullScreenShare;
- (unsigned int)getCurrentPlayTimeInSec;
- (void)cleanAllDelayEvent;
- (void)showPlayBtnWithBeginStatus;
- (void)setVideoTitle:(id)arg1;
- (void)doFirstPlayVideo;
- (_Bool)restartMediaPlayIfNeeded;
- (void)showThumbOnly;
- (void)showVideoConsumeTipsIfNeeded;
- (void)setFullScreenPreviewUI;
- (void)prepareInterativePlayForVideo:(id)arg1;
- (void)cleanAndResetThumb:(id)arg1;
- (void)customFirstVideoPlay;
- (void)hideReplayContent;
- (void)showPlayBtnIfNotLoading;
- (void)showPlayBtn;
- (void)beginLoading;
- (void)beginPlayError;
- (_Bool)hasStartPlay;
- (void)layoutSubviews;
- (void)onMaskViewTopBackBtnClick;
- (void)clearPlayerMaskView;
- (void)onCancelBtnClick;
- (void)notifyClickMaskPlayButton;
- (_Bool)asyncHandleExpiredVideo;
- (void)loadingForAutoRetryExpireVideo;
- (void)reloadVideoWhen403_405;
- (void)onTipBtnClickForRetryPlay;
- (void)onTipBtnClickForContinuePlay;
- (void)onTipBtnClickForReplay;
- (void)showMaskWithTip:(id)arg1 btnType:(unsigned long long)arg2 showCancelBtn:(_Bool)arg3;
- (void)showMaskWithMobileNetwork;
- (void)onNetWorkChangeToNetType:(id)arg1 needForcePlay:(_Bool)arg2;
- (_Bool)isForground;
- (void)setMuted:(_Bool)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(_Bool)arg1;
- (void)routeChange:(id)arg1;
- (id)drawInRectAspectFill:(id)arg1;
- (void)resetSliderLock;
- (void)hideBrightnessStatusView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)disableScroll:(_Bool)arg1;
- (void)setDuration:(double)arg1;
- (void)resizeThumbImage;
- (void)onMute:(id)arg1;
- (void)reportFirstPlayFailIfNeeded;
- (void)reportFirstPlayTimeIfNeeded;
- (void)triggerClickAttachView:(id)arg1;
- (void)tryToPlayVideo;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlayFail;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)pause;
- (void)seek:(unsigned int)arg1;
- (void)stop;
- (void)play:(_Bool)arg1 firstPlay:(_Bool)arg2;
- (void)play:(_Bool)arg1;
- (void)onReplay;
- (void)onReplayBtnClick;
- (void)onPlayClick;
- (void)onSliderChange;
- (void)onSliderTouchUp;
- (void)onSliderTouchDown;
- (_Bool)isShowReplayBtn;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)hideControlViews;
- (void)hideControlViewsAnimated:(_Bool)arg1;
- (void)showControlViews:(_Bool)arg1;
- (void)showControlViews;
- (void)catchTap:(id)arg1;
- (void)layoutTags;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)horizontalMoveEnd;
- (void)horizontalMoved:(double)arg1;
- (void)verticalMoved:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panGestureControl:(id)arg1;
- (void)onExitFullScreen:(id)arg1;
- (void)disableFullWithOpCode:(unsigned int)arg1;
- (void)disableFull;
- (void)enableFull;
- (void)enableFullScreen:(_Bool)arg1;
- (void)onAutoRotateToFullScreen:(_Bool)arg1;
- (long long)fullscreenOrientation;
- (void)onTopBackBtnClick;
- (void)onFullClick;
- (void)onClickGoodLook:(id)arg1;
- (void)onShare:(id)arg1;
- (void)onTapSource:(id)arg1;
- (void)onTapTag:(id)arg1;
- (void)layoutCountDownTips;
- (void)updateCountDownLabel;
- (void)resetCountDownTipsUI;
- (void)setCountDownTipsUI;
- (_Bool)needShowCountDownTips:(double)arg1;
- (void)resumeNormalStyle:(_Bool)arg1;
- (void)layoutRecommendCellViews;
- (void)displayAsRecommendStyle:(struct CGRect)arg1;
- (void)insertPlayerView:(double)arg1;
- (void)prepareForReuse;
- (void)setVideoFrame:(struct CGRect)arg1;
- (_Bool)isFullScreen;
- (void)setVideoPath:(id)arg1 initialTime:(unsigned int)arg2;
- (void)setVideoThumbImage:(id)arg1;
- (void)reportIDKeyForThumbDownload:(id)arg1;
- (_Bool)hasImageCacheForUrl:(id)arg1;
- (id)smartGetThumbFromVideo:(id)arg1;
- (void)smartSetVideoThumb:(id)arg1;
- (void)setVideoThumb:(id)arg1;
- (void)dealloc;
- (void)showReplayBtn:(_Bool)arg1;
- (void)showReplayBtn;
- (void)onPlayNextVideo:(_Bool)arg1;
- (void)hideReplayBtn;
- (void)tryInitReplayViews;
- (id)genTagButton;
- (void)commonInit:(id)arg1 thumb:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithVideo:(id)arg1 frame:(struct CGRect)arg2;
- (void)hideDotInfoView;
- (void)showDotInfoView;
- (_Bool)canShowDotDetailViewWithCurrent:(double)arg1;
- (void)removeAttachViews;
- (id)generateAttachLabel;
- (void)hideAttachVideo;
- (void)showAttachVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

