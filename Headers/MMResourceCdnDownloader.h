//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResourceCdnDownloaderNotifierDelegate-Protocol.h"
#import "MMResourceDownloader-Protocol.h"

@class MMResourceCdnDownloaderNotifier, NSArray, NSString;
@protocol MMResourceDownloadDelegate;

@interface MMResourceCdnDownloader : NSObject <MMResourceCdnDownloaderNotifierDelegate, MMResourceDownloader>
{
    MMResourceCdnDownloaderNotifier *_notifier;
    id <MMResourceDownloadDelegate> downloadDelegate;
    NSString *downloadIdentifier;
    NSString *_resUrl;
    NSArray *_arrDnsIp;
    NSString *_successFilePath;
}

+ (unsigned int)genIncreaseSequence;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *successFilePath; // @synthesize successFilePath=_successFilePath;
@property(retain, nonatomic) NSArray *arrDnsIp; // @synthesize arrDnsIp=_arrDnsIp;
@property(retain, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
@property(retain, nonatomic) NSString *downloadIdentifier; // @synthesize downloadIdentifier;
@property(nonatomic) __weak id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate;
- (void)onCdnDownloadFinish:(id)arg1;
- (void)reportCdnErrorWithRet:(int)arg1;
- (id)generateSuccessFilePath;
- (id)getSuccessFileDir;
- (void)createSuccessFileDirIfNotExist;
- (id)getSaveFilePath;
- (id)getSaveFileDir;
- (void)createSaveFileDirIfNotExist;
- (void)doNewDns;
- (void)onEndDownloading:(long long)arg1 data:(id)arg2;
- (void)reportWithKey:(unsigned int)arg1;
- (void)mainThread_clearDownloadData;
- (void)mainThread_cancelDownload;
- (void)mainThread_startDownload;
- (void)clearData;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

