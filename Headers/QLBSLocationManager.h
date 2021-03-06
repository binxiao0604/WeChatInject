//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLocationManager.h"

#import "TencentLBSLocationManagerDelegate-Protocol.h"

@class NSString, TencentLBSLocationManager;

@interface QLBSLocationManager : QLocationManager <TencentLBSLocationManagerDelegate>
{
    TencentLBSLocationManager *_manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TencentLBSLocationManager *manager; // @synthesize manager=_manager;
- (void)tencentLBSLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)requestWhenInUseAuthorization;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

