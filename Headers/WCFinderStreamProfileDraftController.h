//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCFinderProfileDraftListViewModelDelegate-Protocol.h"
#import "WCFinderProfileMusicViewDelegate-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"
#import "WCFinderStreamLayoutDelegate-Protocol.h"
#import "WCFinderStreamProfilePageDelegate-Protocol.h"

@class NSMutableSet, NSString, UICollectionView, UILabel, WCFinderProfileDraftListViewModel, WCFinderStreamFooterView, WCFinderStreamProfilePage;
@protocol UICollectionViewDelegate><UICollectionViewDataSource><WCFinderStreamLayoutDelegate;

@interface WCFinderStreamProfileDraftController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamProfilePageDelegate, WCFinderProfileDraftListViewModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileMusicViewDelegate>
{
    WCFinderProfileDraftListViewModel *_viewModel;
    WCFinderStreamProfilePage *_page;
    long long _appendSectionCount;
    WCFinderStreamFooterView *_footerView;
    UILabel *_statusTips;
    NSMutableSet *_exposeCellIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *exposeCellIds; // @synthesize exposeCellIds=_exposeCellIds;
@property(retain, nonatomic) UILabel *statusTips; // @synthesize statusTips=_statusTips;
@property(nonatomic) __weak WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) long long appendSectionCount; // @synthesize appendSectionCount=_appendSectionCount;
@property(retain, nonatomic) WCFinderStreamProfilePage *page; // @synthesize page=_page;
@property(retain, nonatomic) WCFinderProfileDraftListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onMusicViewDidClickDelete:(id)arg1 feedVM:(id)arg2;
- (void)onMusicViewDidClickRetry:(id)arg1 feedVM:(id)arg2;
- (void)onCellDelete:(id)arg1;
- (void)onTagRetry;
- (double)headerHeight;
- (double)statusViewOriginY;
- (void)updateStatusTips:(_Bool)arg1;
- (void)updateStatusWithHasError:(_Bool)arg1;
- (void)reloadCollectionView;
- (void)viewModelDataChanged:(id)arg1;
- (void)viewModel:(id)arg1 deleteItemAtIdx:(long long)arg2;
- (void)viewModel:(id)arg1 fetchDataError:(id)arg2;
- (void)viewModel:(id)arg1 appendDataFromIdx:(long long)arg2 toIdx:(long long)arg3;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)streamLayoutHeaderTopOffset:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutFooterHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHeaderHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (_Bool)isNeedSetupDecorationView:(unsigned long long)arg1;
- (_Bool)isNeedSetupFooterView:(unsigned long long)arg1;
- (_Bool)streamLayout:(id)arg1 isNeedSetupHeaderView:(unsigned long long)arg2;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (struct UIEdgeInsets)edgeInsetsInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)rowMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)columnMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)columnCountInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)numberOfStreamLayoutSections;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)menuItemExpose:(id)arg1 forCell:(id)arg2;
- (void)updateExposeActionForCell:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)openFinderEditor:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)openFeed;
- (void)onDisplayChanged:(_Bool)arg1;
- (long long)beginSection;
- (void)ensureCollectionView:(id)arg1;
@property(nonatomic) __weak id <UICollectionViewDelegate><UICollectionViewDataSource><WCFinderStreamLayoutDelegate> proxy;
@property(readonly, nonatomic) UICollectionView *collectionView;
@property(readonly, nonatomic) long long contentSection;
- (id)initWithContentSection:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

