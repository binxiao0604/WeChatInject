//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPlugin.h"

@class MemoryRecordInfo, NSObject, WCMemoryRecordManager, WCMemoryStatConfig;
@protocol OS_dispatch_queue, WCMemoryStatPluginDelegate;

@interface WCMemoryStatPlugin : MatrixPlugin
{
    WCMemoryRecordManager *m_recordManager;
    MemoryRecordInfo *m_lastRecord;
    MemoryRecordInfo *m_currRecord;
    id <WCMemoryStatPluginDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_pluginReportQueue;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pluginReportQueue; // @synthesize pluginReportQueue=_pluginReportQueue;
@property(nonatomic) __weak id <WCMemoryStatPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)reportIssue:(id)arg1;
- (void)setupPluginListener:(id)arg1;
- (void)destroy;
- (void)stop;
- (_Bool)start;
- (void)reportError:(int)arg1;
- (void)setCurrentRecordInvalid;
- (void)deleteAllRecords;
- (void)deleteRecord:(id)arg1;
- (id)recordByLaunchTime:(unsigned long long)arg1;
- (id)recordOfLastRun;
- (id)recordList;
- (void)dumpMemoryAndGenerateReportData:(id)arg1 customInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (unsigned int)getMemoryUsageOfCurrentThread;
- (void)removeTagOfCurrentThread;
- (void)addTagToCurrentThread:(id)arg1;
- (id)uploadReport:(id)arg1 withCustomInfo:(id)arg2;
- (void)deplayTryReportOOMInfo;
- (id)init;

// Remaining properties
@property(retain, nonatomic) WCMemoryStatConfig *pluginConfig; // @dynamic pluginConfig;

@end

