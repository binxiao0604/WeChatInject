//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CLLocationManagerDelegate-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "IWCDeviceAirKissMgrExt-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CLLocationManager, MMTableViewInfo, MMUILabel, MMUIScrollView, NSData, NSDate, NSString, UIButton, UIImageView, UILabel, UITextField, UIView, WCDevice;
@protocol AirKissViewControllerDelegate;

@interface AirKissViewController : MMUIViewController <CLLocationManagerDelegate, UITextFieldDelegate, INetworkStatusMgrExt, IWCDeviceAirKissMgrExt>
{
    UIImageView *m_imageView;
    MMUILabel *m_ssidView;
    MMTableViewInfo *m_tableView;
    UITextField *m_ssidTextField;
    UITextField *m_password;
    UILabel *m_lengthErrLabel;
    UIButton *m_connectButton;
    UIView *m_noWifiOrBLEView;
    _Bool m_hasStart;
    NSDate *m_startDate;
    _Bool m_isContinueToSearch;
    _Bool m_isStarted;
    _Bool m_isSsidExist;
    _Bool _isInAlert;
    int m_procint;
    int m_dataint;
    id <AirKissViewControllerDelegate> m_delegate;
    NSData *m_key;
    WCDevice *m_targetDeviceInfo;
    unsigned long long m_source;
    MMUIScrollView *m_scrollView;
    NSString *m_ssid;
    CLLocationManager *_locationMgrForAuthorization;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInAlert; // @synthesize isInAlert=_isInAlert;
@property(retain, nonatomic) CLLocationManager *locationMgrForAuthorization; // @synthesize locationMgrForAuthorization=_locationMgrForAuthorization;
@property(copy, nonatomic) NSString *m_ssid; // @synthesize m_ssid;
@property(nonatomic) _Bool m_isSsidExist; // @synthesize m_isSsidExist;
@property(nonatomic) _Bool m_isStarted; // @synthesize m_isStarted;
@property(retain, nonatomic) MMUIScrollView *m_scrollView; // @synthesize m_scrollView;
@property(nonatomic) unsigned long long m_source; // @synthesize m_source;
@property(nonatomic) __weak WCDevice *m_targetDeviceInfo; // @synthesize m_targetDeviceInfo;
@property(nonatomic) _Bool m_isContinueToSearch; // @synthesize m_isContinueToSearch;
@property(nonatomic) int m_dataint; // @synthesize m_dataint;
@property(nonatomic) int m_procint; // @synthesize m_procint;
@property(retain, nonatomic) NSData *m_key; // @synthesize m_key;
@property(nonatomic) __weak id <AirKissViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)onAirKissEnd:(_Bool)arg1;
- (void)onNetworkStatusChange:(int)arg1;
- (void)onTap;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onTextFieldLengthChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onConnect;
- (void)onReturn:(_Bool)arg1;
- (void)onSuccess;
- (void)onCancel;
- (id)dismissWithAnimate:(_Bool)arg1;
- (void)infoBtnClicked;
- (void)initNoWifiView;
- (void)makePasswordCell:(id)arg1;
- (void)makeSsidCell:(id)arg1;
- (void)initView;
- (void)doGetSSIDWifiInfoAndReloadView;
- (void)doRequestLocationAuthorization;
- (void)doAlertForNotAuthoriziedStateInIOS13AndReloadView;
- (void)getSSIDAndReloadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

