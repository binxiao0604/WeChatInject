//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class MegaVideoClientStatus, NSData, NSString, WCMegaVideoLocation;

@interface WCMegaVideoGetRelatedListCGI : WCFinderBaseCgi
{
    NSData *_lastBuff;
    NSString *_videoId;
    NSString *_videoNonceId;
    WCMegaVideoLocation *_location;
    long long _scene;
    MegaVideoClientStatus *_clientStatus;
    NSString *_fromUsername;
    NSString *_toUsername;
    NSData *_objectSessionInfo;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *objectSessionInfo; // @synthesize objectSessionInfo=_objectSessionInfo;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(retain, nonatomic) MegaVideoClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCMegaVideoLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *videoNonceId; // @synthesize videoNonceId=_videoNonceId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 location:(id)arg4 scene:(long long)arg5 clientStatus:(id)arg6 fromUsername:(id)arg7 toUsername:(id)arg8 objectSectionInfo:(id)arg9 successful:(CDUnknownBlockType)arg10 failure:(CDUnknownBlockType)arg11;
- (id)initWithLastBuff:(id)arg1 videoId:(id)arg2 videoNonceId:(id)arg3 scene:(long long)arg4 fromUsername:(id)arg5 toUsername:(id)arg6 successful:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;

@end

