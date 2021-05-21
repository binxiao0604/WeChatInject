//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ComposeSendDelegate-Protocol.h"
#import "INewQQMailExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "UploadAttachmentDataDelegate-Protocol.h"
#import "UploadConversationFileDelegate-Protocol.h"

@class ComposeSendHelper, NSMutableArray, NSString, NewQQMailQueueHelper, UploadAttachmentDataHelper, UploadConversationFileHelper;

@interface NewQQMailMgr : MMUserService <INewSyncExt, MMServiceProtocol, INewQQMailExt, UploadConversationFileDelegate, ComposeSendDelegate, UploadAttachmentDataDelegate>
{
    UploadConversationFileHelper *m_uploadConversationFileHandler;
    ComposeSendHelper *m_composeSendHandler;
    UploadAttachmentDataHelper *m_uploadAttachmentDataHandler;
    NewQQMailQueueHelper *m_newQQMailQueueHandler;
    NSMutableArray *m_composeSendMailQueue;
    _Bool m_bIsComposeSending;
}

- (void).cxx_destruct;
- (void)OnUploadAttachmentData:(id)arg1 attachID:(id)arg2 uploadedDataSize:(unsigned int)arg3 err:(int)arg4;
- (void)OnComposeSendComplete:(int)arg1;
- (void)OnUploadConversationFileComplete:(id)arg1 err:(int)arg2;
- (void)checkComposeSendMailQueue;
- (void)enComposeSendMailQueue:(id)arg1 imageInfoList:(id)arg2 attachInfoList:(id)arg3;
- (void)popComposeSendMailQueue;
- (id)getComposeSendMailQueueFront;
- (void)NewComposeSend:(id)arg1 imageInfoList:(id)arg2 attachInfoList:(id)arg3;
- (void)cancelUploadAttachmentData:(id)arg1 fileName:(id)arg2;
- (void)NewUploadAttachmentData:(id)arg1 fileName:(id)arg2;
- (id)genMailContent:(id)arg1 withUploadImageAry:(id)arg2;
- (id)genUploadImageAry:(id)arg1 imageInfoList:(id)arg2;
- (id)getMimeData:(id)arg1;
- (id)getMimeBody:(id)arg1;
- (id)getMimeHead:(id)arg1;
- (id)getLinkIDKey:(id)arg1;
- (id)getContentID;
- (void)setLastBoundary:(id)arg1;
- (void)setBoundary:(id)arg1;
- (void)onNewSyncEnd;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

