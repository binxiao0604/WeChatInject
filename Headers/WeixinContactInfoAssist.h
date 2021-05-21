//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "ContactSettingViewControllerDelegate-Protocol.h"
#import "IAutoSetRemarkExt-Protocol.h"
#import "IHDHeadImageViewExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IOpenImContactMgrExt-Protocol.h"
#import "MMCPLabelDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "SendPatExt-Protocol.h"
#import "SendVerifyMsgViewControllerDelegate-Protocol.h"
#import "SetPermissionsViewControllerDelegate-Protocol.h"
#import "TextStateDetailContentViewDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class CContact, CMessageWrap, ContactRelatedGroupLogic, MMTableViewInfo, NSString, SendVerifyMsgLogicController, UIButton, UILabel;
@protocol ContactInfoAssistDelegate, WeixinContactInfoAssistDelegate;

@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, IAutoSetRemarkExt, SendVerifyMsgViewControllerDelegate, ILinkEventExt, IHDHeadImageViewExt, MMTableViewInfoDelegate, IOpenImContactMgrExt, SendPatExt, ContactSettingViewControllerDelegate, SetPermissionsViewControllerDelegate, TextStateDetailContentViewDelegate, WCFacadeExt>
{
    _Bool m_bFirstBecomeFriend;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_hasRequestUpdateAlbum;
    NSString *m_location;
    CContact *m_chatContact;
    unsigned int m_uiVerify;
    long long m_curDownloadEntrance;
    CMessageWrap *m_sourceMsg;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    NSString *m_introDisplayName;
    _Bool m_isNickNameUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSignatureUnsafe;
    _Bool m_hasFetchFinder;
    _Bool m_finderEntranceCellExposed;
    SendVerifyMsgLogicController *m_sendVerifylogicVC;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
    NSString *m_InviteUserName;
    UIButton *m_remarkButton;
    UIButton *m_snsPrivacyButton;
    UILabel *m_blackListTipsLabel;
    UILabel *m_quitRoomTipsLabel;
    unsigned int m_entranceAlbumThumbnailCnt;
    _Bool _m_bDisableAllOperation;
    unsigned int _m_uiFromScene;
    id <ContactInfoAssistDelegate> _delegate;
    id <WeixinContactInfoAssistDelegate> _weixinContactAssistDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WeixinContactInfoAssistDelegate> weixinContactAssistDelegate; // @synthesize weixinContactAssistDelegate=_weixinContactAssistDelegate;
@property(nonatomic) __weak id <ContactInfoAssistDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) _Bool m_bDisableAllOperation; // @synthesize m_bDisableAllOperation=_m_bDisableAllOperation;
- (void)didSelectStateIcon:(id)arg1;
- (void)didSelectSameTopicFriends:(id)arg1;
- (void)didSelectSourceButton:(id)arg1;
- (void)enterSelfLikeList:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onDisableContactVerifyByOpenIMFriReqAcceptedInWxWork:(id)arg1;
- (void)onOpenImGetContactOpenUrlDone:(id)arg1 openUrl:(id)arg2 errorTip:(id)arg3 scene:(unsigned int)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getChatRoomMemberContact;
- (void)onRestoreCPLabel:(id)arg1;
- (void)updateCPState;
- (id)init;
- (void)reportSendVerifyMsg;
- (void)reportContactInfoViewEnter;
- (long long)transferFromSceneToSourceScene;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1 andActionResultCode:(long long)arg2;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)contactSendReplyOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)handleAddedContact;
- (void)onOpenIMVerifyContactOk;
- (void)onVerifyContactOk;
- (void)onRelpyContact:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned int)arg2;
- (void)doAddContact;
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
- (void)onClickProfileIntroView;
- (void)onExposeByRecommand;
- (void)doAddToBlackList;
- (void)addToBlackList:(id)arg1;
- (void)removeFromBlackList;
- (void)showHDHeadViewImage;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(_Bool)arg3;
- (void)onDoubleClickHeadView:(id)arg1;
- (void)onAddToContacts;
- (id)navigationBarItemColor;
- (void)showRightButton;
- (void)initFooterView;
- (void)initFooterBtnArea;
- (void)initQuitRoomTipsLabel;
- (void)initBlackListTipsLabel;
- (void)initBlackAndExposeContactBtn;
- (void)initExposeBtn;
- (void)onClickFinderLikeListCell;
- (void)showFinderProfile;
- (void)showAlbumList;
- (void)onSayHelloToContact;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)reloadTableView;
- (_Bool)checkIsHadOpenIMContactVerify;
- (void)addMsgActionView;
- (void)sendMsgBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)initData;
- (void)addRemarkSection;
- (void)addFileHelperSection;
- (void)addSignatureCellAtSection:(id)arg1;
- (void)addInviterCellAtSection:(id)arg1;
- (void)addFinderLikeListCellAtSection:(id)arg1 previewData:(id)arg2;
- (void)addFinderEntranceCellAtSection:(id)arg1 previewData:(id)arg2;
- (id)fetchAndSyncFinderContactPreviewData;
- (void)addFinderCellsAtSection:(id)arg1;
- (void)addAlbumCellAtSection:(id)arg1;
- (void)addAlbumSection;
- (id)getSection;
- (void)addMoreCellAtSection:(id)arg1;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallTitleLabel:(id)arg1;
- (id)makeHeadSmallLabel:(id)arg1 cpKey:(id)arg2 inUnsafe:(_Bool)arg3 withPrefixTitle:(id)arg4 maxWidth:(double)arg5;
- (id)getSocialInfoView;
- (id)getPermissionIconsView;
- (id)getProfileDesViewWithCellHeight:(double)arg1;
- (id)getFinderCellViewWithDataItems:(id)arg1 canShowFeed:(_Bool)arg2;
- (id)getAlbumView;
- (id)getTagListView;
- (id)getWCOutsiderCellTitle;
- (id)getWCAddBlacklistCellTitle;
- (id)getPermissionView;
- (id)getProfileHeadView;
- (id)getHelloMsgPanel;
- (void)genAccountDeletedViewInProfileIntroView:(id)arg1 adjustmentProfileIntroViewTailBlock:(CDUnknownBlockType)arg2;
- (double)getMaxProfileIntroViewTitleWidthWithMaxLabelWidth:(double)arg1;
- (void)adjustmentProfileIntroViewTail:(double)arg1 andProfileIntroView:(id)arg2 andradiusCornerView:(id)arg3;
- (id)getProfileIntroView;
- (id)getTagNameList;
- (_Bool)canShowVOIPBtn;
- (id)getContactSetPermissionsViewController;
- (void)opEditSetPermission;
- (void)opEditRemarkName;
- (void)tryCall:(id)arg1;
- (void)onSocialInfoHandle;
- (void)updateFooterView;
- (_Bool)shouldShowTextState;
- (_Bool)isNeedHideUserName;
- (_Bool)IsShowUserName;
- (id)getWechatUserName;
- (_Bool)hasMore;
- (_Bool)isShowAddFriendScene;
- (_Bool)isFromQRCode;
- (id)getInfoDisplayName;
- (_Bool)isNeedVerify;
- (_Bool)isShowExposeButton;
- (_Bool)isShowBlackAction;
- (_Bool)isNeedShowRightBtn;
- (void)initTableView;
- (id)GetTableView;
- (_Bool)isNeedCopyFromLocalContact;
- (_Bool)isFromStrangeScene;
- (void)baseViewWillBePoped;
- (void)dealloc;
- (void)loadLocalContactData;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned int)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

