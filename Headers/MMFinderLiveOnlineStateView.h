//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOnlineStateView.h"

#import "MMFinderLiveOnlineStateCollectionViewCellDelegate-Protocol.h"
#import "MMFinderLiveOnlineUserLogicDelegate-Protocol.h"
#import "MMPageSheetAdapterDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MMFinderLiveOnlineUserLogic, MMPageSheetAdapter, NSMutableArray, NSString, RichTextView, UICollectionView, WCPinBottomCollectionViewFlowLayout;

@interface MMFinderLiveOnlineStateView : MMLiveOnlineStateView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMFinderLiveOnlineStateCollectionViewCellDelegate, MMFinderLiveOnlineUserLogicDelegate, MMPageSheetAdapterDelegate>
{
    _Bool isOpening;
    _Bool _shouldShowRewardAmount;
    _Bool _liveRewardEnabled;
    _Bool _needShowNoUserLabel;
    MMFinderLiveOnlineUserLogic *onlineUserLogic;
    unsigned long long _rewardTotalAmountInHeat;
    UICollectionView *_onlineUsersCollectionView;
    WCPinBottomCollectionViewFlowLayout *_onlineUsersCollectionLayout;
    RichTextView *_noUserLabel;
    NSMutableArray *_sessionInfos;
    MMPageSheetAdapter *_pageSheetAdapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) NSMutableArray *sessionInfos; // @synthesize sessionInfos=_sessionInfos;
@property(nonatomic) _Bool needShowNoUserLabel; // @synthesize needShowNoUserLabel=_needShowNoUserLabel;
@property(retain, nonatomic) RichTextView *noUserLabel; // @synthesize noUserLabel=_noUserLabel;
@property(retain, nonatomic) WCPinBottomCollectionViewFlowLayout *onlineUsersCollectionLayout; // @synthesize onlineUsersCollectionLayout=_onlineUsersCollectionLayout;
@property(retain, nonatomic) UICollectionView *onlineUsersCollectionView; // @synthesize onlineUsersCollectionView=_onlineUsersCollectionView;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) _Bool liveRewardEnabled; // @synthesize liveRewardEnabled=_liveRewardEnabled;
@property(nonatomic) _Bool shouldShowRewardAmount; // @synthesize shouldShowRewardAmount=_shouldShowRewardAmount;
@property(nonatomic) _Bool isOpening; // @synthesize isOpening;
@property(retain, nonatomic) MMFinderLiveOnlineUserLogic *onlineUserLogic; // @synthesize onlineUserLogic;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineUserStateItems:(id)arg2 rewardTotalAmountInHeat:(unsigned long long)arg3 onlineMemberCount:(unsigned int)arg4 myLiveUserStateItem:(id)arg5;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)onIntroductionButtonClicked;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)layoutHalfScreenContentView;
- (void)setOnlineUserCount:(long long)arg1;
- (void)setOnlineViewCount:(unsigned long long)arg1;
- (id)onlineUsersScrollView;
- (void)onSelectGiftButtonClickedWithUserItem:(id)arg1;
- (void)onHeadImageClicked:(id)arg1 userItem:(id)arg2;
- (id)createTableFooterViewForTitle:(id)arg1 size:(struct CGSize)arg2;
- (id)createSectionHeaderForSessionInfo:(id)arg1 size:(struct CGSize)arg2;
- (void)layoutNoUserLabel;
- (void)layoutContentView;
- (void)reloadData;
- (void)initView;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)updateTitleBarSubTitle;
- (void)updateTitleBarTitle;
- (id)getNoUserLabelTitle;
- (id)liveTask;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

