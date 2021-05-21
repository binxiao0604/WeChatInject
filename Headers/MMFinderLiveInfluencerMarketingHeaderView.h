//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString;
@protocol MMFinderLiveInfluencerMarketingHeaderViewDelegate;

@interface MMFinderLiveInfluencerMarketingHeaderView : UIView
{
    _Bool _isAnchor;
    id <MMFinderLiveInfluencerMarketingHeaderViewDelegate> _delegate;
    UIView *_contentView;
    MMUIButton *_closeBtn;
    MMUIButton *_addGoodsBtn;
    MMUIButton *_shopAssistantBtn;
    MMUIButton *_goodsOrderBtn;
    NSString *_title;
    unsigned long long _orderCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MMUIButton *goodsOrderBtn; // @synthesize goodsOrderBtn=_goodsOrderBtn;
@property(retain, nonatomic) MMUIButton *shopAssistantBtn; // @synthesize shopAssistantBtn=_shopAssistantBtn;
@property(retain, nonatomic) MMUIButton *addGoodsBtn; // @synthesize addGoodsBtn=_addGoodsBtn;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveInfluencerMarketingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickShopAssistantButton:(id)arg1;
- (void)onClickGoodsOrderButton:(id)arg1;
- (void)onClickAddGoodsButton:(id)arg1;
- (void)onClickLeftButton:(id)arg1;
- (void)onClickHeaderView:(id)arg1;
- (void)showAddGoodsButton:(_Bool)arg1;
- (void)updateWithOrderCount:(unsigned long long)arg1;
- (void)initView;
- (void)updateCloseButtonImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isAnchor:(_Bool)arg2;

@end

