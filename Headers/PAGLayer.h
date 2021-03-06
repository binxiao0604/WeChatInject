//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAGLayer : NSObject
{
    id _impl;
}

- (void)dealloc;
- (void)setExcludedFromTimeline:(_Bool)arg1;
- (_Bool)excludedFromTimeline;
- (void)removeAllFilters;
- (void)addFilter:(id)arg1;
- (long long)numFilters;
- (struct CGRect)getBounds;
- (id)trackMatteLayer;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (void)setCurrentTime:(long long)arg1;
- (long long)currentTime;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (float)frameRate;
- (long long)duration;
- (long long)globalToLocalTime:(long long)arg1;
- (long long)localTimeToGlobal:(long long)arg1;
- (id)markers;
- (id)parent;
- (long long)editableIndex;
- (void)setVisible:(_Bool)arg1;
- (_Bool)visible;
- (struct CGAffineTransform)getTotalMatrix;
- (void)resetMatrix;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (id)impl;
- (id)layerName;
- (long long)layerType;
- (id)initWithImpl:(id)arg1;

@end

