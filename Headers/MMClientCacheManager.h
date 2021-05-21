//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "KindaNotifyExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMClientCacheManager : MMUserService <IMsgExt, ICdnComMgrExt, KindaNotifyExt, MMServiceProtocol, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_curDownloadUrl;
}

- (void).cxx_destruct;
- (void)checkConfig;
- (void)updateKey:(id)arg1;
- (void)doSSReportForPay;
- (void)doSSReport:(unsigned int)arg1;
- (void)doSSReport:(unsigned int)arg1 isBasic:(_Bool)arg2;
- (void)doDReport;
- (void)reportExtInfo:(id)arg1;
- (void)onKindaNotify:(id)arg1 value:(id)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)onNewRegOK;
- (void)onManulLoginOK;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)getBasicData;
- (id)getInfoPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

