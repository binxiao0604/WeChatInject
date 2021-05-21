//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class FinderClientStatus, NSData, NSString;

@interface WCFinderPOIStreamRequestCGI : WCFinderBaseCgi
{
    NSData *_lastBuffer;
    double _longtitude;
    double _latitude;
    FinderClientStatus *_status;
    NSString *_poi;
    unsigned long long _objectID;
    long long _fromType;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *poi; // @synthesize poi=_poi;
@property(retain, nonatomic) FinderClientStatus *status; // @synthesize status=_status;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longtitude; // @synthesize longtitude=_longtitude;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initLastBuffer:(id)arg1 longtitude:(double)arg2 latitude:(double)arg3 status:(id)arg4 poi:(id)arg5 objectID:(unsigned long long)arg6 fromType:(long long)arg7 successful:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;

@end
