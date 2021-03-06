//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FindContactSearchViewCellInfoDelegate-Protocol.h"

@class FindContactSearchViewCellInfo, MMTableView, NSArray, NSString, UIView;

@interface SearchContactViewController : MMUIViewController <FindContactSearchViewCellInfoDelegate>
{
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    NSArray *m_resultArray;
    NSString *m_searchText;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
- (void)onMainWindowFrameChanged;
- (_Bool)isSeachActive;
- (void)onCancelSearch;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithResultArray:(id)arg1 searchText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

