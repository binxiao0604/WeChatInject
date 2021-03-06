//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "FriendAsistSessionExt-Protocol.h"
#import "IOpenImResourceMgrExt-Protocol.h"
#import "IWCMyStoryUserStateUtilExt-Protocol.h"
#import "MMTableViewIndexViewDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "NewContactsItemCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCChatRoomStoryDataVMExt-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCGlobalSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"

@class ContactsDataLogic, FTSVoiceSearchBarController, MMMainTableView, NSArray, NSMutableArray, NSString, UIButton, UILabel, WCChatRoomStoryDataVM, WCStoryReportUtil;

@interface ContactsViewController : MMTabBarBaseViewController <NewContactsItemCellDelegate, IWCMyStoryUserStateUtilExt, WCChatRoomStoryDataVMExt, WCSearchDelegate, WCDataSearchDelegate, WCGlobalSearchDelegate, UITableViewDelegate, UITableViewDataSource, VerifyPhoneDelegate, WCActionSheetDelegate, ContactsDataLogicDelegate, FriendAsistSessionExt, MainTableDelegate, MMTableViewIndexViewDelegate, IOpenImResourceMgrExt>
{
    MMMainTableView *m_tableView;
    struct UIEdgeInsets m_tableViewInsets;
    UILabel *m_countLabel;
    _Bool m_bShouldShowBindPhoneTip;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiHelloGroupUnreadCount;
    FTSVoiceSearchBarController *m_mmSearchBar;
    _Bool m_needResetTableViewOffset;
    _Bool m_canSearchAfterInit;
    _Bool m_hadSectionSocialBlackRowInHelloSection;
    NSMutableArray *m_brandContactGroupList;
    _Bool _hasWechatOut;
    WCChatRoomStoryDataVM *_chatRoomStoryDataVM;
    WCStoryReportUtil *_storyReportUtil;
    UIButton *_storyVideoEntryButton;
    NSArray *_favourContactArray;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *favourContactArray; // @synthesize favourContactArray=_favourContactArray;
@property(nonatomic) __weak UIButton *storyVideoEntryButton; // @synthesize storyVideoEntryButton=_storyVideoEntryButton;
@property(retain, nonatomic) WCStoryReportUtil *storyReportUtil; // @synthesize storyReportUtil=_storyReportUtil;
@property(retain, nonatomic) WCChatRoomStoryDataVM *chatRoomStoryDataVM; // @synthesize chatRoomStoryDataVM=_chatRoomStoryDataVM;
@property(nonatomic) _Bool hasWechatOut; // @synthesize hasWechatOut=_hasWechatOut;
@property(retain, nonatomic) NSMutableArray *m_brandContactGroupList; // @synthesize m_brandContactGroupList;
- (void)favourUnreadStatusNeedUpdate;
- (void)clickFavourStoryVideoAction;
- (void)refreshStoryVideoButton:(id)arg1;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)onNewContactsItemCellHeadViewDoubleClick:(id)arg1;
- (void)resetViewStatus;
- (void)onFriendAssistUnreadCountChanged;
- (void)updateTabBarBadge;
- (id)getMMKVHadSectionSocialBlackKey;
- (void)updateHadSectionSocialBlackRowInHelloSection;
- (void)updateHelloGroup;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (id)getViewController;
- (void)OnSayHelloDataChange;
- (void)SearchBarBecomeUnActive;
- (_Bool)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)setSearchTableResultText:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)onGetOpenImResourceDone:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (long long)mmtableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)mmsectionIndexTitlesForTableView:(id)arg1;
- (long long)mmcurrentIndexForTableView:(id)arg1;
- (void)loadHeaderViewSelection;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)bindPhoneReturn;
- (void)handleSelectdBrandGroup:(long long)arg1;
- (void)handleSelectdBindPhone;
- (void)handleSelectedWechatOut;
- (void)handleSelectOpenIM:(unsigned long long)arg1;
- (void)handleSelectEnterpriseBrand:(unsigned long long)arg1;
- (void)handleSelectdHelloGroup:(unsigned long long)arg1;
- (void)handleSelectdContactTag;
- (void)handleSelectdContactSocialBlack;
- (void)handleSelectdChatRoom;
- (void)handleSelectdHelloGroup;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeNewUserTipCell:(id)arg1;
- (void)makeBindPhoneCell:(id)arg1;
- (void)makeOpenIMEntranceCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeHelloGroupCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeEnterpriseBrandCell:(id)arg1 row:(long long)arg2;
- (void)makeWechatOutCell:(id)arg1;
- (void)makeContactTagCell:(id)arg1;
- (void)makeChatRoomCell:(id)arg1;
- (void)makeContactSocialBlackCell:(id)arg1;
- (void)makeHelloGroupCell:(id)arg1;
- (id)createContactsItemViewInCell:(id)arg1;
- (void)makeGroupCell:(id)arg1 head:(id)arg2 title:(id)arg3;
- (void)makeGroupCell:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void)updateEnterpriseBrandItemCell:(id)arg1 contact:(id)arg2;
- (void)updateNewContactsItemCell:(id)arg1 contact:(id)arg2;
- (long long)numberOfCellForBrandGroup;
- (long long)numberOfCellForOpenIM;
- (long long)numberOfCellForEnterpriseBrandGroup;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned int)getSectionType:(long long)arg1;
- (long long)ConvertToNormalContactSection:(long long)arg1;
- (_Bool)HasBindPhoneTip;
- (_Bool)HasWechatOutGroup;
- (_Bool)HasBrandGroup;
- (_Bool)HasEnterpriseBrandGroup;
- (_Bool)HasOpenIMEntrance;
- (_Bool)HasHelloGroup;
- (_Bool)isSeachActive;
- (double)getMainTableHeight;
- (void)handleFrameChangeForSearchBar;
- (void)hideSearchBar;
- (void)finishSearchBarImmediately;
- (_Bool)hasShowSearchBar;
- (void)initSearchBar;
- (void)initTitleArea;
- (void)initBarItem;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupStoryReportObj;
- (void)initView;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeContactsTip;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;
- (void)initTableView;
- (void)initCountLabel:(id)arg1;
- (void)updateCount;
- (void)initStoryDataVMWithContactArray:(id)arg1;
- (void)initData;
- (void)onAddContact;
- (void)onShowAddContact:(_Bool)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)openContactInfoView:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

