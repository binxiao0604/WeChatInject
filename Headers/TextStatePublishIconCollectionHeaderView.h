//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TextStatePublishIconCollectionHeaderView : UICollectionReusableView
{
    NSString *_title;
    NSString *_sectionTitle;
    UILabel *_titleLabel;
    UILabel *_sectionTitleLabel;
}

+ (double)estimatedHeightOfSection:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;

@end

