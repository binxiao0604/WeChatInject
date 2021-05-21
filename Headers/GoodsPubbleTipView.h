//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRectTriangleArrowView.h"

@class FinderLiveShopWindowAdItem, FinderLiveShopWindowProductItem, MMLiveRichTextLabel, MMUIButton, MMUILabel, MMWebImageView, UIImageView, UIView;

@interface GoodsPubbleTipView : MMRectTriangleArrowView
{
    _Bool _isAnchor;
    FinderLiveShopWindowProductItem *_productItem;
    FinderLiveShopWindowAdItem *_adItem;
    unsigned long long _pubbleUIType;
    CDUnknownBlockType _tapCallback;
    CDUnknownBlockType _adActionCallback;
    UIView *_goodsContentBackView;
    MMWebImageView *_goodsImageView;
    MMLiveRichTextLabel *_goodsTitleLabel;
    MMUILabel *_currentPriceLabel;
    MMUIButton *_closeButton;
    MMUILabel *_adDescLabel;
    MMUILabel *_adActionLabel;
    double _triangePosOriginX;
    UIView *_gradientShawdowView;
    UIImageView *_promotingIconView;
    MMUILabel *_promotingLabel;
}

+ (id)buildAttributedStringWithTitle:(id)arg1 platformIcon:(id)arg2;
+ (double)goodsPubbleTipHeightForAnchor;
+ (double)goodsPubbleTipWidthForAnchor;
+ (double)goodsPubbleTipHeightForAudience;
+ (double)goodsPubbleTipWidthForAudience;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) MMUILabel *promotingLabel; // @synthesize promotingLabel=_promotingLabel;
@property(retain, nonatomic) UIImageView *promotingIconView; // @synthesize promotingIconView=_promotingIconView;
@property(retain, nonatomic) UIView *gradientShawdowView; // @synthesize gradientShawdowView=_gradientShawdowView;
@property(nonatomic) double triangePosOriginX; // @synthesize triangePosOriginX=_triangePosOriginX;
@property(retain, nonatomic) MMUILabel *adActionLabel; // @synthesize adActionLabel=_adActionLabel;
@property(retain, nonatomic) MMUILabel *adDescLabel; // @synthesize adDescLabel=_adDescLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) MMLiveRichTextLabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) MMWebImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) UIView *goodsContentBackView; // @synthesize goodsContentBackView=_goodsContentBackView;
@property(copy, nonatomic) CDUnknownBlockType adActionCallback; // @synthesize adActionCallback=_adActionCallback;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(nonatomic) unsigned long long pubbleUIType; // @synthesize pubbleUIType=_pubbleUIType;
@property(readonly, nonatomic) FinderLiveShopWindowAdItem *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) FinderLiveShopWindowProductItem *productItem; // @synthesize productItem=_productItem;
- (void)handleAdActionTapGesture:(id)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onCloseButtonClick;
- (void)layoutCloseButton;
- (void)changeUITypeWith:(unsigned long long)arg1;
- (void)layoutAdView;
- (void)layoutCurrentPriceLabel;
- (void)layoutGoodsTitleLabel;
- (void)layoutGoodsPromotingView;
- (void)layoutGoodsImageView;
- (void)layoutContentBackView;
- (void)layoutUI;
- (void)layoutSubviews;
- (_Bool)isCurrentAdItem:(id)arg1;
- (void)updateAdItem:(id)arg1;
- (_Bool)isCurrentProductItem:(id)arg1;
- (void)updateProductItem:(id)arg1;
- (double)contentWidth;
- (double)contentHeight;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 isAnchor:(_Bool)arg3;

@end
