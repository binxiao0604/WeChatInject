//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WALocationGetterDelegate-Protocol.h"

@class NSString, WALocationGetter;

@interface WALocationReportMgr : MMUserService <WALocationGetterDelegate, MMServiceProtocol>
{
    WALocationGetter *m_locationGetter;
}

- (void).cxx_destruct;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onGetLocationSuccess:(id)arg1;
- (void)uploadLocation;
- (void)uploadUserLocationIfNeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

