//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, SessionStorageSetting, WCTDatabase, WCTTable;
@protocol ISessionStorageDelegate;

@interface MMBaseSessionStorage : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_table;
    Class m_sessionClass;
    NSString *m_sessionType;
    NSMutableArray *m_sessionObjectList;
    NSMutableSet *m_tempSessionObjects;
    id <ISessionStorageDelegate> m_delegate;
    SessionStorageSetting *m_setting;
}

+ (void)processVersionUpdate;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ISessionStorageDelegate> delegate; // @synthesize delegate=m_delegate;
- (void)resortSessions;
- (void)initDB;
- (void)checkLoadData;
- (_Bool)checkSessionVersion;
- (void)updateSessionSetting;
- (id)sessionDirectoryPath;
- (_Bool)copySessionCacheToSessionType:(id)arg1;
- (_Bool)deleteSessionCacheAndDB;
- (void)clearSessionCacheAndReimportSession;
- (void)clearSessionCache;
- (_Bool)deleteAllSessions;
- (_Bool)deleteSessionWithSessionId:(id)arg1;
- (_Bool)deleteSessionAtIndex:(long long)arg1;
- (_Bool)clearAllTempSessions;
- (_Bool)isTempSessionWithSessionId:(id)arg1;
- (_Bool)isTempSession:(id)arg1;
- (_Bool)addOrUpdateTempSession:(id)arg1;
- (_Bool)addOrUpdateSessionList:(id)arg1;
- (_Bool)addOrUpdateSession:(id)arg1;
- (id)allSessions;
- (id)sessionWithSessionId:(id)arg1;
- (id)sessionAtIndex:(long long)arg1;
- (long long)sessionCount;
- (void)dealloc;
- (id)initWithSessionType:(id)arg1 withClass:(Class)arg2;

@end

