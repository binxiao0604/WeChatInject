//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVPlayerItem, AVPlayerItemVideoOutput, TPPlayerSlice;

@interface TPAVQueuePlayerSlice : NSObject
{
    _Bool _assetLoaded;
    TPPlayerSlice *_slice;
    AVAsset *_asset;
    AVPlayerItem *_playerItem;
    long long _correctedSliceDuration;
    AVPlayerItemVideoOutput *_snapshotOutput;
    AVPlayerItemVideoOutput *_VROutput;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVPlayerItemVideoOutput *VROutput; // @synthesize VROutput=_VROutput;
@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(nonatomic) _Bool assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property(nonatomic) long long correctedSliceDuration; // @synthesize correctedSliceDuration=_correctedSliceDuration;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) TPPlayerSlice *slice; // @synthesize slice=_slice;

@end

