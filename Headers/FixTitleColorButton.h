//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, NSMutableSet, UIColor;

@interface FixTitleColorButton : UIButton
{
    NSMutableSet *m_titleColorStateSet;
    NSMutableSet *m_backgroundImageStateSet;
    double m_fixHeight;
    double m_fixWidth;
    double m_fixLeftRightMargin;
    UIColor *m_fixBackgroundColor;
    _Bool _m_dynamicSize;
    _Bool _oldStyle;
    _Bool _wideStyle;
    _Bool _bigStyle;
    _Bool _halfScreenStyle;
    _Bool _smallStyle;
    _Bool _weakStyle;
    NSMutableDictionary *m_titleColorStateDict;
    UIColor *_m_highlighBorderColor;
    UIColor *_m_disabledBorderColor;
    UIColor *_m_normalBorderColor;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool weakStyle; // @synthesize weakStyle=_weakStyle;
@property(nonatomic) _Bool smallStyle; // @synthesize smallStyle=_smallStyle;
@property(nonatomic) _Bool halfScreenStyle; // @synthesize halfScreenStyle=_halfScreenStyle;
@property(nonatomic) _Bool bigStyle; // @synthesize bigStyle=_bigStyle;
@property(nonatomic) _Bool wideStyle; // @synthesize wideStyle=_wideStyle;
@property(nonatomic) _Bool oldStyle; // @synthesize oldStyle=_oldStyle;
@property(nonatomic) _Bool m_dynamicSize; // @synthesize m_dynamicSize=_m_dynamicSize;
@property(retain, nonatomic) UIColor *m_normalBorderColor; // @synthesize m_normalBorderColor=_m_normalBorderColor;
@property(retain, nonatomic) UIColor *m_disabledBorderColor; // @synthesize m_disabledBorderColor=_m_disabledBorderColor;
@property(retain, nonatomic) UIColor *m_highlighBorderColor; // @synthesize m_highlighBorderColor=_m_highlighBorderColor;
@property(retain, nonatomic) NSMutableSet *m_backgroundImageStateSet; // @synthesize m_backgroundImageStateSet;
@property(retain, nonatomic) NSMutableDictionary *m_titleColorStateDict; // @synthesize m_titleColorStateDict;
- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFixLeftRightMargin:(double)arg1;
- (void)setFixHeight:(double)arg1;
- (void)setFixWidth:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)calcWidthByTitle:(id)arg1;
- (struct CGSize)calculateFittingSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateRedesignBackgroundColor;
- (_Bool)isClearColor:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;

@end

