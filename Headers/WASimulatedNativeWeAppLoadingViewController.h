//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALoadingViewController.h"

@class MMUIButton, UIColor, WATitleView;

@interface WASimulatedNativeWeAppLoadingViewController : WALoadingViewController
{
    MMUIButton *_returnButton;
    WATitleView *_titleView;
    long long _orientation;
    UIColor *_navigationBarTextColor;
    unsigned long long _leftBtnType;
    _Bool _isSinglePageMode;
    _Bool _isGame;
}

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)startEnterAppAnimation;
- (void)showTitleLoading;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2 leftBtnType:(unsigned long long)arg3;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2 isSinglePageMode:(_Bool)arg3;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end

