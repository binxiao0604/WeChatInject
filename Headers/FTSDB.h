//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTS5MigrateRecord, NSDictionary, NSMutableDictionary, NSRecursiveLock, WCTDatabase, WCTTable;
@protocol FTSDBDelegate;

@interface FTSDB : NSObject
{
    _Bool m_hasStartMigrateMsgToFTS5;
    WCTTable *m_migrateRecordTable;
    FTS5MigrateRecord *m_migrateRecord;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dicInvalidUserNameId;
    NSMutableDictionary *m_dicValidUserName;
    NSMutableDictionary *m_dicValidUserNameId;
    WCTDatabase *m_db;
    WCTTable *m_tableFav;
    NSDictionary *m_dicTableMessage;
    WCTTable *m_tableMsgUserNameID;
    WCTTable *m_tableDeleteRecord;
    WCTTable *m_fts5RowidIndexTable;
    id <FTSDBDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FTSDBDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCTTable *m_tableDeleteRecord; // @synthesize m_tableDeleteRecord;
@property(retain, nonatomic) WCTTable *m_tableMsgUserNameID; // @synthesize m_tableMsgUserNameID;
@property(retain, nonatomic) NSDictionary *m_dicTableMessage; // @synthesize m_dicTableMessage;
@property(retain, nonatomic) WCTTable *m_tableFav; // @synthesize m_tableFav;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void)recoverDB;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (long long)getFileSize;
- (unsigned int)getFreeListCount;
- (unsigned int)getPageCount;
- (_Bool)initDB;
- (void)dealloc;
- (id)init;
- (void)old_debugDeleteRecord;
- (unsigned int)old_getIndexTableIdForSession:(id)arg1 msgLocalId:(unsigned int)arg2 content:(id *)arg3;
- (_Bool)old_deleteMsgsFromRecordLimit:(unsigned int)arg1 usrname2ItemDic:(id)arg2 finish:(_Bool *)arg3 operateCnt:(unsigned int *)arg4;
- (_Bool)old_removeDeleteRecordIds:(id)arg1 usrId:(unsigned int)arg2;
- (_Bool)old_removeDeleteRecordForUsrId:(unsigned int)arg1;
- (_Bool)old_internalUpdateToDeleteItems:(id)arg1 usrId:(unsigned int)arg2;
- (_Bool)old_updateToDeleteLocalIds:(id)arg1 usrId:(unsigned int)arg2;
- (_Bool)old_updateToDeleteMsgs:(id)arg1 usrId:(unsigned int)arg2;
- (_Bool)old_createDeleteRecordTable;
- (_Bool)old_checkExistIndexForTableId:(unsigned int)arg1 userNameId:(unsigned int)arg2 msgLocalId:(unsigned int)arg3 content:(id *)arg4;
- (unsigned int)old_getIndexCountForUsrId:(unsigned int)arg1 tableId:(unsigned int)arg2;
- (unsigned int)old_getFTSIndexCount;
- (unsigned int)old_getFTSSessionCount;
- (id)old_msgTableWithIndex:(unsigned int)arg1;
- (unsigned int)old_validMsgTableIndex:(unsigned int)arg1;
- (id)old_msgTableNameWithIndex:(unsigned int)arg1;
- (_Bool)old_createAllMsgTable;
- (id)old_queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3 limit:(unsigned int)arg4 maxTime:(unsigned int)arg5;
- (id)old_queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3;
- (_Bool)old_deleteInvalidRowsInChatTable:(id)arg1 limit:(int)arg2;
- (_Bool)old_deleteRowInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)old_deleteRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)old_insertRowsInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (unsigned int)old_MsgTableCount;
- (unsigned int)old_tableIdFromUserName:(id)arg1;
- (_Bool)old_createUserNameIdTable;
- (_Bool)old_deleteRowInUserNameIDTable:(unsigned int)arg1;
- (_Bool)old_updateUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)old_updateUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)old_updateUserNameInvalid:(unsigned int)arg1;
- (_Bool)old_insertNewRowInUserNameIDTable:(id)arg1 lastMsg:(id)arg2;
- (id)old_getUserNameIdWithLimit:(unsigned int)arg1 where:(const struct Expression *)arg2;
- (id)old_getValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)old_getValidIndexItemByUserName:(id)arg1;
- (_Bool)old_CreateMessageTable;
- (_Bool)deleteMsgsFromRecordLimit:(unsigned int)arg1 finish:(_Bool *)arg2 operateCnt:(unsigned int *)arg3 cancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)removeDeleteRecordForUsrId:(unsigned int)arg1;
- (_Bool)deleteFts5MsgContent:(id)arg1 withHandle:(id)arg2;
- (_Bool)updateToDeleteLocalIds:(id)arg1 inChatTable:(id)arg2;
- (_Bool)createDeleteRecordTable;
- (unsigned int)getIndexTableIdForSession:(id)arg1 msgLocalId:(unsigned int)arg2 content:(id *)arg3;
- (unsigned int)getIndexCountInChatTable:(id)arg1;
- (unsigned int)getFTSIndexCount;
- (unsigned int)getFTSSessionCount;
- (_Bool)createTableForFts5;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (id)fts5MsgTableNameWithIndex:(unsigned int)arg1;
- (id)fts3MsgTableNameWithIndex:(unsigned int)arg1;
- (void)checkStartMigrateMsgToFTS5;
- (_Bool)createAllMsgTable;
- (id)qualifyQuery:(id)arg1 isFTS5:(_Bool)arg2;
- (id)processInternalQueryResult:(id)arg1;
- (id)internalQuery:(id)arg1 inTableId:(int)arg2 limitUsrId:(id)arg3 minRowId:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)clearUserNameIdCacheOfTable:(int)arg1;
- (_Bool)migrateToFTS5WithLimit:(int)arg1 isFinish:(_Bool *)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (_Bool)deleteInvalidRowsInChatTable:(id)arg1 limit:(int)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (_Bool)insertFTS5MsgContentItem:(id)arg1 intoTable:(unsigned int)arg2 withUserNameIdItem:(id)arg3 withHandle:(id)arg4;
- (_Bool)batchInsertMsgToFTSTable:(id)arg1;
- (unsigned int)getRandomFTS5TableId;
- (unsigned int)fts3TableIdFromUserName:(id)arg1;
- (_Bool)createUserNameIdTable;
- (_Bool)deleteInvalidRowInUserNameIDTable:(unsigned int)arg1;
- (_Bool)updateUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNameInvalid:(id)arg1;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastLocalId:(unsigned int)arg2;
- (id)getOneInvalidateIndexItem;
- (_Bool)hasInvalidRowsInChatTable;
- (id)getUserNameIdWithLimit:(unsigned int)arg1 where:(const struct Expression *)arg2;
- (id)getValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)getValidIndexItemByUserName:(id)arg1;
- (void)preloadCacheUser;
- (_Bool)hasStartMigrateFTS5;
- (_Bool)CreateMessageTable;
- (unsigned int)getAllObjectsCount;
- (id)queryTextInFavTable:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (id)queryTextInFavTable:(id)arg1;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)createFavTable;

@end

