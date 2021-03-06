//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CdnDownloadTaskInfo, CdnProgressInfo, NSString;

@protocol WCPlayerDownloaderExt <NSObject>

@optional
- (void)OnCdnUpdatePreloadInfo:(NSString *)arg1 preloadSize:(unsigned int)arg2 preloadStatus:(unsigned int)arg3;
- (void)OnVideoSourceChanged:(NSString *)arg1;
- (void)OnCdnVideoPreloadCompleted:(CdnProgressInfo *)arg1;
- (void)OnCdnDownloadError:(CdnDownloadTaskInfo *)arg1;
- (void)OnCdnDownloadSuccess:(CdnDownloadTaskInfo *)arg1;
- (void)OnPlayerDownloadProgress:(NSString *)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnPlayerVideoDataAvaiable:(NSString *)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (void)OnPlayerMoovReady:(NSString *)arg1 waitTime:(unsigned int)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 duration:(float)arg5;
- (void)OnPlayerM3u8Ready:(NSString *)arg1 waitTime:(unsigned int)arg2 m3u8:(NSString *)arg3;
- (void)OnHintLocalCache:(NSString *)arg1;
- (void)OnCdnDownloadStart:(NSString *)arg1;
@end

