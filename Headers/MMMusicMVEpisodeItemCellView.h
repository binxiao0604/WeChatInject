//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMMusicMVSingleVideoItemViewDelegate-Protocol.h"
#import "MMMusicNoAnyVideoViewPlayerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMMusicMVSingleVideoItemView, MMMusicMVTrackItem, MMMusicNoAnyVideoView, NSString, UIImageView, UILabel;
@protocol MMMusicMVEpisodeItemCellViewDelegate;

@interface MMMusicMVEpisodeItemCellView : UIView <UIGestureRecognizerDelegate, MMMusicMVSingleVideoItemViewDelegate, MMMusicNoAnyVideoViewPlayerDelegate>
{
    _Bool _isPreviewMode;
    _Bool _isShowPromptLabel;
    _Bool _forbidPlaying;
    id <MMMusicMVEpisodeItemCellViewDelegate> _delegate;
    MMMusicMVTrackItem *_trackItem;
    unsigned long long _episodeIndex;
    MMMusicNoAnyVideoView *_noVideoView;
    MMMusicMVSingleVideoItemView *_singleVideoView;
    UIImageView *_videoHiddenPromptImageView;
    UILabel *_videoHiddenPromptLabel;
    UIView *_videoCoverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *videoCoverView; // @synthesize videoCoverView=_videoCoverView;
@property(retain, nonatomic) UILabel *videoHiddenPromptLabel; // @synthesize videoHiddenPromptLabel=_videoHiddenPromptLabel;
@property(retain, nonatomic) UIImageView *videoHiddenPromptImageView; // @synthesize videoHiddenPromptImageView=_videoHiddenPromptImageView;
@property(retain, nonatomic) MMMusicMVSingleVideoItemView *singleVideoView; // @synthesize singleVideoView=_singleVideoView;
@property(retain, nonatomic) MMMusicNoAnyVideoView *noVideoView; // @synthesize noVideoView=_noVideoView;
@property(nonatomic) _Bool forbidPlaying; // @synthesize forbidPlaying=_forbidPlaying;
@property(nonatomic) _Bool isShowPromptLabel; // @synthesize isShowPromptLabel=_isShowPromptLabel;
@property(nonatomic) _Bool isPreviewMode; // @synthesize isPreviewMode=_isPreviewMode;
@property(nonatomic) unsigned long long episodeIndex; // @synthesize episodeIndex=_episodeIndex;
@property(retain, nonatomic) MMMusicMVTrackItem *trackItem; // @synthesize trackItem=_trackItem;
@property(nonatomic) __weak id <MMMusicMVEpisodeItemCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setNoVideoViewPromptAlpha:(double)arg1;
- (void)setForbidPlaying:(_Bool)arg1 reset:(_Bool)arg2;
- (void)pauseCurrentVideoPlay;
- (double)currentVideoPlayedTime;
- (void)stopCurrentVideoPlay;
- (void)startCurrentVideoPlay;
- (void)seekCurrentVideoPlay:(double)arg1;
- (void)showVideoPlayerView;
- (void)hideVideoPlayerView;
- (void)reloadData;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onLiveVideoPlayerViewHideBufferingView;
- (void)onLiveVideoPlayerViewShowBufferingView;
- (_Bool)isMusicMVSingleVideoItemViewInUse:(id)arg1;
- (void)onVideoToggleJumpFinderProfileOperation:(id)arg1;
- (void)onVideoTogglePostOperation;
- (void)setTrackItem:(id)arg1 videoInitialTime:(double)arg2;
- (void)setupSingleVideoView;
- (void)setupVideoHiddenPrompt;
- (void)setupNoVideoView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

