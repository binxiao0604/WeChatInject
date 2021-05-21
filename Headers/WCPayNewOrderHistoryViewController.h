//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class MMTableView, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface WCPayNewOrderHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCPayNoticeBannerDelegate>
{
    _Bool _isLoadingMore;
    _Bool _couldLoadMore;
    NSString *_orderListExtBuffer;
    NSDictionary *m_dicBanners;
    NSMutableOrderedSet *_sections;
    NSMutableDictionary *_rollDictionary;
    MMTableView *_tableView;
    NSMutableDictionary *_monthFees;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *monthFees; // @synthesize monthFees=_monthFees;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableDictionary *rollDictionary; // @synthesize rollDictionary=_rollDictionary;
@property(retain, nonatomic) NSMutableOrderedSet *sections; // @synthesize sections=_sections;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemFromIndexPath:(id)arg1;
- (id)actualfeeTextFromItem:(id)arg1;
- (id)feeTextFromItem:(id)arg1;
- (id)timeTextFromItem:(id)arg1;
- (id)monthFeeTextFromMonthTimeInterval:(double)arg1;
- (id)sectionNameFromTimeInterval:(double)arg1;
- (long long)timeIntervalInMonthly:(double)arg1;
- (void)mergeMonthFeeFromMonthInfos:(id)arg1 toDictionary:(id)arg2;
- (void)mergeResponse:(id)arg1 toDictionary:(id)arg2;
- (unsigned long long)currentCount;
- (void)handleDeleteOrderResponse:(id)arg1 error:(id)arg2 indexPath:(id)arg3;
- (void)deleteOrderIndexPath:(id)arg1;
- (void)handleGetOrderResponse:(id)arg1 error:(id)arg2;
- (void)getOrdersWithOffset:(unsigned long long)arg1;
- (id)getBottomView;
- (void)setupView;
- (void)reloadData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

