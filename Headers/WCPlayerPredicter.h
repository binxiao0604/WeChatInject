//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableArray, NSString, WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter;
@protocol WCPlayerMediaExt, WCPlayerPredicterDelegate;

@interface WCPlayerPredicter : NSObject
{
    _Bool _bDataSourceSwitching;
    unsigned int _startSwitchTime;
    unsigned int _lastSwitchTime;
    id <WCPlayerPredicterDelegate> _delegate;
    WCPlayerReporter *_reporter;
    MMTimer *_timer;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    NSObject<WCPlayerMediaExt> *_mediaWrap;
    NSMutableArray *_arrDataSource;
    NSString *_allBitrateInKB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *allBitrateInKB; // @synthesize allBitrateInKB=_allBitrateInKB;
@property(retain, nonatomic) NSMutableArray *arrDataSource; // @synthesize arrDataSource=_arrDataSource;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(nonatomic) _Bool bDataSourceSwitching; // @synthesize bDataSourceSwitching=_bDataSourceSwitching;
@property(nonatomic) unsigned int lastSwitchTime; // @synthesize lastSwitchTime=_lastSwitchTime;
@property(nonatomic) unsigned int startSwitchTime; // @synthesize startSwitchTime=_startSwitchTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <WCPlayerPredicterDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getCurrentSpeed;
- (void)onSwitchSuccessWithMediaWrap:(id)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (id)getHigherWithSpeed:(int)arg1;
- (id)getLowerWithSpeed:(int)arg1;
- (unsigned int)getCurrentLagCount;
- (void)switchDataSourceWithMediaWrap:(id)arg1 switchType:(long long)arg2;
- (void)checkIfSwitchToHigherWithSpeed:(int)arg1 bitrate:(float)arg2;
- (void)checkIfSwitchToLowerWithSpeed:(int)arg1 bitrate:(float)arg2;
- (void)onTimerCallback;
- (void)stopTimer;
- (void)startTimer;
- (id)initWithPlayArgs:(id)arg1 playbackInfo:(id)arg2;

@end

