//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IQQAccountMgrExt-Protocol.h"

@class MMTableViewInfo, NSString, UIViewController;
@protocol SettingModifyQQViewControllerDelegate;

@interface SettingModifyQQViewController : AccountBaseViewController <IQQAccountMgrExt>
{
    unsigned int m_uiUin;
    MMTableViewInfo *m_tableViewInfo;
    UIViewController *m_vcAccount;
    id <SettingModifyQQViewControllerDelegate> _m_SettingModifyQQViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyQQViewControllerDelegate> m_SettingModifyQQViewControllerDelegate; // @synthesize m_SettingModifyQQViewControllerDelegate=_m_SettingModifyQQViewControllerDelegate;
@property(retain, nonatomic) UIViewController *m_vcAccount; // @synthesize m_vcAccount;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;
- (void)makeCell:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)undoRegester;
- (void)doRegester;
- (void)OnOperate;
- (void)OnBindQQOK;
- (void)OnUnBindQQOK;
- (void)OnUnBindQQFail;
- (void)updateViewOnQQChange;
- (id)getHeaderView;
- (void)updateTableCell;
- (void)onCancel:(id)arg1;
- (void)ShowBindQQView;
- (void)onUnBind:(id)arg1;
- (void)confirmUnBind;
- (void)onUnBindAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

