//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface GameCenterUserInfo : MMObject <PBCoding>
{
    unsigned int level;
    unsigned int points;
    NSString *detailURL;
}

+ (void)initialize;
+ (void)PBArrayAdd_detailURL;
+ (void)PBArrayAdd_points;
+ (void)PBArrayAdd_level;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailURL; // @synthesize detailURL;
@property(nonatomic) unsigned int points; // @synthesize points;
@property(nonatomic) unsigned int level; // @synthesize level;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

