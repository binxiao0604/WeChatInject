//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MMUILabel, UIImageView;

@interface SGCustomButton : UIButton
{
    UIImageView *_iconBkg;
    MMUILabel *_label;
    UIImageView *_icon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)setPreferMaxWidth:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setDiscrpiton:(id)arg1;
- (void)setHighlightedStatus;
- (void)setNormalStatus;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)init;

@end

