//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class DotLoadingView, NSString, UIImage, UIImageView, UILabel, UIView, WAHeaderStackDisplayView, WAHomeDynamicCellViewModel;

@interface WAHomeNewStaticNearByTableViewCell : MMTableViewCell
{
    _Bool _showBottomLine;
    UIImage *_icon;
    NSString *_title;
    unsigned long long _status;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIView *_normalContentView;
    UILabel *_noticeLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowImageView;
    UIView *_loadingContentView;
    DotLoadingView *_loadingView;
    UIView *_retryContentView;
    UIImageView *_retryImageView;
    UIView *_bottomLine;
    WAHomeDynamicCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAHomeDynamicCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UIView *retryContentView; // @synthesize retryContentView=_retryContentView;
@property(retain, nonatomic) DotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingContentView; // @synthesize loadingContentView=_loadingContentView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) WAHeaderStackDisplayView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UIView *normalContentView; // @synthesize normalContentView=_normalContentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)fixLabelWidth:(id)arg1 maxTo:(double)arg2;
- (void)fill:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

