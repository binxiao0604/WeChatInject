//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAVAudioProcessingNode-Protocol.h"

@class NSString;

@interface TAVVolumeProcessingNode : NSObject <TAVAudioProcessingNode>
{
    float _startVolume;
    float _endVolume;
    CDUnknownBlockType _timingFunction;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float endVolume; // @synthesize endVolume=_endVolume;
@property(nonatomic) float startVolume; // @synthesize startVolume=_startVolume;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)processTimeRange:(CDStruct_e83c9415)arg1 bufferListInOut:(struct AudioBufferList *)arg2;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 startVolume:(float)arg2 endVolume:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

