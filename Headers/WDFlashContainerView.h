//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, WDCanvas, WDFlashWishView;
@protocol WDFlashWishViewDelegate;

@interface WDFlashContainerView : UIView
{
    struct CGRect _rcRegion[4];
    struct CGRect _rcStar;
    id <WDFlashWishViewDelegate> _delegate;
    WDCanvas *_canvasLogic;
    WDFlashWishView *_postWishView;
    MMTimer *_timer;
    long long _sizeTag;
    long long _lastHeadRegion;
    long long _lastStarRegion;
    struct CGPoint _flashLast;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastStarRegion; // @synthesize lastStarRegion=_lastStarRegion;
@property(nonatomic) long long lastHeadRegion; // @synthesize lastHeadRegion=_lastHeadRegion;
@property(nonatomic) long long sizeTag; // @synthesize sizeTag=_sizeTag;
@property(nonatomic) struct CGPoint flashLast; // @synthesize flashLast=_flashLast;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak WDFlashWishView *postWishView; // @synthesize postWishView=_postWishView;
@property(nonatomic) __weak WDCanvas *canvasLogic; // @synthesize canvasLogic=_canvasLogic;
@property(nonatomic) __weak id <WDFlashWishViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pause:(_Bool)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearWishes;
- (void)updateViewport:(struct CGRect)arg1;
- (struct CGPoint)converWishInfoCordinatorToScreenPoint:(long long)arg1;
- (void)createWishStar:(id)arg1 region:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)createWishFlash:(id)arg1 size:(double)arg2 position:(struct CGPoint)arg3 duration:(double)arg4;
- (void)openWishStar;
- (void)onTimer;
- (double)getHeadSize;
- (void)startFlashWishes:(struct CGRect)arg1 star:(struct CGRect)arg2;
- (void)setRegion:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

