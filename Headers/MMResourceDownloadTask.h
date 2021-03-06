//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResourceDownloadDelegate-Protocol.h"

@class MMResourceDownloadTaskContext, NSString;
@protocol MMResourceDownloadTaskDelegate, MMResourceDownloader;

@interface MMResourceDownloadTask : NSObject <MMResourceDownloadDelegate>
{
    NSString *_resUrl;
    MMResourceDownloadTaskContext *_context;
    NSString *_downloadIdentifier;
    id <MMResourceDownloader> _downloader;
    long long _retryCnt;
    long long _currentCnt;
    id <MMResourceDownloadTaskDelegate> _downloadTaskDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMResourceDownloadTaskDelegate> downloadTaskDelegate; // @synthesize downloadTaskDelegate=_downloadTaskDelegate;
@property(nonatomic) long long currentCnt; // @synthesize currentCnt=_currentCnt;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(readonly, copy, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(readonly, nonatomic) MMResourceDownloadTaskContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
- (void)onDownloadReportWithKey:(unsigned int)arg1;
- (_Bool)isSameResourceWithTask:(id)arg1;
- (Class)getResrouceDownloaderClass;
- (id)generateDownloadIdentifier;
- (void)reportWithKey:(unsigned int)arg1 network:(id)arg2;
- (void)clearDownloadData;
- (void)cancelDownload;
- (void)startDownload;
- (void)dealloc;
- (id)initWithResUrl:(id)arg1 context:(id)arg2;

@end

