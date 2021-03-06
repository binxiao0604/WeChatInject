//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, MMWebImageView, UIImageView, UIView, WCTagsView, WxaResult;

@interface FTSWANetSearchResultCell : MMTableViewCell
{
    WxaResult *_item;
    MMWebImageView *_iconView;
    UIView *_strokeView;
    UIImageView *_videoIcon;
    AttributeLabel *_titleLabel;
    AttributeLabel *_descLabel;
    AttributeLabel *_tailLabel;
    WCTagsView *_tagsView;
}

+ (double)HeightForItem:(id)arg1;
- (void).cxx_destruct;
- (void)setLineSpace:(double)arg1 forLabel:(id)arg2;
- (id)getAttributeText:(id)arg1;
- (void)update:(id)arg1 itemIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)defaultImage;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

