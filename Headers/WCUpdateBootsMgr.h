//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString, WCBootsUpdateInfo;

@interface WCUpdateBootsMgr : MMUserService <MMKernelExt, PBMessageObserverDelegate, INewSyncExt, IMsgExt, MMServiceProtocol>
{
    NSMutableDictionary *_dicDownloadingItem;
    NSString *_baseID;
    WCBootsUpdateInfo *_curBootsUpdateInfo;
}

+ (_Bool)isPRConfigContent:(id)arg1;
- (void).cxx_destruct;
- (void)cleanUpdate;
- (void)cleanOldOne;
- (void)handleXmlMsg:(id)arg1;
- (_Bool)verifyUpdateData:(id)arg1 withBootsInfo:(id)arg2;
- (_Bool)startDownloadUpdate:(id)arg1;
- (void)checkBootsUpdateWithCondition:(id)arg1 forceWithoutLogin:(_Bool)arg2;
- (id)getDefaultConditions;
- (id)getCurrentPid;
- (id)getBaseID;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onProcessPRConfigContent:(id)arg1;
- (void)onNewSyncIPXX:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)onServiceInit;
- (void)processPRConfig:(id)arg1;
- (void)checkBootsUpdateWithXmlKey:(id)arg1;
- (void)checkBootsUpdate;
- (void)forceUpdate:(_Bool)arg1;
- (id)getBootsUpdateData:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

