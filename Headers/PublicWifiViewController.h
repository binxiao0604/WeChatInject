//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IPublicWifiManagerExt-Protocol.h"

@class APBase, MMScrollView, MMWebViewController, NSString, PublicWifiStatusBar, UIButton, UIImageView, UILabel, UIView;
@protocol PublicWifiViewControllerDelegate;

@interface PublicWifiViewController : MMUIViewController <IPublicWifiManagerExt>
{
    MMScrollView *_scrollView;
    UILabel *_ssidField;
    UILabel *_detailField;
    UIButton *_confirmButton;
    UILabel *_wifiNameField;
    id <PublicWifiViewControllerDelegate> _delegate;
    UIImageView *_logoImageView;
    PublicWifiStatusBar *_barView;
    MMWebViewController *_webViewController;
    APBase *_apbase;
    UIView *_passwordGuiderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *passwordGuiderView; // @synthesize passwordGuiderView=_passwordGuiderView;
@property(retain, nonatomic) APBase *apbase; // @synthesize apbase=_apbase;
@property(retain, nonatomic) MMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) PublicWifiStatusBar *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak id <PublicWifiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *wifiNameField; // @synthesize wifiNameField=_wifiNameField;
@property(retain, nonatomic) UILabel *detailField; // @synthesize detailField=_detailField;
@property(retain, nonatomic) UILabel *ssidField; // @synthesize ssidField=_ssidField;
- (void)registerNetwork:(id)arg1;
- (void)registerNetworkOnlyOneSSIDValidate:(id)arg1;
- (void)onRightBarButtonClick:(id)arg1;
- (void)setRightBarButtonItem;
- (void)reSetBarButtonItems;
- (void)showAdPageWithAnimation:(_Bool)arg1;
- (void)showAdPage;
- (void)onPublicWifiStatusChangedWithApBase:(id)arg1;
- (void)showHelpView;
- (void)onPublicWifiLoadingViewFinishLoading;
- (void)updateStatus;
- (void)buttonPressed:(id)arg1;
- (void)imageTapedSingle:(id)arg1;
- (void)updateLayout;
- (id)createLabel:(id)arg1 font:(float)arg2 textColor:(id)arg3 img:(id)arg4;
- (void)onConnectBtnClick:(id)arg1;
- (void)onCopyBtnClick:(id)arg1;
- (float)smallSapce;
- (float)largeSapce;
- (void)initViewForNonPasswordModel;
- (void)initViewForPasswordModel;
- (void)initViewForDisconnected;
- (void)initViewForConnected;
- (void)doCancel;
- (void)doBack;
- (void)doClose;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithApBase:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

