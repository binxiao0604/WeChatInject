//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIColor;

@interface WCCardTicketHeaderBgView : MMUIView
{
    UIColor *_fillColor;
    double _cornerRadius;
    double _bottomCircleRadious;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomCircleRadious; // @synthesize bottomCircleRadious=_bottomCircleRadious;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

