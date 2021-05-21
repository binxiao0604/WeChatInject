//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMImageDetectUploaderDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMImageDetectUploader, NSMutableSet, NSString;

@interface MMImageDetectOCRService : MMUserService <PBMessageObserverDelegate, MMImageDetectUploaderDelegate, MMServiceProtocol>
{
    MMImageDetectUploader *_uploader;
    NSMutableSet *_cancelSessionIDSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *cancelSessionIDSet; // @synthesize cancelSessionIDSet=_cancelSessionIDSet;
@property(retain, nonatomic) MMImageDetectUploader *uploader; // @synthesize uploader=_uploader;
- (void)notifyOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4;
- (void)notifyUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleImageDetectOCR:(id)arg1;
- (void)startImageDetectOCR:(id)arg1 detectMediaInfo:(id)arg2;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)cancelImageUploadAndDetect:(unsigned long long)arg1;
- (void)startImageUploadAndDetect:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
