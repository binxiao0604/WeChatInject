//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WDRandomMeteorView : UIView
{
    UIImageView *_meteorImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *meteorImageView; // @synthesize meteorImageView=_meteorImageView;
- (void)fallFromPoint:(struct CGPoint)arg1 distance:(double)arg2 duration:(double)arg3;
- (void)randomFallFromPoint:(struct CGPoint)arg1 distance:(double)arg2 duration:(double)arg3;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
