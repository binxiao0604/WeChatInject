//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, UIImageView;
@protocol MPLandingVideoErrViewDelegate;

@interface MPLandingVideoErrView : UIView
{
    id <MPLandingVideoErrViewDelegate> _delegate;
    UIImageView *_errImageView;
    MMUILabel *_errMsgLabel;
    MMUIButton *_retryBtn;
    UIView *_containerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *retryBtn; // @synthesize retryBtn=_retryBtn;
@property(retain, nonatomic) MMUILabel *errMsgLabel; // @synthesize errMsgLabel=_errMsgLabel;
@property(retain, nonatomic) UIImageView *errImageView; // @synthesize errImageView=_errImageView;
@property(nonatomic) __weak id <MPLandingVideoErrViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onErrViewRetryBtnClicked;
- (void)layoutSubviews;
- (void)updateWithErrMsg:(id)arg1 canRetry:(_Bool)arg2;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

