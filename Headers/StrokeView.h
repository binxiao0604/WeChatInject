//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface StrokeView : UIView
{
    UIBezierPath *m_strokePath;
    UIColor *m_strokeColor;
    _Bool m_fill;
    int _blendMode;
}

- (void).cxx_destruct;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) _Bool fill; // @synthesize fill=m_fill;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=m_strokeColor;
@property(retain, nonatomic) UIBezierPath *strokePath; // @synthesize strokePath=m_strokePath;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

