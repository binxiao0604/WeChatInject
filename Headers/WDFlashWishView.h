//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, UIColor, UIImageView, UIVisualEffectView, WDCommonHeadImageView, WDCommonWishInfo;
@protocol WDFlashWishViewDelegate;

@interface WDFlashWishView : UIView
{
    _Bool _showAnchor;
    _Bool _autoHide;
    _Bool _animatedShow;
    WDCommonWishInfo *_info;
    id <WDFlashWishViewDelegate> _delegate;
    double _lifeTime;
    WDCommonHeadImageView *_headImage;
    UIVisualEffectView *_blurView;
    UIButton *_bgView;
    MMUILabel *_content;
    UIView *_anchor;
    UIImageView *_lightView;
    UIColor *_color;
    struct CGPoint _ptLast;
    struct CGPoint _ptReal;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint ptReal; // @synthesize ptReal=_ptReal;
@property(nonatomic) _Bool animatedShow; // @synthesize animatedShow=_animatedShow;
@property(nonatomic) _Bool autoHide; // @synthesize autoHide=_autoHide;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIImageView *lightView; // @synthesize lightView=_lightView;
@property(retain, nonatomic) UIView *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) MMUILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UIButton *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) WDCommonHeadImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) _Bool showAnchor; // @synthesize showAnchor=_showAnchor;
@property(nonatomic) struct CGPoint ptLast; // @synthesize ptLast=_ptLast;
@property(nonatomic) double lifeTime; // @synthesize lifeTime=_lifeTime;
@property(nonatomic) __weak id <WDFlashWishViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDCommonWishInfo *info; // @synthesize info=_info;
- (void)onClick;
- (void)hide;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)startBlink;
- (void)invalidateTimer;
- (void)onTimeout;
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1;
- (id)addAnchor;
- (void)updatePosition:(struct CGPoint)arg1 limit:(struct CGRect)arg2;
- (struct CGPoint)getViewPosition:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithWish:(id)arg1 position:(struct CGPoint)arg2 size:(double)arg3 startBlink:(_Bool)arg4 animatedShow:(_Bool)arg5;
- (id)initWithWish:(id)arg1 position:(struct CGPoint)arg2 size:(double)arg3;
- (id)initWithWish:(id)arg1;
- (void)dealloc;

@end

