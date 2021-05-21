//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCPlayerControlProtocol-Protocol.h"
#import "WCPlayerVolumeObserverDelegate-Protocol.h"

@class MMProgressViewEx, NSString, UIImageView, WCPlayerView, WCPlayerVolumeObserver, WXVideoSlider;

@interface WCPlayerControlView : UIView <WCPlayerVolumeObserverDelegate, WCPlayerControlProtocol>
{
    _Bool _isBufferingViewLoading;
    WCPlayerView *playerView;
    UIView *_coverMask;
    MMProgressViewEx *_loadingView;
    double _progress;
    unsigned long long _loadingLocation;
    WCPlayerVolumeObserver *_volumeObserver;
    WXVideoSlider *_volumeSlider;
    UIView *_volumePanel;
    UIView *_volumeBgView;
    UIImageView *_volumeIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *volumeIconView; // @synthesize volumeIconView=_volumeIconView;
@property(retain, nonatomic) UIView *volumeBgView; // @synthesize volumeBgView=_volumeBgView;
@property(retain, nonatomic) UIView *volumePanel; // @synthesize volumePanel=_volumePanel;
@property(retain, nonatomic) WXVideoSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) WCPlayerVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(nonatomic) unsigned long long loadingLocation; // @synthesize loadingLocation=_loadingLocation;
@property(nonatomic) _Bool isBufferingViewLoading; // @synthesize isBufferingViewLoading=_isBufferingViewLoading;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)hiddenVolumePanel;
- (void)onVolumeDidChange:(double)arg1;
- (void)onCreateThumbImage:(id)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onPlayerSeekCompelete;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoTotalTime:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(id)arg2;
- (void)onReceiveAllVideoData;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFinish;
- (void)onVideoPause;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)hiddenPercentView;
- (void)showPercentView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)layoutSubviews;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)addWCPlayerSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

