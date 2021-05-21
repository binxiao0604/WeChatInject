//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIColor;

@interface KindaUIButton : MMUIButton
{
    _Bool _enableHignLight;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
    UIColor *_normalTextColor;
    UIColor *_normalBackgroudColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableHignLight; // @synthesize enableHignLight=_enableHignLight;
@property(retain, nonatomic) UIColor *normalBackgroudColor; // @synthesize normalBackgroudColor=_normalBackgroudColor;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
- (void)setWeakStyle;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (unsigned long long)colorStyle:(id)arg1;
- (id)getSuperViewBackgroundColor;
- (void)layoutSubviews;
- (id)init;

@end

