//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "IAutoSetRemarkExt-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IOpenImContactMgrExt-Protocol.h"
#import "IOpenImResourceMgrExt-Protocol.h"
#import "MMCPLabelDelegate-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"
#import "SetPermissionsViewControllerDelegate-Protocol.h"

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, MMURLHandler, NSString, SendVerifyMsgLogicController;
@protocol ContactInfoAssistDelegate;

@interface OpenIMContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, IHDHeadImageViewExt, IOpenImResourceMgrExt, IOpenImContactMgrExt, SetPermissionsViewControllerDelegate>
{
    _Bool m_bFirstBecomeFriend;
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    NSString *m_cpKeyForOpenIMDesc;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    _Bool m_isOpenIMDescUnsafe;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    MMURLHandler *m_urlHandler;
    _Bool _m_bDisableAllOperation;
    unsigned int _m_uiFromScene;
    id <ContactInfoAssistDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (id)navigationBarBackgroundColor;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getChatRoomMemberContact;
- (void)reportContactInfoComeWithReportScene:(int)arg1;
- (void)reportContactInfoItemClickWithCellInfo:(id)arg1;
- (void)reportContactInfoViewEnter;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (id)init;
- (void)contactSendReplyOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)handleAddedContact;
- (void)onOpenIMVerifyContactOk;
- (void)onVerifyContactOk;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)doAddContact;
- (void)onOpenIMNormalClicked:(id)arg1;
- (void)onInviteContactClick;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onStartChat:(id)arg1;
- (void)onNewMessage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doDeleteContact;
- (void)onAction;
- (void)opBlackList:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipView;
- (void)onExposeByRecommand;
- (void)doAddToBlackList;
- (void)addToBlackList:(id)arg1;
- (void)removeFromBlackList;
- (void)showRightButton;
- (void)initFooterView;
- (void)initFooterBtnArea;
- (void)initBlackAndExposeContactBtn;
- (void)initExposeBtn;
- (void)onSayHelloToContact;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)opEditSetPermission;
- (void)reloadTableView;
- (_Bool)checkISNeedShowIMSource;
- (id)makeOpenIMSourceSection;
- (id)makeOpenIMIntroSection;
- (id)makeOpenIMInfoSection;
- (_Bool)checkIsHadOpenIMContactVerify;
- (void)addMsgActionView;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)initData;
- (void)makeDisclosureIndicatorCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2 phoneList:(id)arg3 autoresizingMask:(unsigned long long)arg4;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMPhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeOpenIMNormalCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 height:(double)arg3 userInfo:(id)arg4;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 userInfo:(id)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3;
- (id)cellForRightMakeSel:(SEL)arg1 leftTitle:(id)arg2 actionSel:(SEL)arg3 height:(double)arg4 userInfo:(id)arg5;
- (void)addInviterCellAtSection:(id)arg1;
- (void)addRemarkSection;
- (id)getProfileHeadView;
- (id)getPermissionView;
- (id)getPermissionIconsView;
- (_Bool)canShowVOIPBtn;
- (id)getHelloMsgPanel;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (id)getProfileIntroView;
- (id)getTagNameList;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (void)opEditRemarkName;
- (void)tryHandleLink:(id)arg1;
- (void)tryCall:(id)arg1;
- (void)onSocialInfoHandle;
- (void)updateFooterView;
- (_Bool)isNeedHideUserName;
- (_Bool)IsShowUserName;
- (id)getWechatUserName;
- (_Bool)isShowAddFriendScene;
- (_Bool)isFromQRCode;
- (id)getInfoDisplayName;
- (_Bool)isNeedVerify;
- (_Bool)isShowExposeButton;
- (_Bool)isShowBlackAction;
- (_Bool)isNeedShowRightBtn;
- (void)initTableView;
- (id)GetTableView;
- (_Bool)isFromStrangeScene;
- (void)dealloc;
- (void)loadLocalContactData;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (void)onGetOpenImResourceDone:(id)arg1;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

