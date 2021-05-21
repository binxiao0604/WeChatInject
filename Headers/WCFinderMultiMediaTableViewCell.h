//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTableViewCell.h"

#import "WCFinderCommentBulletAnimationExt-Protocol.h"
#import "WCFinderFeedContentHeaderActionDelegate-Protocol.h"
#import "WCFinderFeedContentMediaActionProtocol-Protocol.h"
#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFocusCellProtocol-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIView, WCFinderFeedContentHeaderView, WCFinderFeedContentVM, WCFinderNewMultiMediaView;
@protocol WCFinderMultiMediaTableViewCellDelegate;

@interface WCFinderMultiMediaTableViewCell : WCFinderTableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFeedContentHeaderActionDelegate, WCFinderFeedContentVMExt, WCFinderCommentBulletAnimationExt, WCFinderFocusCellProtocol>
{
    _Bool _isForceDisableLikeAction;
    _Bool _isEnableMediaHeaderShowFollowTips;
    _Bool _isEnableBulletAnimation;
    _Bool _showLiveState;
    id <WCFinderMultiMediaTableViewCellDelegate> _delegate;
    long long _dataPos;
    WCFinderFeedContentHeaderView *_headerView;
    WCFinderNewMultiMediaView *_mediaView;
    WCFinderFeedContentVM *_contentVM;
    NSMutableArray *_bulletAnimationViews;
    UIButton *_bulletOptionBtn;
    UIView *_backView;
    CDUnknownBlockType _replayBulletAnimationWork;
    UIView *_collectView;
    UILabel *_collectLabel;
    UIView *_imagePauseTipsLabel;
    UIView *_separateLine;
}

+ (double)mediaTopWhenTransitionWith:(id)arg1;
+ (double)mediaTopWhenTransitionWithMediaSize:(double)arg1 mediaSizeHeight:(double)arg2;
+ (double)cellHeightWith:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIView *imagePauseTipsLabel; // @synthesize imagePauseTipsLabel=_imagePauseTipsLabel;
@property(nonatomic) _Bool showLiveState; // @synthesize showLiveState=_showLiveState;
@property(retain, nonatomic) UILabel *collectLabel; // @synthesize collectLabel=_collectLabel;
@property(retain, nonatomic) UIView *collectView; // @synthesize collectView=_collectView;
@property(copy, nonatomic) CDUnknownBlockType replayBulletAnimationWork; // @synthesize replayBulletAnimationWork=_replayBulletAnimationWork;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *bulletOptionBtn; // @synthesize bulletOptionBtn=_bulletOptionBtn;
@property(retain, nonatomic) NSMutableArray *bulletAnimationViews; // @synthesize bulletAnimationViews=_bulletAnimationViews;
@property(nonatomic) _Bool isEnableBulletAnimation; // @synthesize isEnableBulletAnimation=_isEnableBulletAnimation;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) WCFinderNewMultiMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) WCFinderFeedContentHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long dataPos; // @synthesize dataPos=_dataPos;
@property(nonatomic) __weak id <WCFinderMultiMediaTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEnableMediaHeaderShowFollowTips; // @synthesize isEnableMediaHeaderShowFollowTips=_isEnableMediaHeaderShowFollowTips;
@property(nonatomic) _Bool isForceDisableLikeAction; // @synthesize isForceDisableLikeAction=_isForceDisableLikeAction;
- (struct CGRect)convertFocusRectToView:(id)arg1;
- (_Bool)shouldCaluculateAsFocusCell;
- (_Bool)mediaIsOnPlay;
- (void)onResumeBulletionAimation;
- (void)finderCommentBulletAnimationSwitchSettingChanged;
- (void)showSpamTipsWithString:(id)arg1;
- (void)startCollectAnimation;
- (id)dynamicImageForIdentify:(SEL)arg1;
- (void)startLikeAnimationWithLikeFlag:(long long)arg1;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContentWarnFlagChanged:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataUpdateByUserAction:(id)arg2 likeFlag:(long long)arg3 touchPoint:(struct CGPoint)arg4;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onVideoSeekActionWithDirection:(_Bool)arg1;
- (void)clickLiveNowView:(id)arg1;
- (void)clickAvatar:(id)arg1;
- (void)liveFeedDidTap:(id)arg1;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (_Bool)WCFinderFeedContentMediaCanProcessGesture;
- (void)onPlayerControlViewPanEndToResumePlayVideoWithPlayPosition:(double)arg1;
- (void)onPlayerControlViewTapToResumePlayVideo;
- (void)updateImageCellBGMPlayState;
- (void)onImageViewTapAction;
- (void)onPlayerControlViewTapPauseVideo:(_Bool)arg1;
- (id)getContentFeedUsername;
- (void)stopVideoPlayerWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3;
- (void)onVideoStopPlay;
- (void)contentMediaDidEndPlay:(id)arg1;
- (_Bool)isEnableDoubleLikeAction;
- (void)lightShock;
- (void)didFeedDoubleTapAction;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)retryLoadingCoverImg;
- (void)photoContentPageTurning:(unsigned long long)arg1 lastIndex:(unsigned long long)arg2 scrollByManual:(_Bool)arg3;
- (void)onChangeBulletOption;
- (void)updateImagePauseTipsLabelShowState;
- (void)updateBulletSettingOption;
- (void)updateCurrentVideoThumb;
- (id)getCurrentMediaThumbImage;
- (id)getCurrendThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (_Bool)isSupportVideoProcess;
- (void)onDisplayNextComment;
- (void)stopHotCommentAnimation;
- (void)startHotCommentAnimation;
- (void)leaveTriggerArea;
- (void)stopPhotoFeedPlay;
- (void)startPhotoFeedPlay;
- (void)enterTriggerArea;
- (_Bool)isVideoMedia;
- (_Bool)isVaildMediaView;
- (id)currentBindTid;
- (struct CGRect)convertPureMediaViewRectTo:(id)arg1;
- (struct CGRect)convertMediaViewRectTo:(id)arg1;
- (void)updateMediaWith:(id)arg1 showLiveState:(_Bool)arg2;
- (void)cancelDelayRefreshWork;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

