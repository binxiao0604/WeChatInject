//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavLocationDB, NSString;

@interface FavLocationMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    _Bool _isRunningReverse;
    FavLocationDB *_locationDB;
    unsigned int _eventID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)requestWXGeocodeWithLocation:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (unsigned int)updateAddressByLocation:(id)arg1;
- (id)getAddressByLocation:(id)arg1;
- (void)onServiceClearData;
- (void)initData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

