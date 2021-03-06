//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "QLocationManagerAPIProcotol-Protocol.h"

@class NSString;
@protocol QLocationManagerAPIProcotol, QLocationManagerDelegate;

@interface QLocationManager : NSObject <CLLocationManagerDelegate, QLocationManagerAPIProcotol>
{
    id <QLocationManagerDelegate> _delegate;
    id <QLocationManagerAPIProcotol> _manager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <QLocationManagerAPIProcotol> manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <QLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) long long accuracyAuthorization;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) double headingFilter;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)requestWhenInUseAuthorization;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

