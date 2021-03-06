//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class UIView;
@protocol WCCardCodeAnimatorDelegate;

@interface WCCardCodeAnimator : MMObject
{
    UIView *_view;
    UIView *_oldSuperView;
    UIView *_maskView;
    UIView *_newSuperView;
    struct CGRect _oriFrame;
    _Bool _bAnimating;
    double _animationDuration;
    double _scale;
    _Bool _bRotateRight;
    id <WCCardCodeAnimatorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool bRotateRight; // @synthesize bRotateRight=_bRotateRight;
@property(nonatomic) __weak id <WCCardCodeAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleExitFullScreen;
- (void)handleEnterFullScreen;
- (void)onTapRecognizer:(id)arg1;
- (void)setupView;
- (id)initWithView:(id)arg1 superView:(id)arg2;

@end

