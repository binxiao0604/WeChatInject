//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaCastingUpnpDeviceService : NSObject
{
    NSString *_SCPDURL;
    NSString *_controlURL;
    NSString *_eventSubURL;
    NSString *_serviceId;
    NSString *_serviceType;
}

+ (id)deviceServiceWithInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *eventSubURL; // @synthesize eventSubURL=_eventSubURL;
@property(copy, nonatomic) NSString *controlURL; // @synthesize controlURL=_controlURL;
@property(copy, nonatomic) NSString *SCPDURL; // @synthesize SCPDURL=_SCPDURL;

@end

