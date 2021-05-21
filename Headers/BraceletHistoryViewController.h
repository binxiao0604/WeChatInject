//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BraceletSportRecordDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;

@interface BraceletHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate>
{
    _Bool _isSelf;
    NSString *_username;
    MMTableView *_tableView;
    NSMutableArray *_dailySportList;
    unsigned long long _initTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long initTime; // @synthesize initTime=_initTime;
@property(retain, nonatomic) NSMutableArray *dailySportList; // @synthesize dailySportList=_dailySportList;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void)onClickLikeButtonWithLikeList:(id)arg1;
- (void)onClickAppWithWAContact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onGetUserHistoryPage:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)initWithUserName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

