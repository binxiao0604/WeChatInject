//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BrandChannelVideoGroupView, BrandProfileChannelSectionData, MMUILabel, UIImageView, UIView;

@interface BrandProfileChannelCell : UITableViewCell
{
    BrandProfileChannelSectionData *_sectionData;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_arrowImgView;
    UIView *_highlightMaskView;
    BrandChannelVideoGroupView *_videoGroupView;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) BrandChannelVideoGroupView *videoGroupView; // @synthesize videoGroupView=_videoGroupView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BrandProfileChannelSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

