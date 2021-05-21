//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSObject, NSString, WACacheFileCleanStatus;
@protocol OS_dispatch_queue;

@interface WACacheFileCleanMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    WACacheFileCleanStatus *_status;
    unsigned int _lastUpdateStatusTime;
    unsigned long long _scanPhase;
    unsigned long long _maxTotalFileSize;
}

- (void).cxx_destruct;
@property unsigned long long maxTotalFileSize; // @synthesize maxTotalFileSize=_maxTotalFileSize;
@property unsigned int lastUpdateStatusTime; // @synthesize lastUpdateStatusTime=_lastUpdateStatusTime;
@property unsigned long long scanPhase; // @synthesize scanPhase=_scanPhase;
- (void)onAppTaskTerminate:(id)arg1;
- (void)scanFolder:(id)arg1 getTotalFileSize:(unsigned long long *)arg2 totalFileNum:(unsigned int *)arg3;
- (id)subFolderNamesWithPath:(id)arg1;
- (void)fileStatWithPath:(id)arg1 getCreateTime:(unsigned int *)arg2 modifyTime:(unsigned int *)arg3 fileSize:(unsigned long long *)arg4;
- (unsigned int)getModifyTimeWithPath:(id)arg1;
- (_Bool)isWeAppRunning:(id)arg1;
- (void)workthread_cleanFilesToMakeEnoughSpaceForAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workthread_cleanFilesForApp:(id)arg1;
- (void)workthread_cleanGlobalFilesWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned int)contentModiyTimeWithAppFolderPath:(id)arg1 tempDirPath:(id)arg2;
- (void)removeAppItemNotHasFolder:(id)arg1;
- (id)scanRootDir;
- (void)innerScanFiles;
- (void)workThread_scanFiles;
- (id)arrSortAppItemFromStatus;
- (unsigned long long)tempFileSizeOfAppId:(id)arg1;
- (id)appItemInStatus:(id)arg1;
- (id)allAppIDInStatus;
- (void)removeItemAndUpdateTotalSize:(id)arg1;
- (void)setTotalFileSize:(unsigned long long)arg1 totalFileNum:(unsigned int)arg2 contentModifyTime:(unsigned int)arg3 scanTime:(unsigned int)arg4 withAppID:(id)arg5;
- (void)removeFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (void)addFileSize:(unsigned long long)arg1 contentModifyTime:(unsigned int)arg2 withAppID:(id)arg3;
- (unsigned long long)currentTotalFileSize;
- (_Bool)isTimeForSaveStatus;
- (void)saveStatus;
- (void)loadStatus;
- (id)statusFilePath;
- (void)asyncCleanFilesToMakeEnoughSpaceForAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncCleanFilesForApp:(id)arg1;
- (void)asyncCleanFilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)asyncScanFiles;
- (_Bool)isTotalFileSizeExceedHalfMax;
- (_Bool)isSingleAppTempSizeExceedSize:(unsigned long long)arg1 appId:(id)arg2;
- (_Bool)isTempFileSizeExceedForApp:(id)arg1 withFileSize:(unsigned long long)arg2;
- (_Bool)isTotalFileSizeExceed;
- (void)setupMaxTotalFileSize;
- (void)removeTempFileStatWithFileSize:(unsigned long long)arg1 appID:(id)arg2;
- (void)addTempFileStatWithPath:(id)arg1 appID:(id)arg2;
- (void)reportAllFileSizeOnOpenWeApp:(id)arg1;
- (void)reportOneFileSize:(unsigned long long)arg1 appId:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
