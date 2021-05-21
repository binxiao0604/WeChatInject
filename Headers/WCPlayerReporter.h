//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CdnDownloadTaskInfo, NSString, WCPlayerPlayArgs, WCPlayerPlaybackInfo;
@protocol WCPlayerMediaExt;

@interface WCPlayerReporter : NSObject
{
    _Bool _isUseMMMP4Parser;
    _Bool _bMoovParseSucc;
    _Bool _hadReported;
    _Bool _hadReportStream;
    _Bool _bAdjustVolume;
    _Bool _bHadStopObserve;
    unsigned int _reportId;
    unsigned int _moovWaitTime;
    unsigned int _hasPreloadSize;
    unsigned int _preloadStatus;
    int _recievePreDataCost;
    int _playerCreateCost;
    int _startDownloadCost;
    int _recieveM3u8DataCost;
    int _recieveMoovDataCost;
    int _resouceloaderStartCost;
    int _fristDataResponseCost;
    int _firstAudioDecoderStartCost;
    int _firstVideoDecoderStartCost;
    int _audioDecoderCreateCost;
    int _videoDecoderCreateCost;
    int _firstAudioFrameRenderedCost;
    int _firstVideoFrameRenderedCost;
    int _autoPlayStartCost;
    int _experienceCost;
    int _firstVideoPacketReadCost;
    int _playerReadyCost;
    int _activeAudioSessionCost;
    int _parseVideoWithCost;
    int _playStartCost;
    float _bufferPosWhenPlayerReady;
    WCPlayerPlayArgs *_playerArgs;
    WCPlayerPlaybackInfo *_playbackInfo;
    unsigned long long _startDownloadTime;
    unsigned long long _startPlayTime;
    unsigned long long _clickToStartTime;
    unsigned long long _recievePreDataTime;
    unsigned long long _previousCompletedSize;
    long long _showLoadingCount;
    long long _stalledCount;
    unsigned long long _leavePlayerTime;
    CdnDownloadTaskInfo *_downloadInfo;
    unsigned long long _downloadMode;
    NSObject<WCPlayerMediaExt> *_mediaWrap;
    NSString *_clientMediaId;
    NSString *_nsHostName;
    double _initOutputVolume;
    double _currOutputVolume;
    long long _audioDecoderType;
    long long _videoDecoderType;
    unsigned long long _responsedDataWhenPlayerReady;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHadStopObserve; // @synthesize bHadStopObserve=_bHadStopObserve;
@property(nonatomic) float bufferPosWhenPlayerReady; // @synthesize bufferPosWhenPlayerReady=_bufferPosWhenPlayerReady;
@property(nonatomic) unsigned long long responsedDataWhenPlayerReady; // @synthesize responsedDataWhenPlayerReady=_responsedDataWhenPlayerReady;
@property(nonatomic) long long videoDecoderType; // @synthesize videoDecoderType=_videoDecoderType;
@property(nonatomic) long long audioDecoderType; // @synthesize audioDecoderType=_audioDecoderType;
@property(nonatomic) int playStartCost; // @synthesize playStartCost=_playStartCost;
@property(nonatomic) int parseVideoWithCost; // @synthesize parseVideoWithCost=_parseVideoWithCost;
@property(nonatomic) int activeAudioSessionCost; // @synthesize activeAudioSessionCost=_activeAudioSessionCost;
@property(nonatomic) int playerReadyCost; // @synthesize playerReadyCost=_playerReadyCost;
@property(nonatomic) int firstVideoPacketReadCost; // @synthesize firstVideoPacketReadCost=_firstVideoPacketReadCost;
@property(nonatomic) int experienceCost; // @synthesize experienceCost=_experienceCost;
@property(nonatomic) int autoPlayStartCost; // @synthesize autoPlayStartCost=_autoPlayStartCost;
@property(nonatomic) int firstVideoFrameRenderedCost; // @synthesize firstVideoFrameRenderedCost=_firstVideoFrameRenderedCost;
@property(nonatomic) int firstAudioFrameRenderedCost; // @synthesize firstAudioFrameRenderedCost=_firstAudioFrameRenderedCost;
@property(nonatomic) int videoDecoderCreateCost; // @synthesize videoDecoderCreateCost=_videoDecoderCreateCost;
@property(nonatomic) int audioDecoderCreateCost; // @synthesize audioDecoderCreateCost=_audioDecoderCreateCost;
@property(nonatomic) int firstVideoDecoderStartCost; // @synthesize firstVideoDecoderStartCost=_firstVideoDecoderStartCost;
@property(nonatomic) int firstAudioDecoderStartCost; // @synthesize firstAudioDecoderStartCost=_firstAudioDecoderStartCost;
@property(nonatomic) int fristDataResponseCost; // @synthesize fristDataResponseCost=_fristDataResponseCost;
@property(nonatomic) int resouceloaderStartCost; // @synthesize resouceloaderStartCost=_resouceloaderStartCost;
@property(nonatomic) int recieveMoovDataCost; // @synthesize recieveMoovDataCost=_recieveMoovDataCost;
@property(nonatomic) int recieveM3u8DataCost; // @synthesize recieveM3u8DataCost=_recieveM3u8DataCost;
@property(nonatomic) int startDownloadCost; // @synthesize startDownloadCost=_startDownloadCost;
@property(nonatomic) int playerCreateCost; // @synthesize playerCreateCost=_playerCreateCost;
@property(nonatomic) int recievePreDataCost; // @synthesize recievePreDataCost=_recievePreDataCost;
@property(nonatomic) _Bool bAdjustVolume; // @synthesize bAdjustVolume=_bAdjustVolume;
@property(nonatomic) double currOutputVolume; // @synthesize currOutputVolume=_currOutputVolume;
@property(nonatomic) double initOutputVolume; // @synthesize initOutputVolume=_initOutputVolume;
@property(nonatomic) _Bool hadReportStream; // @synthesize hadReportStream=_hadReportStream;
@property(nonatomic) _Bool hadReported; // @synthesize hadReported=_hadReported;
@property(retain, nonatomic) NSString *nsHostName; // @synthesize nsHostName=_nsHostName;
@property(retain, nonatomic) NSString *clientMediaId; // @synthesize clientMediaId=_clientMediaId;
@property(nonatomic) unsigned int preloadStatus; // @synthesize preloadStatus=_preloadStatus;
@property(nonatomic) unsigned int hasPreloadSize; // @synthesize hasPreloadSize=_hasPreloadSize;
@property(retain, nonatomic) NSObject<WCPlayerMediaExt> *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(nonatomic) unsigned int moovWaitTime; // @synthesize moovWaitTime=_moovWaitTime;
@property(nonatomic) unsigned long long downloadMode; // @synthesize downloadMode=_downloadMode;
@property(retain, nonatomic) CdnDownloadTaskInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(nonatomic) unsigned long long leavePlayerTime; // @synthesize leavePlayerTime=_leavePlayerTime;
@property(nonatomic) long long stalledCount; // @synthesize stalledCount=_stalledCount;
@property(nonatomic) long long showLoadingCount; // @synthesize showLoadingCount=_showLoadingCount;
@property(nonatomic) _Bool bMoovParseSucc; // @synthesize bMoovParseSucc=_bMoovParseSucc;
@property(nonatomic) _Bool isUseMMMP4Parser; // @synthesize isUseMMMP4Parser=_isUseMMMP4Parser;
@property(nonatomic) unsigned long long previousCompletedSize; // @synthesize previousCompletedSize=_previousCompletedSize;
@property(nonatomic) unsigned long long recievePreDataTime; // @synthesize recievePreDataTime=_recievePreDataTime;
@property(nonatomic) unsigned long long clickToStartTime; // @synthesize clickToStartTime=_clickToStartTime;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) unsigned long long startDownloadTime; // @synthesize startDownloadTime=_startDownloadTime;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) __weak WCPlayerPlaybackInfo *playbackInfo; // @synthesize playbackInfo=_playbackInfo;
@property(nonatomic) __weak WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
- (void)reportPlayerInfo;
- (id)commonReportInfo;
- (void)report;
- (id)getPreloadReportInfo:(id)arg1;
- (id)getCdnReportInfo:(id)arg1;
- (id)getPlayerInfoWith:(id)arg1;
- (void)onStartPlayerWithMode:(unsigned long long)arg1 MediaId:(id)arg2;
- (void)reportMoovParseFailWithMp4Parser;
- (void)reportMoovParseSuccWithMp4Parser;
- (void)reportMoovParseFail;
- (void)reportCheckedPlayerLeak;
- (void)reportSeekCompleteTimeCost:(unsigned int)arg1;
- (void)reportPlaybackStallCount;
- (void)reportDownloadProxyInitFail;
- (void)reportStartPlayCost;
- (void)reportNetworkSpeed;
- (void)reportStreamingPlayInfoWithIDKey;
- (void)reportPlayerNoMoreLoadingReq;
- (void)reportPlayerLeak;
- (void)reportGetDurationFailWhenPlayerReady;
- (void)reportLoadingPreWhenStopPlayer;
- (void)reportResetAndPlaySuccInResourceloaderBug;
- (void)reportWhenResetToSystemInResourceloaderBug;
- (void)reportResourceloaderBugNotResumeInPreloadDataResp;
- (void)reportPlayerResumedInLiklyResourceloaderBug;
- (void)reportNotRealPlayWhenPlayerExit;
- (void)reportWhenLiklyResourceloaderBugAfterSeek;
- (void)reportWhenLiklyResourceloaderBug;
- (void)reportResetAndPlaySuccWhenMediaServicesWereReset;
- (void)reportWhenMediaServicesWereReset;
- (void)reportWhenResetAndPlaySucc;
- (void)reportWhenResetPlayer;
- (void)reportWhenStateError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserveOutputVolume;
- (void)startObserveOutputVolume;
- (void)dealloc;
- (id)getNetNameWithType:(unsigned int)arg1;
- (unsigned int)getReportIdWithSource:(int)arg1 Keys:(id)arg2 FromIdkey:(unsigned int)arg3;
- (void)onDataSourceSwitchSuccess;
- (void)onStartDataSourceSwitch:(long long)arg1;
- (void)onParseVideoCodec:(id)arg1;
- (void)onStartAutoPlay;
- (void)onStartPlay:(float)arg1;
- (void)onParseVideoWithCost:(int)arg1;
- (void)onActiveAudioSessionWithCost:(int)arg1;
- (void)onPlayerReady;
- (void)onFirstVideoPacketRead;
- (void)onFirstVideoFrameRendered;
- (void)onFirstAudioFrameRendered;
- (void)onVideoDecoderCreateWithType:(long long)arg1;
- (void)onAudioDecoderCreateWithType:(long long)arg1;
- (void)onFirstVideoDecoderStart;
- (void)onFirstAudioDecoderStart;
- (void)onResponseFristData;
- (void)onPlayerCreate;
- (void)onResouceloaderStart;
- (void)onRecievePreData;
- (void)onRecieveMoovData;
- (void)onRecieveM3u8Data;
- (void)onStartDownload;
- (void)reportWhenStartPlayer;
- (void)onPlayerStart;
- (unsigned int)getPlayLenPerSec;
- (id)getMoovFailReason:(int)arg1;
- (void)calculateBuffersWithStat:(id)arg1 PlayDecs:(id)arg2;
- (void)reportStreamPlayInfo;
- (unsigned long long)getStartDownloadTime;
- (void)reportSmoothInfo;

@end

