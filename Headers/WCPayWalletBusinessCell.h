//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FunctionDetail, MMUILabel, WCPayWebImageView;

@interface WCPayWalletBusinessCell : UICollectionViewCell
{
    FunctionDetail *_itemData;
    WCPayWebImageView *_iconImgView;
    WCPayWebImageView *_activityIconImgView;
    MMUILabel *_nameLabel;
    MMUILabel *_subTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCPayWebImageView *activityIconImgView; // @synthesize activityIconImgView=_activityIconImgView;
@property(retain, nonatomic) WCPayWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) FunctionDetail *itemData; // @synthesize itemData=_itemData;
- (_Bool)isNeedShowActivityIcon;
- (void)updateActivityIconView;
- (void)updateSubTitleLabel;
- (void)updateNameLabel;
- (void)updateIconView;
- (void)updateView;
- (void)updateCellWithItemData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

