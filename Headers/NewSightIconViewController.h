//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MMTimer, SightIconView, UIImageView;

@interface NewSightIconViewController : UIViewController
{
    MMTimer *_timer;
    SightIconView *_progressIconView;
    SightIconView *_progressNewView;
    SightIconView *_transBtn;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SightIconView *transBtn; // @synthesize transBtn=_transBtn;
@property(retain, nonatomic) SightIconView *progressNewView; // @synthesize progressNewView=_progressNewView;
@property(retain, nonatomic) SightIconView *progressIconView; // @synthesize progressIconView=_progressIconView;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setProgress;
- (void)viewDidLoad;

@end

