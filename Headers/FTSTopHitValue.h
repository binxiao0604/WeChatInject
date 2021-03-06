//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FTSTopHitValue : NSObject <PBCoding>
{
    unsigned int clickScore;
    unsigned int timestamp;
    NSString *key;
    NSMutableDictionary *dicGroupMember;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicGroupMember;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_clickScore;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMember; // @synthesize dicGroupMember;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned int clickScore; // @synthesize clickScore;
@property(retain, nonatomic) NSString *key; // @synthesize key;
- (unsigned int)getABTestThredshold;
- (unsigned int)getABTestValidDays;
- (_Bool)isDisplayAvailable:(int)arg1;
- (_Bool)isDisplayAvailable;
- (_Bool)isOutOfDate;
- (long long)compareTopHitValueAscending:(id)arg1;
- (void)minusScore:(int)arg1;
- (void)minusScore;
- (void)addScore:(int)arg1;
- (void)addScore;
- (_Bool)isValid;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

