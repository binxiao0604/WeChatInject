//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "FaceRecogBaseHandlerDelegate-Protocol.h"
#import "IRsaCertMgrExt-Protocol.h"

@class CdnUploadTaskInfo, FaceRecogBaseHandler, NSString;

@interface FaceRecogRsaVerifyHandler : MMObject <IRsaCertMgrExt, FaceRecogBaseHandlerDelegate>
{
    int _idcRedirectCount;
    FaceRecogBaseHandler *_faceHandler;
    NSString *_userName;
    CdnUploadTaskInfo *_uploadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int idcRedirectCount; // @synthesize idcRedirectCount=_idcRedirectCount;
@property(retain, nonatomic) FaceRecogBaseHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
- (int)genErrCodeByResponse:(id)arg1;
- (void)handleRsaVerifyFace:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)startVerifyFaceWithUsername:(id)arg1;
- (void)startVerifyFaceWithTicket:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
