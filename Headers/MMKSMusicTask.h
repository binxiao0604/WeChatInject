//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKSMusicTask : NSObject
{
    _Bool _isLocalFile;
    _Bool _isQQMusic;
    _Bool _isHLS;
    NSString *_url;
    NSString *_cacheUrl;
    NSString *_musicId;
    double _startTime;
    double _playbackRate;
}

- (void).cxx_destruct;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool isHLS; // @synthesize isHLS=_isHLS;
@property(nonatomic) _Bool isQQMusic; // @synthesize isQQMusic=_isQQMusic;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (id)description;
- (id)init;

@end

