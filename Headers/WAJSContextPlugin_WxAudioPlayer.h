//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "IWAJSContextPlugin_AudioPlayer-Protocol.h"
#import "WMPFAudioAPIProtocol-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, WAAppTask, WXAudioNative;
@protocol OS_dispatch_queue;

@interface WAJSContextPlugin_WxAudioPlayer : WAJSContextPluginBase <WMPFAudioAPIProtocol, IWAJSContextPlugin_AudioPlayer>
{
    _Bool _isNeedResumeWXMusic;
    _Bool _obeyMuteSwitch;
    _Bool _mixWithOthers;
    _Bool _speakerOn;
    _Bool _useWXAUDIO;
    _Bool _existPlayerPlayingOrWaiting;
    _Bool _isInInterruption;
    _Bool _isVoIPWorking;
    _Bool _isApplicationStateActive;
    _Bool _isWeappForground;
    WXAudioNative *_wxaudionative;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_playerDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeappForground; // @synthesize isWeappForground=_isWeappForground;
@property(nonatomic) _Bool isApplicationStateActive; // @synthesize isApplicationStateActive=_isApplicationStateActive;
@property(nonatomic) _Bool isVoIPWorking; // @synthesize isVoIPWorking=_isVoIPWorking;
@property(nonatomic) _Bool isInInterruption; // @synthesize isInInterruption=_isInInterruption;
@property(nonatomic) _Bool existPlayerPlayingOrWaiting; // @synthesize existPlayerPlayingOrWaiting=_existPlayerPlayingOrWaiting;
@property(nonatomic) _Bool useWXAUDIO; // @synthesize useWXAUDIO=_useWXAUDIO;
@property(nonatomic) _Bool speakerOn; // @synthesize speakerOn=_speakerOn;
@property(nonatomic) _Bool mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(readonly, nonatomic) WXAudioNative *wxaudionative; // @synthesize wxaudionative=_wxaudionative;
- (void)onVoIPStart;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)resumeMusicIfNeed:(_Bool)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)resumeAudioContext;
- (void)sendInterruptionEndEvent;
- (void)delaySendBecomeActiveEvent;
- (void)delaySendInterruptionEndEvent;
- (_Bool)checkIfExternalAudioOccupied;
- (void)sendInterruptionBeginEvent;
- (_Bool)isNativeLiving;
- (void)forcePauseAllPlayer;
- (void)activeAudioSession;
- (void)removeObserver;
- (void)addObserver;
@property(readonly, nonatomic) WAAppTask *task;
@property(readonly, nonatomic) _Bool isGameApp;
- (_Bool)isPlayingAudio;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

