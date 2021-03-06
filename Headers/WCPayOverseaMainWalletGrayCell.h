//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, WalletGrayAreaItem;

@interface WCPayOverseaMainWalletGrayCell : UICollectionViewCell
{
    int _radius;
    MMWebImageView *_m_iconView;
    UILabel *_m_descriptionLabel;
    UILabel *_m_extraInfoLabel;
    WalletGrayAreaItem *_m_item;
}

- (void).cxx_destruct;
@property int radius; // @synthesize radius=_radius;
@property(retain, nonatomic) WalletGrayAreaItem *m_item; // @synthesize m_item=_m_item;
@property(retain, nonatomic) UILabel *m_extraInfoLabel; // @synthesize m_extraInfoLabel=_m_extraInfoLabel;
@property(retain, nonatomic) UILabel *m_descriptionLabel; // @synthesize m_descriptionLabel=_m_descriptionLabel;
@property(retain, nonatomic) MMWebImageView *m_iconView; // @synthesize m_iconView=_m_iconView;
- (id)utf8String:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateExtraInfoLabel;
- (void)updateDescriptionLabel;
- (void)updateIconView;
- (void)updateViewData;
- (void)layoutSubviews;
- (void)udpateGrayItem:(id)arg1 raduis:(int)arg2;

@end

