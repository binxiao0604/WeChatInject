//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@interface WDUISlider : UISlider
{
    _Bool _isMax;
}

@property(nonatomic) _Bool isMax; // @synthesize isMax=_isMax;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

