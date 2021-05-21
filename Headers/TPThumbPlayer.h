//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPPlayerBase-Protocol.h"
#import "TPThumbPlayerAudioFrameCallback-Protocol.h"
#import "TPThumbPlayerMessageCallback-Protocol.h"
#import "TPThumbPlayerVideoFrameCallback-Protocol.h"

@class NSString, TPPlayerQueue, TPThumbPlayerWrapper, UIView;
@protocol ITPPlayerBaseDelegate;

@interface TPThumbPlayer : NSObject <TPThumbPlayerMessageCallback, TPThumbPlayerVideoFrameCallback, TPThumbPlayerAudioFrameCallback, ITPPlayerBase>
{
    struct TPPlayerInitConfig _initConfig;
    _Bool _outputMute;
    _Bool _externalPlaybackActive;
    _Bool _allowsExternalPlayback;
    _Bool _usesExternalPlaybackWhileExternalScreenIsActive;
    _Bool _enableResourceLoader;
    _Bool _pictureInPicturePossible;
    _Bool _pictureInPictureActive;
    _Bool _pictureInPictureSupported;
    _Bool _enableSnapshot;
    id <ITPPlayerBaseDelegate> _delegate;
    UIView *_playerView;
    double _audioGainRatio;
    double _playSpeedRatio;
    long long _durationMs;
    long long _currentPositionMs;
    double _bufferPercent;
    unsigned long long _videoHeight;
    unsigned long long _videoWidth;
    TPPlayerQueue *_playerQueue;
    long long _currentClipIndex;
    unsigned long long _videoGravity;
    double _maxPlaySpeedRatio;
    unsigned long long _externalPlaybackVideoGravity;
    long long _playerId;
    TPThumbPlayerWrapper *_thumbPlayerWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TPThumbPlayerWrapper *thumbPlayerWrapper; // @synthesize thumbPlayerWrapper=_thumbPlayerWrapper;
@property(nonatomic) _Bool enableSnapshot; // @synthesize enableSnapshot=_enableSnapshot;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity; // @synthesize externalPlaybackVideoGravity=_externalPlaybackVideoGravity;
@property(retain, nonatomic) TPPlayerQueue *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(readonly, nonatomic) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(readonly, nonatomic) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible; // @synthesize pictureInPicturePossible=_pictureInPicturePossible;
@property(nonatomic) _Bool enableResourceLoader; // @synthesize enableResourceLoader=_enableResourceLoader;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive; // @synthesize usesExternalPlaybackWhileExternalScreenIsActive=_usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <ITPPlayerBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSnapshotUsingCVPixelBufferFmt;
- (id)getSnapshotUsingRGB24Fmt;
- (long long)setPlayerGlobalStrategyValue:(id)arg1;
- (long long)setPlayerOptionalValue:(id)arg1;
- (long long)setFixedParamBeforePrepare;
- (long long)setQueueStringInitConfigValue:(id)arg1 forKey:(int)arg2;
- (long long)setQueueIntInitConfigValue:(id)arg1 forKey:(int)arg2;
- (long long)setBoolInitConfigValue:(_Bool)arg1 forKey:(int)arg2;
- (long long)setVideoDecoderStrategeIfNeeded:(id)arg1;
- (long long)setLongInitConfigValue:(long long)arg1 forKey:(int)arg2;
- (long long)setInitConfigValue:(id)arg1;
- (void)handleOnPlayer:(id)arg1 info:(unsigned long long)arg2 extra1:(long long)arg3 extra2:(long long)arg4 extraObject:(id)arg5;
- (void)handleOnVideoSizeChanged:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)handleOnSeekComplete:(id)arg1;
- (void)handleOnError:(long long)arg1 errorCode:(long long)arg2;
- (void)handleOnComplete:(id)arg1;
- (void)handleOnprepared:(id)arg1;
- (void)onTPAudioFrame:(id)arg1 frame:(struct TPFrame *)arg2 flags:(int)arg3;
- (void)onTPVideoFrame:(id)arg1 frame:(struct TPFrame *)arg2 trackID:(int)arg3 flags:(int)arg4;
- (void)onError:(id)arg1 errorType:(int)arg2 errorCode:(int)arg3;
- (void)onInfoObject:(id)arg1 infoType:(int)arg2 objectParam:(void *)arg3;
- (void)handleClipIndexChanged:(long long)arg1;
- (void)onInfoLong:(id)arg1 infoType:(int)arg2 lParam1:(long long)arg3 lParam2:(long long)arg4;
- (void)onASyncCallResult:(id)arg1 callType:(int)arg2 opaque:(long long)arg3 errorType:(int)arg4 errorCode:(int)arg5;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (id)snapshot;
- (long long)switchDefinitionWithMediaAsset:(id)arg1 definitionId:(long long)arg2;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2 switchMode:(int)arg3;
- (long long)switchDefinition:(id)arg1 definitionId:(long long)arg2;
- (long long)setLoopback:(_Bool)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (long long)setLoopback:(_Bool)arg1;
- (long long)seekTo:(long long)arg1 mode:(long long)arg2;
- (long long)seekTo:(long long)arg1;
- (long long)releasePlayer;
- (long long)reset;
- (long long)stop;
- (long long)pause;
- (long long)start;
- (long long)prepareAsync;
- (long long)prepare;
- (id)getPlayer;
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (id)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (id)getTrackInfo;
- (id)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (long long)addAudioTrackSource:(id)arg1 name:(id)arg2;
- (long long)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3;
- (long long)setDataSourceWithMediaAsset:(id)arg1;
- (long long)setDataSource:(id)arg1 httpHeader:(id)arg2;
- (long long)setDataSource:(id)arg1;
- (long long)setPlayerOptionalParam:(id)arg1;
@property(readonly, nonatomic) long long currentPositionMs; // @synthesize currentPositionMs=_currentPositionMs;
@property(nonatomic) unsigned long long videoGravity; // @synthesize videoGravity=_videoGravity;
@property(readonly, nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(readonly, nonatomic) long long currentClipIndex; // @synthesize currentClipIndex=_currentClipIndex;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent; // @synthesize bufferPercent=_bufferPercent;
@property(readonly, nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio; // @synthesize maxPlaySpeedRatio=_maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio; // @synthesize playSpeedRatio=_playSpeedRatio;
@property(nonatomic) double audioGainRatio; // @synthesize audioGainRatio=_audioGainRatio;
@property(nonatomic) _Bool outputMute; // @synthesize outputMute=_outputMute;
@property(readonly, nonatomic) long long playerId; // @synthesize playerId=_playerId;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
