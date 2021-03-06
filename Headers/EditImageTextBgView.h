//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface EditImageTextBgView : UIView
{
    double _maxWidth;
    NSMutableArray *_backgroundRects;
    UIColor *_textBgColor;
    double _scale;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *textBgColor; // @synthesize textBgColor=_textBgColor;
@property(retain, nonatomic) NSMutableArray *backgroundRects; // @synthesize backgroundRects=_backgroundRects;
- (void)getMaxBgRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

