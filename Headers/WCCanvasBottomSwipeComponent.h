//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class UIButton, UIImageView, UILabel;

@interface WCCanvasBottomSwipeComponent : WCCanvasComponent
{
    UIImageView *_swipeUpIcon;
    UILabel *_swipeUpText;
    UIButton *_hotZone;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *hotZone; // @synthesize hotZone=_hotZone;
@property(retain, nonatomic) UILabel *swipeUpText; // @synthesize swipeUpText=_swipeUpText;
@property(retain, nonatomic) UIImageView *swipeUpIcon; // @synthesize swipeUpIcon=_swipeUpIcon;
- (void)jumpToUrl:(id)arg1;
- (void)didBottomSwipeActionComplete;
- (_Bool)shouldAllowBottomSwipeAction;
- (_Bool)shouldForbidDelegateShowFloatActionBtn;
- (void)componentAppearFactorChagneInMainScreen;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)generateKeyframeAnimationWithKeyPath:(id)arg1 duration:(double)arg2;
- (void)beginSwipeUpAnimation;
- (void)initSwipeUpView;
- (void)initViews;
- (void)layoutSubviews;

@end

