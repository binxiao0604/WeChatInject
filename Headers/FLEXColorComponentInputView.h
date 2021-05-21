//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UISlider;
@protocol FLEXColorComponentInputViewDelegate;

@interface FLEXColorComponentInputView : UIView
{
    UISlider *_slider;
    UILabel *_valueLabel;
    id <FLEXColorComponentInputViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FLEXColorComponentInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateValueLabel;
- (void)sliderChanged:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
