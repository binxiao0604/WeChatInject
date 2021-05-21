//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMFinderLiveRewardDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase *_db;
    WCTTable *_tableLiveRewardGift;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLiveRewardGift; // @synthesize tableLiveRewardGift=_tableLiveRewardGift;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)openDB;
- (_Bool)deleteAllLiveRewardGiftItems;
- (_Bool)deleteLiveRewardGiftItemByProductId:(id)arg1;
- (_Bool)insertOrUpdateLiveRewardGiftItem:(id)arg1;
- (_Bool)insertLiveRewardGiftItem:(id)arg1;
- (id)getLiveRewardGiftItemsByProductIdList:(id)arg1;
- (id)getLiveRewardGiftItemByProductId:(id)arg1;
- (id)getLiveRewardGiftItemsWithLimit:(unsigned int)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

