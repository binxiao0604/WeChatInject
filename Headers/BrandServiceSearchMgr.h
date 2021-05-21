//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "LocationRetrieveDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSString;

@interface BrandServiceSearchMgr : MMUserService <LocationRetrieveDelegate, PBMessageObserverDelegate, MMServiceProtocol>
{
    LocationRetriever *_locationRetriver;
    CLLocation *_location;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) LocationRetriever *locationRetriver; // @synthesize locationRetriver=_locationRetriver;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendDetailPageDataQuickRequest:(unsigned long long)arg1 Keyword:(id)arg2;
- (unsigned int)sendDetailPageDataRequest:(unsigned long long)arg1 RequestSource:(unsigned int)arg2 Keyword:(id)arg3 Offset:(unsigned int)arg4 SearchId:(id)arg5;
- (void)stopRetriveLocation;
- (void)startRetriveLocation;
- (void)clearLocationInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
