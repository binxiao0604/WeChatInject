//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAudioRecorder.h"

@class NSRecursiveLock;

@interface AMRAudioRecorder : BaseAudioRecorder
{
    NSRecursiveLock *mPrepareSentLock;
    _Bool mIsPrepareSent;
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)stop;
- (void)stopButNotNotify;
- (_Bool)prepareRecordButNotNotify;
- (void)record;
- (_Bool)prepareSend;
- (void)createFile:(id)arg1;
- (void)createAMRFile:(id)arg1;
- (_Bool)prepareRecord;
- (void)setDelegate:(id)arg1;
- (void)MainThreadStopRecord;
- (id)init;
- (void)prepareBuffers;
- (void)setDataFormat;

@end

