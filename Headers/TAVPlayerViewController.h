//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TAVDeviceMonitorObserver-Protocol.h"
#import "TAVMediaPlayerObserver-Protocol.h"
#import "TAVPlayerControlPanelDelegate-Protocol.h"

@class AVPlayerItem, AVPlayerItemVideoOutput, CIContext, NSObject, NSString, TAVMediaPlayer, TAVMediaPlayerView, UIImage, UIImageView, UIView;
@protocol OS_dispatch_queue, TAVPlayerControlPanel, TAVPlayerViewControllerDelegate;

@interface TAVPlayerViewController : UIViewController <TAVDeviceMonitorObserver, TAVMediaPlayerObserver, TAVPlayerControlPanelDelegate>
{
    _Bool _controlPanelHidden;
    _Bool _disableFakeImage;
    _Bool _shouldResumeWhenActive;
    _Bool _needShowFakeImage;
    _Bool _isActive;
    UIView<TAVPlayerControlPanel> *_controlPanel;
    id <TAVPlayerViewControllerDelegate> _delegate;
    TAVMediaPlayerView *_playerView;
    unsigned long long _fillMode;
    unsigned long long _resumeMode;
    TAVMediaPlayer *_mediaPlayer;
    long long _previousState;
    UIImageView *_imageView;
    UIView *_contentView;
    CIContext *_context;
    UIImage *_outputImage;
    AVPlayerItem *_currentItem;
    AVPlayerItemVideoOutput *_videoOutput;
    NSObject<OS_dispatch_queue> *_mediaQueue;
    CDStruct_1b6d18a9 _screenshotTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool needShowFakeImage; // @synthesize needShowFakeImage=_needShowFakeImage;
@property(nonatomic) _Bool shouldResumeWhenActive; // @synthesize shouldResumeWhenActive=_shouldResumeWhenActive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) AVPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) CDStruct_1b6d18a9 screenshotTime; // @synthesize screenshotTime=_screenshotTime;
@property(retain, nonatomic) UIImage *outputImage; // @synthesize outputImage=_outputImage;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long previousState; // @synthesize previousState=_previousState;
@property(retain, nonatomic) TAVMediaPlayer *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(nonatomic) _Bool disableFakeImage; // @synthesize disableFakeImage=_disableFakeImage;
@property(nonatomic) _Bool controlPanelHidden; // @synthesize controlPanelHidden=_controlPanelHidden;
@property(nonatomic) unsigned long long resumeMode; // @synthesize resumeMode=_resumeMode;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(retain, nonatomic) TAVMediaPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <TAVPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(retain, nonatomic) UIView<TAVPlayerControlPanel> *controlPanel; // @synthesize controlPanel=_controlPanel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notifyVideoRectDidChange;
- (void)notifyDidEndDragging;
- (void)notifyDidBeginDragging;
- (void)controlPanelDidClickPlayItem:(id)arg1;
- (void)controlPanelDidEndDragging:(id)arg1;
- (void)controlPanel:(id)arg1 didSeekToTime:(CDStruct_1b6d18a9)arg2;
- (void)controlPanelDidBeginDragging:(id)arg1;
- (void)mediaPlayer:(id)arg1 speedDidChange:(double)arg2;
- (void)mediaPlayer:(id)arg1 progressDidChange:(CDStruct_1b6d18a9)arg2;
- (void)mediaPlayer:(id)arg1 stateDidChange:(long long)arg2;
- (void)mediaPlayer:(id)arg1 itemDidChange:(id)arg2;
- (void)mediaPlayer:(id)arg1 playerDidReset:(id)arg2;
- (void)deviceMonitor:(id)arg1 didBecomeActive:(id)arg2;
- (void)deviceMonitor:(id)arg1 willResignActive:(id)arg2;
- (void)updatePlaybackState;
- (void)setFakeViewBackgroundColor:(id)arg1;
- (void)hideFakeViewIfNeeded;
- (void)showFakeView:(_Bool)arg1;
- (void)generateFakeImageIfNeeded;
- (void)readCurrentRenderSize:(CDUnknownBlockType)arg1;
- (void)recreatVideoOutput;
- (id)takeScreenshotWithTime:(CDStruct_1b6d18a9)arg1;
- (void)asyncTakeScreenshot:(CDUnknownBlockType)arg1;
- (id)takeScreenshot;
- (void)addObserverForPlayerLayer;
- (_Bool)shouldReplay;
- (void)updatePlayItemState;
- (void)resumeIfNeeded;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

