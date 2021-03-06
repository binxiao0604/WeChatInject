//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, CContactVerifyLogic, CMessageWrap, MMTableViewInfo, MMTextView, NSDate, NSString, SendVerifyMsgLogicController, UITextField, WCTableViewSectionManager;
@protocol SendVerifyMsgViewControllerDelegate;

@interface SendVerifyMsgViewController : MMUIViewController <MMTableViewInfoDelegate, ILinkEventExt, UITextViewDelegate, UITextFieldDelegate, contactVerifyLogicDelegate>
{
    CContact *m_oVerifyContact;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSString *m_recommandRemark;
    _Bool m_bSetRemark;
    _Bool m_bNeedReloadSubviews;
    _Bool m_bNotCancel;
    _Bool m_bHasRemark;
    _Bool m_bHasTag;
    unsigned int m_uiRecomandRemarkScene;
    NSString *m_placeholder;
    _Bool m_isHadShowSocialBlackSwitchTip;
    MMTextView *m_tfVerifyMsg;
    UITextField *m_tfRemark;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bIsDisableAllPermissionContact;
    NSString *m_moreLimitFootTitle;
    _Bool m_isSocialBlackValue;
    _Bool m_isOutsiderValue;
    _Bool m_isWCBlackValue;
    _Bool m_clicfgSetDefaultChatonlyTwoHadSet;
    NSDate *m_pushInDate;
    _Bool m_changeWCBlacklist;
    _Bool m_changeWCOutsider;
    _Bool m_changeWCOnlyChat;
    _Bool m_hadSendOrVerifyDone;
    _Bool m_isShowRighImage;
    _Bool _m_bVerifyToMe;
    int _m_qrCodeAddFriendScene;
    CContact *m_oChatContact;
    CMessageWrap *m_oSourceMsg;
    NSString *recommandRemark;
    SendVerifyMsgLogicController *m_logicVC;
    id <SendVerifyMsgViewControllerDelegate> _m_delegate;
    NSString *_verifyContent;
    WCTableViewSectionManager *_m_socialBlackSection;
    WCTableViewSectionManager *_m_snsPermissionSection;
}

+ (unsigned int)getSendVerifySourceSceneWithFriendScene:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewSectionManager *m_snsPermissionSection; // @synthesize m_snsPermissionSection=_m_snsPermissionSection;
@property(retain, nonatomic) WCTableViewSectionManager *m_socialBlackSection; // @synthesize m_socialBlackSection=_m_socialBlackSection;
@property(retain, nonatomic) NSString *verifyContent; // @synthesize verifyContent=_verifyContent;
@property(nonatomic) _Bool m_bVerifyToMe; // @synthesize m_bVerifyToMe=_m_bVerifyToMe;
@property(nonatomic) int m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_isShowRighImage; // @synthesize m_isShowRighImage;
@property(nonatomic) __weak SendVerifyMsgLogicController *m_logicVC; // @synthesize m_logicVC;
@property(retain, nonatomic) NSString *recommandRemark; // @synthesize recommandRemark;
@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact;
- (void)reportSendVerifyMsg;
- (id)navigationBarBackgroundColor;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)makeRemarkEdit:(id)arg1;
- (void)initRemarkEdit;
- (void)makeEdit:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)opWCBlacklist:(id)arg1;
- (void)opOutsider:(id)arg1;
- (void)doOpSocialBlackPermission:(_Bool)arg1;
- (void)onPermissionClicfgSetDefaultChatonlyTwo;
- (void)opAllPermission;
- (void)opSocialBlackPermission;
- (_Bool)checkSendVerifyMsgOrVerifyOKClicfgSetDefaultChatonlyTwo;
- (void)showContactVerifyLimitFail:(id)arg1;
- (void)onVerifyOK;
- (void)onSendVerifyMsg;
- (void)onRemarkShowKeyBoard;
- (void)onRemarkHideKeyBoard;
- (void)onHideKeyBoard;
- (void)onReturn;
- (void)onCancel;
- (void)socialAuthorityCellAddAnimation:(id)arg1;
- (id)getSendVerifyMsgHeadView;
- (void)saveDataToStrangerCache;
- (void)reloadData;
- (void)initData;
- (void)reloadOpenIMPermissionTableViewCellInfo;
- (void)reloadPermissionTableViewCellInfoWithClicfgSetDefaultChatonlyTwo;
- (void)reloadPermissionTableViewCellInfoWithClicfgSetDefaultChatonly;
- (void)reloadPermissionTableViewCellInfo;
- (id)getContactVerifyVerifyToMeTipHeader;
- (void)reloadTableViewInfo;
- (void)setRightButtonType:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

