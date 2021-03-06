//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPreloadVideoRecord : NSObject <PBCoding>
{
    NSString *tid;
    NSString *mid;
    unsigned int accessTime;
    _Bool bNonAutoClean;
    _Bool bPreloadCompleted;
    unsigned int hasPreloadSize;
    unsigned int configPreloadPercent;
    unsigned int totalSize;
    NSString *url;
}

+ (void)initialize;
+ (void)PBArrayAdd_bPreloadCompleted;
+ (void)PBArrayAdd_totalSize;
+ (void)PBArrayAdd_bNonAutoClean;
+ (void)PBArrayAdd_configPreloadPercent;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_hasPreloadSize;
+ (void)PBArrayAdd_accessTime;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) _Bool bPreloadCompleted; // @synthesize bPreloadCompleted;
@property(nonatomic) unsigned int totalSize; // @synthesize totalSize;
@property(nonatomic) _Bool bNonAutoClean; // @synthesize bNonAutoClean;
@property(nonatomic) unsigned int configPreloadPercent; // @synthesize configPreloadPercent;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) unsigned int hasPreloadSize; // @synthesize hasPreloadSize;
@property(nonatomic) unsigned int accessTime; // @synthesize accessTime;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (id)genTempPath;
- (id)pathForPreloadVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

