//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveConnectMicBaseContainerView.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMUISearchBar, NSArray, NSMutableArray, NSString, UILabel, UITableView;

@interface MMFinderLiveConnectMicAudienceContainerView : MMFinderLiveConnectMicBaseContainerView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSArray *connectMicUserList;
    MMUISearchBar *_searchBar;
    UILabel *_tipsLabel;
    UITableView *_tableView;
    NSMutableArray *_filteredConnectMicUserList;
    NSString *_highlightedText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *highlightedText; // @synthesize highlightedText=_highlightedText;
@property(retain, nonatomic) NSMutableArray *filteredConnectMicUserList; // @synthesize filteredConnectMicUserList=_filteredConnectMicUserList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *connectMicUserList; // @synthesize connectMicUserList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (double)topAreaHeight;
- (_Bool)isOnsearching;
- (id)mainScrollView;
- (void)doSearchWithText:(id)arg1;
- (void)onCancelSearch;
- (void)tryActiveSearch;
- (void)layoutSearchBar;
- (void)showTipsLabelWithTips:(id)arg1 topAreaHeight:(double)arg2;
- (void)layoutTopAreaView;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)onContainerWillHide;
- (void)updateConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updateWithConnectMicUserList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

