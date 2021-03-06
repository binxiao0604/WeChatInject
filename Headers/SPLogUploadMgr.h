//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"
#import "VoIPPushKitExt-Protocol.h"

@class MMSilentPushReporter, NSString;

@interface SPLogUploadMgr : MMRootService <MMServiceProtocol, VoIPPushKitExt>
{
    MMSilentPushReporter *_logReporter;
    NSString *_m_realReportUrl;
    NSString *_m_realHost;
    unsigned long long _m_packageSize;
}

+ (id)silentPushBackgroundURLSessionIndentifierPrefix;
+ (id)xmlStringFromCgContent:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_packageSize; // @synthesize m_packageSize=_m_packageSize;
@property(retain, nonatomic) NSString *m_realHost; // @synthesize m_realHost=_m_realHost;
@property(retain, nonatomic) NSString *m_realReportUrl; // @synthesize m_realReportUrl=_m_realReportUrl;
@property(retain, nonatomic) MMSilentPushReporter *logReporter; // @synthesize logReporter=_logReporter;
- (void)handleSilentPushLogUploadTaskWithURLSessionID:(id)arg1;
- (unsigned long long)uploadId;
- (unsigned long long)stackLength:(id)arg1;
- (id)makeHttpRequest:(id)arg1;
- (void)handleLogUpload:(id)arg1;
- (void)upload:(id)arg1;
- (id)getUserName;
- (_Bool)onIPxx:(id)arg1;
- (void)onReceiveVoIPPushInfo:(id)arg1;
- (void)lazyInitLogReporter;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

