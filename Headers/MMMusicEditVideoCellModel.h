//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSMutableDictionary, NSString, UIImage, WCFinderMediaInfo;

@interface MMMusicEditVideoCellModel : NSObject
{
    NSString *_videoPath;
    UIImage *_localThumbImage;
    AVAsset *_slowMotionAvAsset;
    WCFinderMediaInfo *_mediaInfo;
    double _videoDuration;
    double _videoWidth;
    double _videoHeight;
    double _musicStartTime;
    double _musicEndTime;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) double musicEndTime; // @synthesize musicEndTime=_musicEndTime;
@property(nonatomic) double musicStartTime; // @synthesize musicStartTime=_musicStartTime;
@property(nonatomic) double videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) double videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) AVAsset *slowMotionAvAsset; // @synthesize slowMotionAvAsset=_slowMotionAvAsset;
@property(retain, nonatomic) UIImage *localThumbImage; // @synthesize localThumbImage=_localThumbImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;

@end

