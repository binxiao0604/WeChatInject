//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray;

@interface WABeaconMgrUseInfoHandler : NSObject
{
    NSMutableArray *_usedLocationMgrList;
    MMTimer *_checkTimer;
    NSMutableArray *_rangingBeaconUUIDArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rangingBeaconUUIDArray; // @synthesize rangingBeaconUUIDArray=_rangingBeaconUUIDArray;
@property(retain, nonatomic) MMTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSMutableArray *usedLocationMgrList; // @synthesize usedLocationMgrList=_usedLocationMgrList;
- (void)checkLocationUse;
- (void)stopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)startRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)removeUseInfoWithTag:(unsigned long long)arg1;
- (void)addUseInfo:(id)arg1;
- (void)clearAll;
- (id)getUseInfoByTag:(unsigned long long)arg1;
- (void)dealloc;

@end

