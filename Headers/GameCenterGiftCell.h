//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGiftItem, MMWebImageView, UILabel;

@interface GameCenterGiftCell : MMTableViewCell
{
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    GameCenterGiftItem *_giftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (void)layoutContent;
- (void)reloadData;
- (void)initializeSubview;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

