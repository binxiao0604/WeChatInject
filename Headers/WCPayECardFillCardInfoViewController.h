//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, UIButton, WCPayPhoneTextItem, WCPayTenpaySecureCtrlItem;
@protocol WCPayECardFillCardInfoViewControllerDelegate;

@interface WCPayECardFillCardInfoViewController : WCPayBaseViewController <WCBaseInfoItemDelegate>
{
    id <WCPayECardFillCardInfoViewControllerDelegate> _delegate;
    WCPayTenpaySecureCtrlItem *_bankCardNumberTextFieldItem;
    WCPayPhoneTextItem *_phoneNumberTextFieldItem;
    UIButton *_footerButton;
    double _cellItemLeft;
}

- (void).cxx_destruct;
@property(nonatomic) double cellItemLeft; // @synthesize cellItemLeft=_cellItemLeft;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) WCPayPhoneTextItem *phoneNumberTextFieldItem; // @synthesize phoneNumberTextFieldItem=_phoneNumberTextFieldItem;
@property(retain, nonatomic) WCPayTenpaySecureCtrlItem *bankCardNumberTextFieldItem; // @synthesize bankCardNumberTextFieldItem=_bankCardNumberTextFieldItem;
@property(nonatomic) __weak id <WCPayECardFillCardInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)showDetailTip;
- (id)tableFooterView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeCellTitleLabel;
- (void)calculateCellItemLeft;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

