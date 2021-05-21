//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IMiniMizeUserdRecordUpdateExt-Protocol.h"

@class CAGradientLayer, MMUIButton, MMUILabel, MMWebImageView, MiniTaskCollectionCellViewModel, NSString, UIImage, UIImageView, UIView;
@protocol MiniTaskCollectionCellDelegate;

@interface MiniTaskCollectionCell : UICollectionViewCell <IMiniMizeUserdRecordUpdateExt>
{
    MiniTaskCollectionCellViewModel *_viewModel;
    id <MiniTaskCollectionCellDelegate> _delegate;
    UIImageView *_snapShotView;
    UIView *_frontView;
    UIImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMUILabel *_footerTextLabel;
    MMUILabel *_titleTailLabel;
    MMUIButton *_closeBtn;
    MMWebImageView *_headerImageView;
    UIImageView *_extraIconImageView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_longVideoGradientLayer;
    UIImage *_defaultSnapshot;
}

+ (double)titleAreaHeight;
+ (double)cellHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultSnapshot; // @synthesize defaultSnapshot=_defaultSnapshot;
@property(retain, nonatomic) CAGradientLayer *longVideoGradientLayer; // @synthesize longVideoGradientLayer=_longVideoGradientLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *extraIconImageView; // @synthesize extraIconImageView=_extraIconImageView;
@property(retain, nonatomic) MMWebImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *titleTailLabel; // @synthesize titleTailLabel=_titleTailLabel;
@property(retain, nonatomic) MMUILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(retain, nonatomic) UIImageView *snapShotView; // @synthesize snapShotView=_snapShotView;
@property(nonatomic) __weak id <MiniTaskCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MiniTaskCollectionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (double)widthForTitileTailLabel;
- (_Bool)isTheOnlyCell;
- (id)extraIconForBizName:(id)arg1;
- (id)defaultIconNameForBizName:(id)arg1;
- (void)dealloc;
- (void)onCloseBtnClicked;
- (void)layoutTitleLabels;
- (void)layoutSubviews;
- (void)initTitleArea;
- (void)initCloseBtn;
- (void)initlongVideoGradientLayer;
- (void)initGradientLayer;
- (void)initSnapshotView;
- (void)initSubviews;
- (void)initContentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)adjustFrontViewYWithCollectionContentOffsetY:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

