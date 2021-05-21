//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, WebviewLocalResItem;
@protocol WebResourceCDNDownloadHelperDelegate;

@interface WebResourceCDNDownloadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    _Bool _isDownloading;
    NSMutableArray *_downloadArray;
    id <WebResourceCDNDownloadHelperDelegate> _delegate;
    WebviewLocalResItem *_curDownloadingItem;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WebResourceCDNDownloadHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetCdnIdResp:(id)arg1;
- (void)startDownloadNextItem;
- (void)sendDownloadRequest;
- (void)sendGetCdnURLRequest;
- (_Bool)stopDownload;
- (_Bool)startDownload;
- (void)addDownloadItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

