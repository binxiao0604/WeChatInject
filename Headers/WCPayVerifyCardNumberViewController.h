//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayInputViewDelegate-Protocol.h"

@class NSString, UILabel, WCPayInputView;
@protocol WCPayVerifyCardNumberViewControllerDelegate;

@interface WCPayVerifyCardNumberViewController : WCPayBaseViewController <WCPayInputViewDelegate>
{
    id <WCPayVerifyCardNumberViewControllerDelegate> _delegate;
    WCPayInputView *_payInputView;
    UILabel *_tips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WCPayInputView *payInputView; // @synthesize payInputView=_payInputView;
@property(nonatomic) __weak id <WCPayVerifyCardNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)inputView:(id)arg1 didChangeText:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)realodView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

