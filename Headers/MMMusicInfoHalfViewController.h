//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMMusicDotMVDataSource, MMMusicHorizontalScrollingView, MMMusicInfo, MMUIButton, MMUILabel, MMWebImageView, NSString, UIImageView, UILabel, UIPanGestureRecognizer, UIView;

@interface MMMusicInfoHalfViewController : MMUIViewController <MMWebImageViewDelegate>
{
    CDUnknownBlockType _loadedBlock;
    CDUnknownBlockType _closedBlock;
    CDUnknownBlockType _tappedAppLabelBlock;
    CDUnknownBlockType _tappedStatusBlock;
    UIPanGestureRecognizer *_panGesture;
    UIView *_containerView;
    UIView *_closedView;
    MMWebImageView *_musicCoverHDBackgroundImageView;
    MMWebImageView *_musicCoverHDImageView;
    UIView *_musicCoverHDMaskView;
    UIView *_musicCoverHDMaskGradiantView;
    CAGradientLayer *_musicCoverHDMaskGradiantMaskLayer;
    CAGradientLayer *_musicCoverTopMaskLayer;
    MMWebImageView *_musicLogoImageView;
    MMMusicHorizontalScrollingView *_songNameLabel;
    MMMusicHorizontalScrollingView *_singerNameLabel;
    UIView *_musicInfoContainerBackgroundView;
    UIView *_musicInfoContainerView;
    UIImageView *_musicIconView;
    MMMusicHorizontalScrollingView *_detailLabel;
    MMUILabel *_musicSourceLabel;
    UIImageView *_musicSourceArrowView;
    MMUIButton *_setStatusBtn;
    MMMusicInfo *_info;
    MMMusicDotMVDataSource *_mvDataSource;
    UILabel *_prefixStatusLabel;
    UIImageView *_statusLogoImageView;
    UILabel *_suffixStatusLabel;
    UIView *_footerCloseBtnContainerView;
    MMUIButton *_footerCloseBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *footerCloseBtn; // @synthesize footerCloseBtn=_footerCloseBtn;
@property(retain, nonatomic) UIView *footerCloseBtnContainerView; // @synthesize footerCloseBtnContainerView=_footerCloseBtnContainerView;
@property(retain, nonatomic) UILabel *suffixStatusLabel; // @synthesize suffixStatusLabel=_suffixStatusLabel;
@property(retain, nonatomic) UIImageView *statusLogoImageView; // @synthesize statusLogoImageView=_statusLogoImageView;
@property(retain, nonatomic) UILabel *prefixStatusLabel; // @synthesize prefixStatusLabel=_prefixStatusLabel;
@property(retain, nonatomic) MMMusicDotMVDataSource *mvDataSource; // @synthesize mvDataSource=_mvDataSource;
@property(retain, nonatomic) MMMusicInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) MMUIButton *setStatusBtn; // @synthesize setStatusBtn=_setStatusBtn;
@property(retain, nonatomic) UIImageView *musicSourceArrowView; // @synthesize musicSourceArrowView=_musicSourceArrowView;
@property(retain, nonatomic) MMUILabel *musicSourceLabel; // @synthesize musicSourceLabel=_musicSourceLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UIView *musicInfoContainerView; // @synthesize musicInfoContainerView=_musicInfoContainerView;
@property(retain, nonatomic) UIView *musicInfoContainerBackgroundView; // @synthesize musicInfoContainerBackgroundView=_musicInfoContainerBackgroundView;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(retain, nonatomic) MMMusicHorizontalScrollingView *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) MMWebImageView *musicLogoImageView; // @synthesize musicLogoImageView=_musicLogoImageView;
@property(retain, nonatomic) CAGradientLayer *musicCoverTopMaskLayer; // @synthesize musicCoverTopMaskLayer=_musicCoverTopMaskLayer;
@property(retain, nonatomic) CAGradientLayer *musicCoverHDMaskGradiantMaskLayer; // @synthesize musicCoverHDMaskGradiantMaskLayer=_musicCoverHDMaskGradiantMaskLayer;
@property(retain, nonatomic) UIView *musicCoverHDMaskGradiantView; // @synthesize musicCoverHDMaskGradiantView=_musicCoverHDMaskGradiantView;
@property(retain, nonatomic) UIView *musicCoverHDMaskView; // @synthesize musicCoverHDMaskView=_musicCoverHDMaskView;
@property(retain, nonatomic) MMWebImageView *musicCoverHDImageView; // @synthesize musicCoverHDImageView=_musicCoverHDImageView;
@property(retain, nonatomic) MMWebImageView *musicCoverHDBackgroundImageView; // @synthesize musicCoverHDBackgroundImageView=_musicCoverHDBackgroundImageView;
@property(retain, nonatomic) UIView *closedView; // @synthesize closedView=_closedView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType tappedStatusBlock; // @synthesize tappedStatusBlock=_tappedStatusBlock;
@property(copy, nonatomic) CDUnknownBlockType tappedAppLabelBlock; // @synthesize tappedAppLabelBlock=_tappedAppLabelBlock;
@property(copy, nonatomic) CDUnknownBlockType closedBlock; // @synthesize closedBlock=_closedBlock;
@property(copy, nonatomic) CDUnknownBlockType loadedBlock; // @synthesize loadedBlock=_loadedBlock;
- (void)handlePanGesture:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)close;
- (void)closeAnimated:(_Bool)arg1;
- (void)onClose;
- (void)handleSetStatusButtonClick:(id)arg1;
- (void)handleMusicSourceLabelTap;
- (void)_layoutSubviews;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInfo:(id)arg1 mvDataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
