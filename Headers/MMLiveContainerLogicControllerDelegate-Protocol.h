//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveTaskId, MMLiveView, MMLiveViewController, UIGestureRecognizer, UIImageView;

@protocol MMLiveContainerLogicControllerDelegate <NSObject>
@property(nonatomic) _Bool isForcePortraitForExtend;
@property(readonly, nonatomic) UIImageView *blurView;
@property(readonly, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly, nonatomic) MMLiveView *liveView;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (MMLiveViewController *)currentLiveViewController;
- (void)hideView;
- (void)showView;
@end

