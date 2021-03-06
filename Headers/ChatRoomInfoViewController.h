//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AddMemLogicDelegate-Protocol.h"
#import "ChatRoomManagementDelegate-Protocol.h"
#import "ChatRoomMemberGridViewDelegate-Protocol.h"
#import "DelMemLogicDelegate-Protocol.h"
#import "IAutoSetRemarkExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "MMNewTipsMgrExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "MsgSearchHelperDelegate-Protocol.h"
#import "ViewMemLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class AddMemLogic, CContact, ChangeOwnerLogic, DelMemLogic, DelaySwitchSettingLogic, MMTableViewInfo, MsgSearchHelper, NSArray, NSIndexPath, NSString, RichTextView, UIButton, UIView, ViewMemLogic;
@protocol chatRoomInfoDelegate><chatRoomSettingDelegate;

@interface ChatRoomInfoViewController : MMUIViewController <MsgSearchHelperDelegate, MMNewTipsMgrExt, tableViewDelegate, ChatRoomMemberGridViewDelegate, MMTableViewInfoDelegate, contactInfoDelegate, IContactMgrExt, IGroupMgrExt, WCActionSheetDelegate, IAutoSetRemarkExt, AddMemLogicDelegate, ViewMemLogicDelegate, DelMemLogicDelegate, ChatRoomManagementDelegate>
{
    CContact *m_chatRoomContact;
    NSArray *m_arrMemberList;
    id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate;
    UIButton *m_muteButton;
    UIView *m_titleView;
    _Bool m_bDeleteStatus;
    _Bool m_bFromAddressBook;
    _Bool m_isChatStatusNotifyOpen;
    MMTableViewInfo *m_tableViewInfo;
    AddMemLogic *m_addMemLogic;
    ViewMemLogic *m_viewMemLogic;
    DelMemLogic *m_delMemLogic;
    ChangeOwnerLogic *m_changeOwnerLogic;
    _Bool m_isShowDislayName;
    _Bool m_bIsShowNotificationSectionIndexAtFirst;
    NSIndexPath *m_notificationSectionIndex;
    _Bool m_bIsShowNickNameSectionIndexAtFirst;
    NSIndexPath *m_showNicknameSectionIndex;
    _Bool m_bIsShowAnnouncementSectionIndexAtFirst;
    NSIndexPath *m_showAnnouncementSectionIndex;
    _Bool m_bEnterDescView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    _Bool m_bIsShowViewMoreBtn;
    UIButton *m_viewMoreBtn;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    RichTextView *m_openIMCommentRichTextView;
    _Bool m_HadShowNotification;
    MsgSearchHelper *m_oMsgSearchHelper;
    int _m_searchScene;
}

- (void).cxx_destruct;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene=_m_searchScene;
@property(nonatomic) _Bool m_bIsShowAnnouncementSectionIndexAtFirst; // @synthesize m_bIsShowAnnouncementSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNickNameSectionIndexAtFirst; // @synthesize m_bIsShowNickNameSectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowNotificationSectionIndexAtFirst; // @synthesize m_bIsShowNotificationSectionIndexAtFirst;
@property(nonatomic) _Bool m_bFromAddressBook; // @synthesize m_bFromAddressBook;
@property(retain, nonatomic) UIButton *m_muteButton; // @synthesize m_muteButton;
@property(nonatomic) __weak id <chatRoomInfoDelegate><chatRoomSettingDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (id)navigationBarBackgroundColor;
- (void)changeSetting;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)confirmOnArriveFund:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAlertViewAction:(_Bool)arg1;
- (void)quitChatRoom;
- (_Bool)canShowUpgradeStatus;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)setShowDisplayName:(id)arg1;
- (void)showSetRoomDisplayName;
- (id)getDisplayName;
- (void)showMoreMember;
- (void)setShowRemoveMember;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (void)onViewMemLogicStop:(_Bool)arg1;
- (void)showMoreMemberEx;
- (void)onDelMemLogicStop:(_Bool)arg1;
- (void)showDelMemView;
- (id)getViewController;
- (void)openContactInfo:(id)arg1;
- (void)onEnterChat;
- (void)dealloc;
- (double)getMemListCellHeight;
- (id)init;
- (void)didAppearFromSearchController;
- (void)willAppearFromSearchController;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)reloadMemberListAndView;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)showNotifiactionAnimate;
- (void)initView;
- (void)doReset;
- (void)updateMemberView;
- (void)initFooterView;
- (void)setTopSession:(id)arg1;
- (void)initMsgSearchHelper:(int)arg1;
- (void)onEditAndSearch;
- (void)onQuit;
- (void)onQRCodeView;
- (void)showAdminViewName;
- (void)showGroupManage;
- (void)showRemarkEdit;
- (void)showAdminViewDesc;
- (void)initData;
- (void)initOpenIMCommentRichTextView;
- (id)makeEnterBtn;
- (void)reloadTableData;
- (void)reloadProfileTableData;
- (void)makeDescCell:(id)arg1 cellInfo:(id)arg2;
- (id)makeDescView;
- (void)addMemListWithSection:(id)arg1;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeViewMoreBtnCell:(id)arg1 CellInfo:(id)arg2;
- (void)updateToNormalStatusEx;
- (void)loadMemberList;
- (void)resortMemList;
- (void)initTitleView;
- (void)updateTitleView;
- (_Bool)isTopSessionCountExceed;
- (void)onTopSession:(_Bool)arg1;
- (_Bool)getSessionTopped;
- (void)OnQuitGroupUIRespone:(id)arg1 withResult:(_Bool)arg2 errorMsg:(id)arg3;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(_Bool)arg3;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)onExpose;
- (void)toggleWatchContact:(id)arg1;
- (void)switchSaveToAddressBook:(id)arg1;
- (void)onClear:(id)arg1 Index:(id)arg2;
- (void)showChatBackgroundConfig;
- (void)setMuteStatus:(id)arg1;
- (_Bool)setUpdateNotifyMuted:(_Bool)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

