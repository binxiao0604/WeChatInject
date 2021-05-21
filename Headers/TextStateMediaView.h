//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMTextStateVideoControlViewDelegate-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"

@class MMTextStateMediaItem, MMTextStateVideoControlView, NSString, UIImage, UIImageView, UIViewPropertyAnimator, UIVisualEffectView, WCPlayerView;

@interface TextStateMediaView : UIView <WCPlayerConfigDelegate, MMTextStateVideoControlViewDelegate>
{
    _Bool _showBlurEffect;
    _Bool _videoEnabled;
    _Bool _muted;
    _Bool _loop;
    MMTextStateMediaItem *_mediaItem;
    UIImage *_defaultImage;
    double _blurFactor;
    double _maskAlpha;
    UIImage *_image;
    UIImageView *_imageView;
    WCPlayerView *_playerView;
    MMTextStateVideoControlView *_controlView;
    UIVisualEffectView *_blurView;
    UIViewPropertyAnimator *_blurAnimator;
    UIView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIViewPropertyAnimator *blurAnimator; // @synthesize blurAnimator=_blurAnimator;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMTextStateVideoControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double maskAlpha; // @synthesize maskAlpha=_maskAlpha;
@property(nonatomic) double blurFactor; // @synthesize blurFactor=_blurFactor;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool showBlurEffect; // @synthesize showBlurEffect=_showBlurEffect;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)onTextStateMediaImageDownloadFail:(id)arg1;
- (void)onTextStateMediaImageDownloadSuccess:(id)arg1;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (void)willEnterForeground;
- (void)addBlurEffectWithFactor:(double)arg1;
- (void)resetVideo;
- (void)pauseVideo;
- (void)startVideo;
- (void)refreshBlurAndMask;
- (void)setMediaItem:(id)arg1 shouldAutoPlay:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

