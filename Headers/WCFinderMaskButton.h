//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIView;

@interface WCFinderMaskButton : MMUIButton
{
    UIView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)setHighlighted:(_Bool)arg1;
- (void)makeMaskViewAdjustSuperviewLayerCorners;
- (void)setMaskViewBackgroundColor:(id)arg1;

@end

