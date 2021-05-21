//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRectTriangleArrowView.h"

@class MMUIButton, MMUILabel;

@interface MMLiveFirstAgreeTipView : MMRectTriangleArrowView
{
    MMUILabel *_tipLabel;
    MMUIButton *_closeButton;
}

+ (double)firstAgreeTipHeight;
+ (double)firstAgreeTipWidth;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void)onCloseButtonClick;
- (void)layoutCloseButton;
- (void)layoutTipLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;

@end

