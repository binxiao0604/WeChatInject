//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class NSString, OrderedDictionary, XMailUploadAttachmentTask;

@interface XMailUploadAttachmentLogic : NSObject <ICdnComMgrExt>
{
    CDUnknownBlockType _uploadResultBlock;
    XMailUploadAttachmentTask *_curTask;
    OrderedDictionary *_taskList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) XMailUploadAttachmentTask *curTask; // @synthesize curTask=_curTask;
@property(copy, nonatomic) CDUnknownBlockType uploadResultBlock; // @synthesize uploadResultBlock=_uploadResultBlock;
- (void)OnCdnUpload:(id)arg1;
- (void)endCurTask;
- (void)startUploadCurTask;
- (void)checkQueue;
- (_Bool)addUploadAttachmentTaskWithFileName:(id)arg1 filePath:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

