//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TAVTimeEffect : NSObject <NSCopying>
{
    _Bool _freeze;
    _Bool _reverse;
    long long _loopCount;
    CDStruct_1b6d18a9 _scaledDuration;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) _Bool freeze; // @synthesize freeze=_freeze;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) CDStruct_1b6d18a9 scaledDuration; // @synthesize scaledDuration=_scaledDuration;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (CDStruct_1b6d18a9)scaleDurationWithSameSpeedForTargetTimeDuration:(CDStruct_1b6d18a9)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

