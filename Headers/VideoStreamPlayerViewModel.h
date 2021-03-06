//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "VideoStreamDownloadLogicDelegate-Protocol.h"

@class NSMutableArray, NSString, VideoStreamDownloadLogic, VideoStreamInfo, VideoStreamKVReportLogic;
@protocol NSObject><VideoStreamPlayerViewModeDelegate;

@interface VideoStreamPlayerViewModel : NSObject <VideoStreamDownloadLogicDelegate, AVAssetResourceLoaderDelegate>
{
    unsigned int m_uiLoadingRequestNum;
    NSMutableArray *m_arrPendingRequests;
    NSMutableArray *m_arrDownloadTaskArray;
    VideoStreamDownloadLogic *m_oDownloadLogic;
    VideoStreamKVReportLogic *m_oKVReportLogic;
    VideoStreamInfo *m_oVideoInfo;
    _Bool _bShouldLoadStreamResource;
    unsigned int _m_uiSeekTime;
    id <NSObject><VideoStreamPlayerViewModeDelegate> _delegate;
    long long _loadingRequestTotalLength;
}

- (void).cxx_destruct;
@property(nonatomic) long long loadingRequestTotalLength; // @synthesize loadingRequestTotalLength=_loadingRequestTotalLength;
@property(nonatomic) _Bool bShouldLoadStreamResource; // @synthesize bShouldLoadStreamResource=_bShouldLoadStreamResource;
@property(nonatomic) unsigned int m_uiSeekTime; // @synthesize m_uiSeekTime=_m_uiSeekTime;
@property(nonatomic) __weak id <NSObject><VideoStreamPlayerViewModeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadVideoReturn:(id)arg1;
- (void)OnSnsVideoChanged;
- (void)onDownloadVideoSuccess;
- (void)OnDownloadVideoErrorExpired:(_Bool)arg1;
- (void)onGetFristPartAVData;
- (void)onGetAVDataFromNetOffset:(unsigned int)arg1 Length:(unsigned int)arg2 NeedNotifyToPlay:(_Bool)arg3;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)loaderCancelledError;
- (void)cancelAllPendingRequests;
- (void)fillInformationForRequest:(id)arg1;
- (void)checkData:(id)arg1 length:(unsigned int)arg2;
- (_Bool)respondWithDataForRequest:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)processPendingRequestsFromOffset:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)removeLoadingRequest:(id)arg1;
- (void)addLoadingRequest:(id)arg1;
- (void)cleanDownloadTask;
- (void)consumeDownloadTask;
- (void)addWCAVDownloadTaskBySec:(float)arg1;
- (void)addOneSliceTimeDownloadTask;
- (void)setVideoInfo:(id)arg1;
- (void)requestAllData;
- (void)stopVideoStreamDownload;
- (unsigned long long)startVideoStreamDownload;
- (id)initWithHttpUrl:(id)arg1 filePath:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

