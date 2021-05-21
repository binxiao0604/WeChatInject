//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString, WCTDatabase, WCTTable;

@interface MMLiteAppDBMgr : MMUserService <MMServiceProtocol>
{
    WCTDatabase *_db;
    WCTTable *_tableLiteAppInfo;
    WCTTable *_tableLiteAppAuthInfo;
}

- (void).cxx_destruct;
@property(retain) WCTTable *tableLiteAppAuthInfo; // @synthesize tableLiteAppAuthInfo=_tableLiteAppAuthInfo;
@property(retain) WCTTable *tableLiteAppInfo; // @synthesize tableLiteAppInfo=_tableLiteAppInfo;
@property(retain) WCTDatabase *db; // @synthesize db=_db;
- (void)willRecoverDatabase;
- (id)dbPath;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)setupTable;
- (void)closeDB;
- (void)openDB;
- (id)getLiteAppAuthInfoItemByUrl:(id)arg1;
- (_Bool)insertLiteAppAuthInfoDBItem:(id)arg1;
- (id)getLiteAppList;
- (_Bool)insertLiteAppInfoDBItme:(id)arg1;
- (id)getLiteAppInfoItemByAppId:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

