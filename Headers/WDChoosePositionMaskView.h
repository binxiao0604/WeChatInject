//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, MMUIButton, NSString, UILabel;

@interface WDChoosePositionMaskView : UIView
{
    _Bool _isAnimating;
    MMUIButton *_closeBtn;
    UIView *_maskView;
    NSString *_text;
    UILabel *_tapTipsLabel;
    CALayer *_tapTipsLayer;
    CDUnknownBlockType _cancelCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) CALayer *tapTipsLayer; // @synthesize tapTipsLayer=_tapTipsLayer;
@property(retain, nonatomic) UILabel *tapTipsLabel; // @synthesize tapTipsLabel=_tapTipsLabel;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onCloseBtnClick;
- (void)layoutTapTipsLabel;
- (void)layoutCancelBtn;
- (void)layoutSubviews;
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideTipsWithAnimation;
- (void)startAnimatedTips:(id)arg1;
- (void)cancelLastAnimated;
- (void)setCancelCallBack:(CDUnknownBlockType)arg1;
- (void)updateTapTipsLabel;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

