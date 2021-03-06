//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseBizTransferExt-Protocol.h"
#import "IEnterpriseBrandContactMgrExt-Protocol.h"
#import "IEnterpriseSessionMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CContact, MMTableView, NSMutableArray, NSString;

@interface EnterpriseHomeContactListViewController : MMUIViewController <IEnterpriseSessionMgrExt, IEnterpriseBrandContactMgrExt, IEnterpriseBizTransferExt, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_homeContactsArray;
    CContact *_mainBrandContact;
    MMTableView *_tableView;
    unsigned int _fromScene;
}

- (void).cxx_destruct;
- (void)onBizShareInfoResult:(int)arg1 errorMsg:(id)arg2 shareInfo:(id)arg3 mainBrandUserName:(id)arg4;
- (void)onCleanUpEnterpriseChat:(id)arg1;
- (void)openMainBrandSettingInfo;
- (void)openEnterpriseBrandAppList;
- (void)openEnterpriseChat;
- (void)openDisabledBrandList;
- (void)openInviteColleages;
- (void)menuItemClick:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initView;
- (id)generateDefaultHomeContacts;
- (void)initData;
- (void)dealloc;
- (id)initWithMainContact:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

