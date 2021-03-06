//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface TPDownloadProxyNative : NSObject
{
    _Bool _isNativeInit;
    _Bool _isReinitFinish;
    NSMutableDictionary *_serviceTypeParams;
    unsigned long long _bgTask;
    NSRecursiveLock *_serviceLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *serviceLock; // @synthesize serviceLock=_serviceLock;
@property(nonatomic) _Bool isReinitFinish; // @synthesize isReinitFinish=_isReinitFinish;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(retain, nonatomic) NSMutableDictionary *serviceTypeParams; // @synthesize serviceTypeParams=_serviceTypeParams;
@property(nonatomic) _Bool isNativeInit; // @synthesize isNativeInit=_isNativeInit;
- (void)backgroundTaskHandler;
- (void)receiveMemoryWarning:(id)arg1;
- (void)appwillTerminate:(id)arg1;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (_Bool)initNative;
- (void)setTask:(int)arg1 ResourceloaderProxyCallback:(void *)arg2;
- (void)updatePlayerPlayMsgWithTaskId:(int)arg1 playPositionSecond:(int)arg2 playerRemainTimeSecond:(int)arg3 advRemainTimeSecond:(int)arg4;
- (void)setPlayerState:(int)arg1 state:(int)arg2;
- (long long)verifyOfflineCacheSync:(id)arg1 fileFormat:(int)arg2 resourceId:(id)arg3 keyId:(id)arg4;
- (int)deleteCache:(id)arg1 resourceId:(id)arg2;
- (int)resumeDownload:(int)arg1;
- (int)pauseDownload:(int)arg1;
- (int)stopDownload:(int)arg1;
- (int)startDownload:(int)arg1;
- (id)getClipPlayUrl:(int)arg1 clipNo:(int)arg2 urlType:(int)arg3;
- (int)setClipInfo:(int)arg1 clipNo:(int)arg2 clipKeyId:(id)arg3 dlType:(int)arg4 urls:(id)arg5 savePath:(id)arg6 extraInfo:(id)arg7;
- (int)createDownloadTask:(int)arg1 fileId:(id)arg2 dlType:(int)arg3 clipCount:(int)arg4;
- (void)pushEvent:(long long)arg1;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (id)getHLSOfflineExttagWithVid:(id)arg1 linkVid:(id)arg2 formatId:(int)arg3 randomNum:(long long)arg4;
- (id)getErrorCodeStr:(int)arg1;
- (id)getVersion;
- (int)setMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (int)updateStoragePathWithServiceType:(int)arg1 path:(id)arg2;
- (int)deinitService:(int)arg1;
- (int)initService:(int)arg1 param:(id)arg2;
- (id)init;

@end

