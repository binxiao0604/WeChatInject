//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, UILabel, UIView;
@protocol MMAnimationTipViewDelegate;

@interface MMAnimationTipView : MMUIView
{
    UIView *m_bkgView;
    UIImageView *m_tipIconView;
    UILabel *m_label;
    id <MMAnimationTipViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMAnimationTipViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(readonly, nonatomic) UIImageView *m_tipIconView; // @synthesize m_tipIconView;
- (void)fadeWithDuration:(id)arg1;
- (void)showWithDuration:(double)arg1 AndFadeDuration:(double)arg2;
- (void)fadeShowWithDuration:(double)arg1;
- (void)fadeShow;
- (struct CGRect)getBkgRect;
- (struct CGRect)convertIconRectTo:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setTipView;
- (id)initWithTipIcon:(id)arg1 andText:(id)arg2;

@end

