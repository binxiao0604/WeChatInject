//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderVideoQualityScoreModel : NSObject
{
    _Bool _hasStickers;
    double _videoScore;
    double _videoCoverScore;
    double _videoAudioScore;
    double _thumbScore;
    double _hdimgScore;
}

@property(nonatomic) _Bool hasStickers; // @synthesize hasStickers=_hasStickers;
@property(nonatomic) double hdimgScore; // @synthesize hdimgScore=_hdimgScore;
@property(nonatomic) double thumbScore; // @synthesize thumbScore=_thumbScore;
@property(nonatomic) double videoAudioScore; // @synthesize videoAudioScore=_videoAudioScore;
@property(nonatomic) double videoCoverScore; // @synthesize videoCoverScore=_videoCoverScore;
@property(nonatomic) double videoScore; // @synthesize videoScore=_videoScore;

@end

