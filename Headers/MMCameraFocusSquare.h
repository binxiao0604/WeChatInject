//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation;

@interface MMCameraFocusSquare : UIView
{
    CABasicAnimation *_selectionBlink;
    double _widthMax;
    double _widthMin;
}

- (void).cxx_destruct;
@property(nonatomic) double widthMin; // @synthesize widthMin=_widthMin;
@property(nonatomic) double widthMax; // @synthesize widthMax=_widthMax;
- (void)updatePoint:(struct CGPoint)arg1;
- (void)drawRectWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
