//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, TPDownloadParamData, TPOptionalParam, TPVideoInfo, UIImage, UIView;
@protocol ITPBusinessReportManager, ITPMediaAsset, ITPPlayerDelegate, ITPPlayerProxy, OS_dispatch_queue, TPAssetResourceLoaderDelegate;

@protocol ITPPlayer <NSObject>
@property(readonly, nonatomic) _Bool pictureInPictureActive;
@property(readonly, nonatomic) _Bool pictureInPicturePossible;
@property(nonatomic) unsigned long long externalPlaybackVideoGravity;
@property(nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property(readonly, nonatomic) id <ITPBusinessReportManager> reportManager;
@property(readonly, nonatomic) id <ITPPlayerProxy> proxy;
@property(nonatomic) _Bool enableResourceLoader;
@property(nonatomic) unsigned long long videoGravity;
@property(readonly, nonatomic) unsigned long long videoHeight;
@property(readonly, nonatomic) unsigned long long videoWidth;
@property(readonly, nonatomic) long long playableDurationMs;
@property(readonly, nonatomic) double bufferPercent;
@property(readonly, nonatomic) long long currentPositionMs;
@property(readonly, nonatomic) long long durationMs;
@property(readonly, nonatomic) double maxPlaySpeedRatio;
@property(nonatomic) double playSpeedRatio;
@property(nonatomic) double audioGainRatio;
@property(nonatomic) _Bool outputMute;
@property(retain, nonatomic) UIView *playerView;
@property(nonatomic) __weak id <ITPPlayerDelegate> delegate;
- (long long)getPlayerState;
- (long long)stopPictureInPicture;
- (long long)startPictureInPicture;
- (NSString *)getPropertyString:(long long)arg1;
- (long long)getPropertyLong:(long long)arg1;
- (void)captureVideoWithFinishBlock:(void (^)(UIImage *))arg1;
- (UIImage *)syncCaptureVideo;
- (void)captureVideo;
- (long long)switchDefinitionWithMediaAsset:(id <ITPMediaAsset>)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3 mode:(int)arg4 resourceLoaderDelegate:(id <TPAssetResourceLoaderDelegate>)arg5 delegateQueue:(NSObject<OS_dispatch_queue> *)arg6;
- (long long)switchDefinition:(NSString *)arg1 definitionId:(long long)arg2 videoInfo:(TPVideoInfo *)arg3;
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
- (long long)selectProgram:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getProgramInfo;
- (long long)deselectTrack:(long long)arg1 opaque:(long long)arg2;
- (long long)selectTrack:(long long)arg1 opaque:(long long)arg2;
- (NSArray *)getTrackInfo;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2 downloadParamData:(TPDownloadParamData *)arg3;
- (long long)addAudioTrackSource:(NSString *)arg1 name:(NSString *)arg2;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3 downloadParamData:(TPDownloadParamData *)arg4;
- (long long)addSubtitleSource:(NSString *)arg1 mimeType:(NSString *)arg2 name:(NSString *)arg3;
- (long long)setVideoInfo:(TPVideoInfo *)arg1;
- (long long)setDataSourceWithMediaAsset:(id <ITPMediaAsset>)arg1;
- (long long)setDataSource:(NSString *)arg1 httpHeader:(NSDictionary *)arg2;
- (long long)setDataSource:(NSString *)arg1 resourceLoaderDelegate:(id <TPAssetResourceLoaderDelegate>)arg2 delegateQueue:(NSObject<OS_dispatch_queue> *)arg3;
- (long long)setDataSource:(NSString *)arg1;
- (long long)setPlayerOptionalParam:(TPOptionalParam *)arg1;
- (id)initWithPlayingQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)initWithPlayingQueue:(NSObject<OS_dispatch_queue> *)arg1;
@end

