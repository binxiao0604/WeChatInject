//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WCMegaVideoLocation : NSObject <WCTColumnCoding, PBCoding>
{
    double longitude;
    double latitude;
    NSString *city;
    NSString *poiName;
    NSString *poiAddress;
    NSString *poiClassifyId;
    unsigned long long poiClassifyType;
    NSString *province;
    NSString *region;
    NSString *country;
}

+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_country;
+ (void)PBArrayAdd_region;
+ (void)PBArrayAdd_province;
+ (void)PBArrayAdd_poiClassifyType;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiAddress;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_city;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *country; // @synthesize country;
@property(copy, nonatomic) NSString *region; // @synthesize region;
@property(copy, nonatomic) NSString *province; // @synthesize province;
@property(nonatomic) unsigned long long poiClassifyType; // @synthesize poiClassifyType;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId;
@property(copy, nonatomic) NSString *poiAddress; // @synthesize poiAddress;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName;
@property(copy, nonatomic) NSString *city; // @synthesize city;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(readonly, copy) NSString *description;
- (id)initWithMegaVideoLocation:(id)arg1;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

