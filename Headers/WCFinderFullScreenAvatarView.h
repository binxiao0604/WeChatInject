//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FullScreenGestureDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIScrollView, WXFullScreenGestureRecognizer;

@interface WCFinderFullScreenAvatarView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>
{
    UIImage *_originImage;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    WXFullScreenGestureRecognizer *_fullScreenGestrure;
    struct CGRect _originRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestrure; // @synthesize fullScreenGestrure=_fullScreenGestrure;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)showInViewController:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
