//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface BTVideoAutoPlayInfo : MMObject <PBCoding>
{
    double lastPlayedTime;
    double lastPlayedTimeExpiredTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastPlayedTimeExpiredTime;
+ (void)PBArrayAdd_lastPlayedTime;
@property(nonatomic) double lastPlayedTimeExpiredTime; // @synthesize lastPlayedTimeExpiredTime;
@property(nonatomic) double lastPlayedTime; // @synthesize lastPlayedTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
