//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALoadingViewController.h"

#import "IWALocalCacheMgrExt-Protocol.h"
#import "WACapsuleMenuDataSource-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, UIImageView, UILabel, UIView, WACircleLoadingView, WCTagsView;

@interface WACircleProgressLoadingViewController : WALoadingViewController <IWALocalCacheMgrExt, WACapsuleMenuDataSource>
{
    _Bool _showWeAppBrand;
    _Bool _isInDarkMode;
    UIView *_backgroundView;
    MMWebImageView *_logoView;
    MMUILabel *_titleLabel;
    WACircleLoadingView *_circleLoadingView;
    unsigned long long _initTime;
    unsigned long long _appearTime;
    UIView *_weappBrandContainerView;
    UIImageView *_weappBrandLogoImageView;
    UILabel *_weappBrandTitleLabel;
    WCTagsView *_officialTagsView;
    UIView *_guaranteeView;
    WCTagsView *_guaranteeTagsView;
    UILabel *_guaranteeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *guaranteeLabel; // @synthesize guaranteeLabel=_guaranteeLabel;
@property(retain, nonatomic) WCTagsView *guaranteeTagsView; // @synthesize guaranteeTagsView=_guaranteeTagsView;
@property(retain, nonatomic) UIView *guaranteeView; // @synthesize guaranteeView=_guaranteeView;
@property(retain, nonatomic) WCTagsView *officialTagsView; // @synthesize officialTagsView=_officialTagsView;
@property(retain, nonatomic) UILabel *weappBrandTitleLabel; // @synthesize weappBrandTitleLabel=_weappBrandTitleLabel;
@property(retain, nonatomic) UIImageView *weappBrandLogoImageView; // @synthesize weappBrandLogoImageView=_weappBrandLogoImageView;
@property(retain, nonatomic) UIView *weappBrandContainerView; // @synthesize weappBrandContainerView=_weappBrandContainerView;
@property(nonatomic) unsigned long long appearTime; // @synthesize appearTime=_appearTime;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) _Bool showWeAppBrand; // @synthesize showWeAppBrand=_showWeAppBrand;
@property(retain, nonatomic) WACircleLoadingView *circleLoadingView; // @synthesize circleLoadingView=_circleLoadingView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (long long)capsuleMenuStyleMode;
- (struct CGRect)capsuleMenuFrame;
- (_Bool)capsuleMenuHidden;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onUpdateAppPkgComplete:(_Bool)arg1 withAppInfoData:(id)arg2 errorCode:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(id)arg4;
- (_Bool)shouldShowGuaranteeIcon;
- (_Bool)shouldShowBrandOfficialFlag;
- (id)guaranteeTagsArray;
- (id)officialTagsArray;
- (void)viewDidLayoutSubviews;
- (void)initGuaranteeView;
- (void)initWeAppBrandView;
- (void)initOfficialLogo;
- (void)initLoadingView;
- (void)initContactTitle;
- (void)initLogoView;
- (void)initBackgroundView;
- (void)initSubViews;
- (void)initView;
- (void)configUI;
- (void)delayShowLoadingProgress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

