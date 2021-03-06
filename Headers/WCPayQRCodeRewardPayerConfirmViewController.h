//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class MMTextView, NSString, UIButton;
@protocol WCPayQRCodeRewardPayerConfirmViewControllerDelegate;

@interface WCPayQRCodeRewardPayerConfirmViewController : WCPayBaseViewController <UITextViewDelegate>
{
    _Bool _bIsCheckBoxSelected;
    id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> _delegate;
    MMTextView *_payerCommentTextView;
    UIButton *_checkBoxButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bIsCheckBoxSelected; // @synthesize bIsCheckBoxSelected=_bIsCheckBoxSelected;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(retain, nonatomic) MMTextView *payerCommentTextView; // @synthesize payerCommentTextView=_payerCommentTextView;
@property(nonatomic) __weak id <WCPayQRCodeRewardPayerConfirmViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkBoxBtnClick;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)confirmBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

