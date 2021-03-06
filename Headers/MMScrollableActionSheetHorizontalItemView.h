//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMScrollableActionSheetHorizontalItemInfo, UIButton, UIImageView, UILabel;
@protocol MMScrollableActionSheetHorizontalItemViewDelegate;

@interface MMScrollableActionSheetHorizontalItemView : MMUIView
{
    MMScrollableActionSheetHorizontalItemInfo *_itemInfo;
    UIButton *_iconButton;
    UILabel *_titleLabel;
    UIImageView *_cornerImageView;
    double _cachedItemViewHeight;
    id <MMScrollableActionSheetHorizontalItemViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMScrollableActionSheetHorizontalItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cachedItemViewHeight; // @synthesize cachedItemViewHeight=_cachedItemViewHeight;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) MMScrollableActionSheetHorizontalItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void)onTappedItemInfo;
- (double)layoutIconButtonAndTitleLabel;
- (void)layoutSubviews;
- (double)calcuateItemViewHeight;
- (void)setNeedRecalcuateItemViewHeight;
- (void)setupGestureRecognizer;
- (void)setupTitleLabel;
- (void)setupIconButton;
- (id)initWithDelegate:(id)arg1;

@end

