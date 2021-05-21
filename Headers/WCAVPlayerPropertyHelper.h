//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCAVPlayerPropertyHelper : NSObject
{
}

+ (float)asset:(id)arg1 syncGetDurationWithTimeout:(float)arg2;
+ (struct CGSize)getVideoSizeWithPath:(id)arg1;
+ (double)syncGetDurationWithPath:(id)arg1;
+ (double)syncAVGetDurationWithPath:(id)arg1;
+ (id)getVideoMetaWithPath:(id)arg1;
+ (id)getAVVideoMetaWithPath:(id)arg1;
+ (unsigned int)getVideoCodecWithPath:(id)arg1;
+ (struct CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2;
+ (struct CGImage *)getCurSnapshotWithPlaybackInfo:(id)arg1 Asset:(id)arg2;
+ (id)getCurSnapshotWithPlaybackInfo:(id)arg1 VideoOutput:(id)arg2 Asset:(id)arg3;
+ (id)getPlayerObserveChangeWithItem:(id)arg1;
+ (CDStruct_e83c9415)getVideoBufferTimeRange:(id)arg1;
+ (double)getVideoDurationWithPlayerItem:(id)arg1;
+ (struct CGAffineTransform)getVideoTransformWithAsset:(id)arg1;
+ (float)getAudioBitRateWithAsset:(id)arg1;
+ (float)getVideoBitRateWithAsset:(id)arg1;

@end

