//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "WCTaskUploaderDelegate-Protocol.h"
#import "WCUploadPendingExt-Protocol.h"

@class FIFOFileQueue, NSDate, NSMutableArray, NSString, WCTaskUploader;
@protocol WCUploadMgrDelegate;

@interface WCUploadMgr : MMObject <WCTaskUploaderDelegate, INetworkStatusMgrExt, ICdnComMgrExt, WCUploadPendingExt>
{
    FIFOFileQueue *m_taskQueue;
    NSMutableArray *m_failedQueue;
    NSMutableArray *m_succeedItems;
    id <WCUploadMgrDelegate> m_delegate;
    _Bool m_taskRunning;
    WCTaskUploader *m_taskUploader;
    NSDate *m_dateLastNotifySentFail;
    FIFOFileQueue *_pendingQueue;
}

+ (id)createPendingExtensionKeyWithTaskId:(id)arg1 businessType:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FIFOFileQueue *pendingQueue; // @synthesize pendingQueue=_pendingQueue;
@property(nonatomic) __weak id <WCUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)checkPendingTaskOverTime;
- (id)checkIsNeedDeletePendingTask:(id)arg1;
- (void)onPendingTaskUpdatedForFail:(id)arg1 forBusiness:(int)arg2 removedFromPending:(_Bool)arg3;
- (void)deleteFailedPendingTask:(id)arg1;
- (void)onPendingTaskUploaded:(id)arg1 forBusiness:(int)arg2 prepareUploadTask:(id)arg3;
- (id)getPendingTask:(id)arg1 forBusiness:(int)arg2;
- (id)deletePendingTaskForDataItem:(id)arg1;
- (id)removePendingTaskForTaskKey:(id)arg1 forBusiness:(int)arg2;
- (void)addPendingTask:(id)arg1 pendingTaskKey:(id)arg2 forBusiness:(int)arg3;
- (void)uploadPendingTask:(id)arg1;
- (id)getInPendingQueue;
- (void)registerPendingExtension;
- (void)initPendingQueue;
- (void)OnCdnInit;
- (void)onNetworkStatusChange:(int)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)restartAllFailUploadFromLocalNotification;
- (void)onUploadFailNotify:(id)arg1;
- (void)onUploadFinished:(id)arg1;
- (void)onMediaUploadFinished:(id)arg1 task:(id)arg2;
- (void)saveCurrentTask;
- (void)notifyUploadFailStatusChanged:(id)arg1;
- (void)notifyUploadRestart:(id)arg1;
- (void)notifyUploadFailed:(id)arg1;
- (void)notifyUploadFinished:(id)arg1;
- (void)addUploadTask:(id)arg1;
- (void)retryStartTask;
- (void)deleteUploadTaskWithDataIem:(id)arg1;
- (void)restartUploadTaskWithDataIem:(id)arg1;
- (void)TryStartTask;
- (void)setTaskArrFail:(id)arg1;
- (void)setTaskFail:(id)arg1;
- (_Bool)cleanFailDataItemForSpam:(id)arg1;
- (void)deleteHomepageSucceedUploads:(id)arg1;
- (void)deleteTimelineSucceedUploads:(id)arg1;
- (void)doDeleteSucceedUploads:(id)arg1 from:(id)arg2;
- (id)getHomepageSucceedUploads;
- (id)getTimelineSucceedUploads;
- (void)addSucceedUpload:(id)arg1;
- (id)getFailedUploads;
- (id)getInQueueUploads;
- (void)cleanUpForTask:(id)arg1;
- (void)setClientIDForMedia:(id)arg1;
- (_Bool)saveSucceedItems;
- (_Bool)loadSucceedItems;
- (_Bool)saveFailedQueue;
- (_Bool)loadFailedQueue;
@property(readonly, copy) NSString *debugDescription;
- (unsigned long long)onServiceCleanCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

