//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "FaceRecogPrivateVerifyHandlerDelegate-Protocol.h"

@class FaceRecogPrivateVerifyHandler, NSString;

@interface WAJSEventHandler_startFacialRecognitionVerifyAndUploadVideo : WAJSEventHandler_BaseEvent <FaceRecogPrivateVerifyHandlerDelegate>
{
    FaceRecogPrivateVerifyHandler *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPrivateVerifyHandler *handler; // @synthesize handler=_handler;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

