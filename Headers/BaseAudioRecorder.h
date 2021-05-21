//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class AudioRecorderUserData, MMTimer, NSLock, NSRecursiveLock, NSString;

@interface BaseAudioRecorder : MMUserService <MMServiceProtocol>
{
    struct RecorderState *mAqData;
    _Bool mIsNeedNotifyOtherAudio;
    NSRecursiveLock *_dataLock;
    _Bool needStopInBackground;
    _Bool _bHadTryFixRecord;
    _Bool _shouldMixWithSpeaker;
    unsigned int _receivedBufferCount;
    int _tryFixRecordFlag;
    unsigned int _availableChannels;
    AudioRecorderUserData *mUserData;
    MMTimer *mMeterTimer;
    NSLock *m_lock;
    struct AudioChannelLayout _availableChannelLayout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct AudioChannelLayout availableChannelLayout; // @synthesize availableChannelLayout=_availableChannelLayout;
@property(readonly, nonatomic) unsigned int availableChannels; // @synthesize availableChannels=_availableChannels;
@property(nonatomic) _Bool shouldMixWithSpeaker; // @synthesize shouldMixWithSpeaker=_shouldMixWithSpeaker;
@property(nonatomic) int tryFixRecordFlag; // @synthesize tryFixRecordFlag=_tryFixRecordFlag;
@property(nonatomic) _Bool bHadTryFixRecord; // @synthesize bHadTryFixRecord=_bHadTryFixRecord;
@property(nonatomic) unsigned int receivedBufferCount; // @synthesize receivedBufferCount=_receivedBufferCount;
@property(nonatomic) _Bool needStopInBackground; // @synthesize needStopInBackground;
@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock;
@property(readonly, retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
@property(nonatomic) _Bool needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
@property(retain) AudioRecorderUserData *mUserData; // @synthesize mUserData;
- (void)TimerCheckMeter;
- (void)RecordPrepareDenied;
- (void)setBeginSendData;
- (void)setForTranslate;
- (void)setForceDelete;
- (void)setUserData:(id)arg1;
- (long long)RecordingTime;
- (unsigned int)RecordStatus;
- (_Bool)isRecording;
- (void)autostop;
- (void)stopInBackground;
- (void)stop;
- (void)stopButNotNotify;
- (_Bool)prepareRecordButNotNotify;
- (_Bool)prepareRecord;
- (void)setDelegate:(id)arg1;
- (void)createFile:(id)arg1;
- (void)EndNotifyOnMainThread;
- (_Bool)ISRecordAutoStop;
- (void)record;
- (int)real_record;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (_Bool)isArgumentError:(int)arg1;
- (void)reportAudioQueueRestartError:(int)arg1;
- (void)reportAudioQueueRestartOk;
- (void)reportAudioQueueRestartFailed;
- (void)reportAudioQueueStartError:(int)arg1;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)setStopping;
- (void)setStartRecordTime;
- (void)updateStatus;
- (void)updateSetting;
- (_Bool)initQueue;
- (void)initSession;
- (void)dealloc;
- (void)updateSession;
- (id)init;
- (void)unregisterInter;
- (void)registerInter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

