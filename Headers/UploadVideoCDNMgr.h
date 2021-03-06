//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MsgDataDownloadDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CdnTaskInfo, MsgDataDownloadLogic, NSMutableArray, NSString;
@protocol UploadVideoCDNMgrDelegate;

@interface UploadVideoCDNMgr : NSObject <MsgDataDownloadDelegate, ICdnComMgrExt, PBMessageObserverDelegate>
{
    unsigned int _curUploadEventID;
    id <UploadVideoCDNMgrDelegate> _delegate;
    MsgDataDownloadLogic *_msgDownloadLogic;
    NSMutableArray *_arrUploadTask;
    CdnTaskInfo *_curTaskInfo;
}

+ (unsigned int)CreateUploadEvent:(id)arg1;
+ (id)createUploadVideoWithMsg:(id)arg1 hitMd5:(_Bool)arg2 newMd5:(id)arg3 crc32:(unsigned int)arg4 useSafeCdn:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int curUploadEventID; // @synthesize curUploadEventID=_curUploadEventID;
@property(retain, nonatomic) CdnTaskInfo *curTaskInfo; // @synthesize curTaskInfo=_curTaskInfo;
@property(retain, nonatomic) NSMutableArray *arrUploadTask; // @synthesize arrUploadTask=_arrUploadTask;
@property(retain, nonatomic) MsgDataDownloadLogic *msgDownloadLogic; // @synthesize msgDownloadLogic=_msgDownloadLogic;
@property(nonatomic) __weak id <UploadVideoCDNMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)convertHevcVideo;
- (void)OnCompressVideoFinished:(id)arg1 success:(_Bool)arg2;
- (void)compressCurInfo;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadAnyFail:(id)arg1;
- (void)startDownloadVideo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)CreateCurUploadEvent:(_Bool)arg1 newMd5:(id)arg2 crc32:(unsigned int)arg3 useSafeCdn:(_Bool)arg4;
- (void)Stop;
- (void)StopUploadByChatName:(id)arg1;
- (void)StopUpload:(id)arg1;
- (void)StopCurUpload;
- (void)StartUpload:(id)arg1;
- (void)startCdnUpload;
- (void)CheckQueue;
- (_Bool)IsCurTaskByID:(unsigned int)arg1 From:(id)arg2 To:(id)arg3;
- (void)DelTaskInUploadQueue:(id)arg1;
- (_Bool)IsMsgInUploadQueue:(id)arg1;
- (void)UploadFail:(int)arg1 canRetry:(_Bool)arg2;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

