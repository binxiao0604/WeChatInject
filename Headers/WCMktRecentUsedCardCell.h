//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

#import "WCPayWebImageViewDelegate-Protocol.h"

@class CAGradientLayer, CardHomePageRecentlyUsedCell, MMUILabel, NSString, UIView, WCPayWebImageView;

@interface WCMktRecentUsedCardCell : MMMultiMenuTableViewCell <WCPayWebImageViewDelegate>
{
    CardHomePageRecentlyUsedCell *_cellData;
    UIView *_containerView;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    WCPayWebImageView *_cardBackgroundImgView;
    CAGradientLayer *_gradientLayer;
    UIView *_trafficIconView;
    UIView *_highlightView;
    UIView *_maskLayerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskLayerView; // @synthesize maskLayerView=_maskLayerView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *trafficIconView; // @synthesize trafficIconView=_trafficIconView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WCPayWebImageView *cardBackgroundImgView; // @synthesize cardBackgroundImgView=_cardBackgroundImgView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CardHomePageRecentlyUsedCell *cellData; // @synthesize cellData=_cellData;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)updateContentWithRecentlyUsedCellData:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

