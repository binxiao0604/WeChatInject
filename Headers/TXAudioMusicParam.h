//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TXAudioMusicParam : NSObject
{
    _Bool _publish;
    _Bool _isShortFile;
    int _ID;
    NSString *_path;
    long long _loopCount;
    long long _startTimeMS;
    long long _endTimeMS;
}

- (void).cxx_destruct;
@property(nonatomic) long long endTimeMS; // @synthesize endTimeMS=_endTimeMS;
@property(nonatomic) long long startTimeMS; // @synthesize startTimeMS=_startTimeMS;
@property(nonatomic) _Bool isShortFile; // @synthesize isShortFile=_isShortFile;
@property(nonatomic) _Bool publish; // @synthesize publish=_publish;
@property(nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int ID; // @synthesize ID=_ID;
- (id)description;
- (id)initWithBGMID:(int)arg1 path:(id)arg2 loopCount:(long long)arg3 publish:(_Bool)arg4 enableCache:(_Bool)arg5;
- (id)initWithBGMID:(int)arg1 path:(id)arg2;
- (id)init;

@end

