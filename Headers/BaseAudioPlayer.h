//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ActionRecognitionDelegate-Protocol.h"
#import "BaseAudioPlayerNotifyExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class ActionRecognition, AudioPlayerUserData, MMTimer, NSString;

@interface BaseAudioPlayer : MMUserService <ActionRecognitionDelegate, BaseAudioPlayerNotifyExt, WCAudioSessionExt, MMServiceProtocol>
{
    struct PlayerState *mAqData;
    _Bool mIsNeedNotifyOtherAudio;
    int mLastNumber;
    float lastMeterPeak;
    int earModeRebootExpt;
    AudioPlayerUserData *mUserData;
    MMTimer *mMeterTimer;
    ActionRecognition *mActionRecogn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
@property(retain, nonatomic) ActionRecognition *mActionRecogn; // @synthesize mActionRecogn;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
@property(retain) AudioPlayerUserData *mUserData; // @synthesize mUserData;
- (void)playVoiceWithEarpieceMode;
- (void)playVoiceWithMicroPhone;
- (void)setUserData:(id)arg1;
- (_Bool)isPlaying;
- (void)forceNotifyOtherAudioPlay;
- (void)stopAndNotifyUI;
- (void)autostop;
- (void)stop;
- (void)stopButNotNotify;
- (void)EndNotifyOnMainThread;
- (void)replay;
- (void)restart;
- (void)pause;
- (void)playFromOffsetms:(unsigned int)arg1;
- (void)play;
- (_Bool)preparePlayNotNotify;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)setAutoMode;
- (void)setEarpieceMode;
- (void)setSpeakerMode;
- (void)updateStatus;
- (void)updateSetting;
- (void)updateSession;
- (_Bool)initQueue;
- (void)initSession;
- (void)unopenMonitorDetection;
- (void)openMonitorDetection;
- (void)sensorStateChange:(id)arg1;
- (void)safeDisableProximity;
- (void)disableProximity;
- (void)enableProximity;
- (void)dealloc;
- (id)init;
- (void)notifyBaseAudioPlayerStopAudio;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)ActionRecognitionProximityChange;
- (void)unregisterInter;
- (void)registerInter;
- (void)handleInterruption;
- (void)checkQueueState:(float)arg1;
- (void)TimerCheckMeter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

