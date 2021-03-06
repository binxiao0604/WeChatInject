//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPLandingVideoProgressItem : MMObject <PBCoding>
{
    NSString *videoIdentifier;
    double progress;
    double recordTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_recordTime;
+ (void)PBArrayAdd_progress;
+ (void)PBArrayAdd_videoIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double recordTime; // @synthesize recordTime;
@property(nonatomic) double progress; // @synthesize progress;
@property(copy, nonatomic) NSString *videoIdentifier; // @synthesize videoIdentifier;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

