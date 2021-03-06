//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMUILabel, UIButton, UIImageView, UIView;
@protocol MMAppRefreshTokenErrorViewControllerDelegate;

@interface MMAppRefreshTokenErrorViewController : MMUIViewController
{
    _Bool _isShare;
    id <MMAppRefreshTokenErrorViewControllerDelegate> _delegate;
    UIView *_errView;
    UIView *_scrollView;
    UIImageView *_imgView;
    MMUILabel *_titleLabel;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *errView; // @synthesize errView=_errView;
@property(nonatomic) __weak id <MMAppRefreshTokenErrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShare; // @synthesize isShare=_isShare;
- (void)onConfirmBtnClicked;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;

@end

