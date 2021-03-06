//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WAMediaCastingUpnpDevicesPool : NSObject
{
    NSMutableDictionary *_pool;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
- (id)allDevices;
- (void)removeAll;
- (void)removeDevicesWithUSN:(id)arg1 uuid:(id)arg2 address:(id)arg3;
- (void)addDevicesWithLocation:(id)arg1 usn:(id)arg2 uuid:(id)arg3 data:(id)arg4 address:(id)arg5;
- (id)init;

@end

