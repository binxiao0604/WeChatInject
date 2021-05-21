//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"
#import "WCPayRemarkPageSheetDelegate-Protocol.h"

@class NSString, RichTextView, UITextField, WCPayDecimalKeyboardView, WCPayRemarkPageSheet;
@protocol WCPayGPMoneyInputViewControllerDelegate;

@interface WCPayGPMoneyInputViewController : WCPayBaseViewController <ILinkEventExt, WCPayDecimalKeyboardViewDelegate, WCPayRemarkPageSheetDelegate>
{
    id <WCPayGPMoneyInputViewControllerDelegate> _delegate;
    UITextField *_moneyTextField;
    RichTextView *_remarkTextView;
    WCPayDecimalKeyboardView *_keyboardView;
    NSString *_remarkContent;
    WCPayRemarkPageSheet *_remarkPageSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayRemarkPageSheet *remarkPageSheet; // @synthesize remarkPageSheet=_remarkPageSheet;
@property(retain, nonatomic) NSString *remarkContent; // @synthesize remarkContent=_remarkContent;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) RichTextView *remarkTextView; // @synthesize remarkTextView=_remarkTextView;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(nonatomic) __weak id <WCPayGPMoneyInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetConfirmWithRemark:(id)arg1;
- (void)pageSheetCancel;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (id)keyboardHostViewController;
- (void)activeTextField;
- (void)textFieldDidChang:(id)arg1;
- (id)getLauncherDisplayName;
- (void)genKeyboardView;
- (void)setupInputView:(id)arg1;
- (void)setupHeaderView:(id)arg1;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

