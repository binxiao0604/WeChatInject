//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SessionStorageSetting : NSObject <PBCoding>
{
    _Bool isHasRecord;
    unsigned int sessionVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_sessionVersion;
+ (void)PBArrayAdd_isHasRecord;
@property(nonatomic) unsigned int sessionVersion; // @synthesize sessionVersion;
@property(nonatomic) _Bool isHasRecord; // @synthesize isHasRecord;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

