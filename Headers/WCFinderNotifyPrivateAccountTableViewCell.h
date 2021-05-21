//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WCFinderNotifyCenterCellViewModelDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, RichTextView, UIButton, UILabel, UIView, WCFinderAggregatedTitleView, WCFinderHeadImageView, WCFinderNotifyCenterCellViewModel;

@interface WCFinderNotifyPrivateAccountTableViewCell : UITableViewCell <WCFinderNotifyCenterCellViewModelDelegate>
{
    WCFinderHeadImageView *_headImageView;
    UIView *_multiHeadImageView;
    WCFinderHeadImageView *_frontHeadImageView;
    WCFinderHeadImageView *_backHeadImageView;
    WCFinderAggregatedTitleView *_titleView;
    RichTextView *_contentTextView;
    UILabel *_timestampLabel;
    UIView *_lineView;
    UIButton *_confirmButton;
    NSLayoutConstraint *_titleWidthConstraint;
    WCFinderNotifyCenterCellViewModel *_viewModel;
}

+ (double)getTitleWidthWithTitle:(id)arg1 suffixTitle:(id)arg2 width:(double)arg3;
+ (_Bool)shouldShowSuffixTitleWithTitle:(id)arg1 width:(double)arg2;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNotifyCenterCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak WCFinderAggregatedTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak WCFinderHeadImageView *backHeadImageView; // @synthesize backHeadImageView=_backHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *frontHeadImageView; // @synthesize frontHeadImageView=_frontHeadImageView;
@property(nonatomic) __weak UIView *multiHeadImageView; // @synthesize multiHeadImageView=_multiHeadImageView;
@property(nonatomic) __weak WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)onPrivateAccountFollowStateChanged;
- (void)setupViewLayout;
- (void)setupMultiImageView;
- (void)confirmButtonDidClick:(id)arg1;
- (void)setupConfirmButton;
- (void)setupUI;
- (void)updateConfirmButton;
- (void)updateNotifyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
