//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, MMHDHeadImageView, MMHeadImageView, MMLoadingView, NSString, UILabel, UIView;
@protocol ContactInfoAssistDelegate;

@interface CBaseContactInfoAssist : MMObject <contactVerifyLogicDelegate, IContactMgrExt, WCActionSheetDelegate, PBMessageObserverDelegate>
{
    UIView *m_headerView;
    UIView *m_footerView;
    MMHeadImageView *m_headView;
    MMHDHeadImageView *m_HDHeadView;
    MMLoadingView *m_loadingView;
    CContact *m_contact;
    UILabel *m_displayNameLabel;
    UILabel *m_userNameLabel;
    id <ContactInfoAssistDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMHeadImageView *m_headView; // @synthesize m_headView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)isInteractivePopEnabled;
- (_Bool)isSeachActive;
- (void)reportContactInfoViewEnter;
- (id)navigationBarItemColor;
- (id)navigationBarBackgroundColor;
- (void)baseViewWillBePoped;
- (void)onContactUpdated;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)makeContactIntroCell:(id)arg1 text:(id)arg2;
- (double)getSignatureWidth;
- (void)dealloc;
- (id)GetFloatView;
- (id)GetMainScrollView;
- (id)GetTableView;
- (void)initLoadingView;
- (void)stopLoading;
- (void)contactAddContactOk:(id)arg1;
- (void)addContactInternal;
- (void)handleAddedContact;
- (void)onContactVerifyFillVerifyMsg:(id)arg1;
- (void)onAddToContacts;
- (void)modifyVerifyContactWrap:(id)arg1;
- (void)doAddContact;
- (_Bool)isInMyContactList;
- (void)reloadView;
- (void)reloadTableView;
- (void)initNickNameLabel;
- (void)initUserNameLabel;
- (id)getUserNameCol;
- (void)updateInstallStateAndReloadTableView;
- (void)opShareMyFriend;
- (void)profileDestory;
- (void)updateFooterView;
- (void)updateNickNameLabel;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
