//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "ChatRoomToolLastUseWeAppLogicDelegate-Protocol.h"
#import "ChatRoomToolWeAppSelectViewControllerDelegate-Protocol.h"
#import "IChatRoomToolMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, ChatRoomToolLastUseWeAppLogic, NSMutableArray, NSString, UICollectionView;
@protocol ChatRoomToolViewControllerDelegate;

@interface ChatRoomToolViewController : MMUIHalfScreenViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ChatRoomToolWeAppSelectViewControllerDelegate, IMsgExt, WCActionSheetDelegate, ChatRoomToolLastUseWeAppLogicDelegate, IChatRoomToolMgrExt>
{
    NSMutableArray *m_toolWeAppAr;
    NSMutableArray *m_latestUseInGroupWeAppAr;
    ChatRoomToolLastUseWeAppLogic *m_lastUseWeAppLogic;
    CContact *_chatRoomContact;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)onChangeChatRoomToolWeAppListWithUserName:(id)arg1;
- (void)onLoadWeAppLogicReloadTableWithWeAppList:(id)arg1;
- (void)didUpdateSelectWeAppList:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didSelectChatRoomToolWeAppAddAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)isShowEmptyCell;
- (void)reloadCollection;
- (void)initCollectionView;
- (double)getSessionContentMargin;
- (double)getContentMargin;
- (void)reloadView;
- (void)initData;
- (void)dealloc;
- (void)initRegister;
- (id)init;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <ChatRoomToolViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
