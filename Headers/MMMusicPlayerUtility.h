//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface MMMusicPlayerUtility : MMObject
{
}

+ (_Bool)shouldShowLyrics:(id)arg1;
+ (_Bool)isValidLocalVideoForPost:(id)arg1;
+ (void)setStatusOpenMusicInfoData:(id)arg1;
+ (void)fillMusicShareItemSDKData:(id)arg1 originShareItem:(id)arg2;
+ (void)fillMusicShareItemWithSongInfo:(id)arg1 songInfo:(id)arg2;
+ (id)pathToMusicMVData;
+ (id)loadCoverImageWithUrl:(id)arg1 observerIfLoadAsync:(id)arg2;
+ (struct CGSize)getVideoSizeByAvAsset:(id)arg1;
+ (id)getMusicMVCoverImageData:(id)arg1 mvModel:(id)arg2;
+ (id)getMusicAlbumImageData:(id)arg1 mvModel:(id)arg2;
+ (id)getMusicIconFromSource:(id)arg1 size:(struct CGSize)arg2;
+ (id)getMvCoverUrlWithMvModel:(id)arg1;
+ (void)getFinderDataItemWithObjectId:(unsigned long long)arg1 nonceId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getFinderDataItemWithMVModel:(id)arg1 ignoreLocalModel:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getFinderDataItemWithTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)genTmpThumbImageWithLocalVideoPath:(id)arg1 clipOffsetMs:(unsigned long long)arg2;
+ (id)compressedThumbImage:(id)arg1;
+ (id)genTmpThumbWithLocalVideoPath:(id)arg1 clipOffsetMs:(unsigned long long)arg2;
+ (void)getThumbWithPostingTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

