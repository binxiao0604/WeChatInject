//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCPayRealnameSuccessViewDelegate;

@interface WCPayRealnameSuccessView : UIView
{
    _Bool _showRetry;
    NSString *_title;
    NSString *_desc;
    NSString *_buttonTitle;
    UIView *_headerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_footerView;
    UIButton *_confirmButton;
    UIButton *_retryButton;
    double _minHeight;
    id <WCPayRealnameSuccessViewDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayRealnameSuccessViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property _Bool showRetry; // @synthesize showRetry=_showRetry;
@property(retain) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
- (void)onClickRetryButton;
- (void)onClickConfirmButton;
- (void)updateRetryButton;
- (void)updateConfirmView;
- (void)updateFooterView;
- (void)updateDescView;
- (void)updateTitleView;
- (void)updateIconView;
- (void)updateHeaderView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateMinHeight:(double)arg1;
- (void)updateDelegate:(id)arg1;

@end

