//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIImageView, UILabel, UIView;

@interface MMLiveHeatAndIconButton : MMUIButton
{
    UIImageView *_iconView;
    UILabel *_heatLabel;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)updateWithHeatText:(id)arg1 icon:(id)arg2;

@end
