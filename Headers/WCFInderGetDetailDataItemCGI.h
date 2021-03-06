//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFInderGetDetailDataItemCGI : WCFinderBaseCgi
{
    NSString *_objectId;
    NSString *_encryptedID;
    NSString *_finderUsername;
    NSString *_nonceID;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    unsigned long long _scene;
    unsigned long long _pullScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pullScene; // @synthesize pullScene=_pullScene;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *encryptedID; // @synthesize encryptedID=_encryptedID;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)customSuccessfulRetCodeArray;
- (void)createRequest;
- (id)initWithEncryptedID:(id)arg1 nonceID:(id)arg2 finderUsername:(id)arg3 scene:(unsigned long long)arg4 pullScene:(unsigned long long)arg5 config:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
- (id)initWithObjectId:(id)arg1 nonceID:(id)arg2 finderUsername:(id)arg3 scene:(unsigned long long)arg4 pullScene:(unsigned long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

