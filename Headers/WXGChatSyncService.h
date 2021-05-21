//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IOnlineClientMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WXGChatSyncDataPackerDelegate-Protocol.h"

@class CdnUploadTaskInfo, NSArray, NSDate, NSString, WXGChatSyncDataPacker;

@interface WXGChatSyncService : MMUserService <ICdnComMgrExt, PBMessageObserverDelegate, WXGChatSyncDataPackerDelegate, IOnlineClientMgrExt, IMsgExt, MMServiceProtocol>
{
    NSString *m_uploadingFileName;
    NSString *m_uploadingFilePath;
    _Bool m_startSync;
    long long m_sessionListCount;
    long long m_sessionInfoCount;
    long long m_msgCount;
    long long m_timeLimit;
    NSArray *m_msgIntervalArray;
    NSArray *m_msgLimitArray;
    NSString *m_getMoreIdentifier;
    unsigned long long m_getMoreMsgLimit;
    _Bool m_pcSyncClose;
    _Bool m_macSyncClose;
    _Bool m_iPadSyncClose;
    unsigned int m_dataSize;
    NSDate *m_startSyncDate;
    NSDate *m_startPack;
    NSString *m_pemPublicKey;
    CdnUploadTaskInfo *m_currentUploadInfo;
    _Bool m_bPartnerDeviceLogin;
    unsigned int m_pcVersion;
    unsigned int m_macVersion;
    unsigned int m_iPadMinVersion;
    unsigned int m_deviceType;
    NSString *m_currentSyncType;
    WXGChatSyncDataPacker *_dataPacker;
}

+ (id)unsignedcharToHexString:(char *)arg1 withSize:(unsigned int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WXGChatSyncDataPacker *dataPacker; // @synthesize dataPacker=_dataPacker;
@property(nonatomic) long long syncMsgTimeLimit; // @synthesize syncMsgTimeLimit=m_timeLimit;
- (void)reportAppMsgFailed;
- (void)reportCDNFailed;
- (void)reportSyncSuccess;
- (void)reportStartSync;
- (void)p_parseAppMsg:(id)arg1;
- (void)onRevChatSyncRequest:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)sendAppMessage;
- (void)autoSendAppMessage;
- (void)OnCdnUpload:(id)arg1;
- (void)startUploadDataToCDNWithFilePath:(id)arg1;
- (void)onChatSyncDataPackFinishWithFilePath:(id)arg1 withMsgCount:(unsigned long long)arg2;
- (void)startGetMoreSynceWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)startSleepSyncWithExt:(id)arg1 withPemKey:(id)arg2;
- (void)onLogoutWeb;
- (void)onLoginWeb;
- (void)trySendAppMessage;
- (void)startSyncWithType:(unsigned long long)arg1 withPemKey:(id)arg2;
- (_Bool)getAllowSync;
- (void)setAllowSync:(_Bool)arg1;
- (void)stopSync;
- (void)p_markStopSync;
- (void)p_markStartSync;
- (unsigned int)getiPadMinVersion;
- (unsigned int)getMacVersion;
- (unsigned int)getPCVersion;
- (_Bool)getiPadSyncCloseSetting;
- (_Bool)getMacSyncCloseSetting;
- (_Bool)getPCSyncCloseSetting;
- (long long)getTimeLimit;
- (long long)getSessionInfoCount;
- (long long)getSessionListCount;
- (void)syncSetting;
- (void)p_checkABTest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

