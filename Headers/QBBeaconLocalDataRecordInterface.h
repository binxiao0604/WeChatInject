//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBBeaconLocalDataRecordInterface : NSObject
{
    int maxTime;
    int _cloudRealDelayDB;
    int _cloudRealNumDB;
}

+ (id)sharedInstance;
@property(nonatomic) int cloudRealNumDB; // @synthesize cloudRealNumDB=_cloudRealNumDB;
@property(nonatomic) int cloudRealDelayDB; // @synthesize cloudRealDelayDB=_cloudRealDelayDB;
- (void)flushObjectsToDB;
- (void)doPersist;
- (void)notifyToPersist;
- (void)clearTimer;
- (void)initTimer;
- (void)cloudParamInit;
- (void)saveObject:(id)arg1;
- (void)setPersistListener:(id)arg1;
- (id)init;

@end

