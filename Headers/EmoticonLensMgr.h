//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "EmoticonLensIconDownloaderDelegate-Protocol.h"
#import "EmoticonLensInfoBatchCgiDelegate-Protocol.h"
#import "EmoticonLensListCgiDelegate-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class EmoticonLensIconDownloader, EmoticonLensInfoBatchCgi, EmoticonLensListCgi, EmoticonLensLocalData, NSString;

@interface EmoticonLensMgr : MMUserService <EmoticonLensListCgiDelegate, EmoticonLensInfoBatchCgiDelegate, EmoticonLensIconDownloaderDelegate, ICdnComMgrExt, MMServiceProtocol>
{
    EmoticonLensLocalData *_localData;
    EmoticonLensListCgi *_lensListCgi;
    EmoticonLensInfoBatchCgi *_requestLensInfoCgi;
    EmoticonLensIconDownloader *_iconDownloader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonLensIconDownloader *iconDownloader; // @synthesize iconDownloader=_iconDownloader;
@property(retain, nonatomic) EmoticonLensInfoBatchCgi *requestLensInfoCgi; // @synthesize requestLensInfoCgi=_requestLensInfoCgi;
@property(retain, nonatomic) EmoticonLensListCgi *lensListCgi; // @synthesize lensListCgi=_lensListCgi;
@property(retain, nonatomic) EmoticonLensLocalData *localData; // @synthesize localData=_localData;
- (void)clearLensResource:(id)arg1;
- (id)emoticonInfoForLens:(id)arg1;
- (id)configDataFilePath;
- (id)lensIconPathForLens:(id)arg1;
- (id)packageZipPathForLensId:(id)arg1;
- (id)packagePathForLensId:(id)arg1;
- (void)onIconDownloaderFail:(id)arg1;
- (void)onIconDownloaderSuccess:(id)arg1 filePath:(id)arg2;
- (void)onEmoticonLensInfoFail:(id)arg1;
- (void)onEmoticonLensInfoInvalid:(id)arg1 errType:(long long)arg2;
- (void)onEmoticonLensInfoSuccess:(id)arg1 forLensId:(id)arg2 finish:(_Bool)arg3;
- (void)onRequestLensListFail;
- (void)onRequestLensListSuccessWithLens:(id)arg1 isFirstPage:(_Bool)arg2;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)saveToLocal;
- (void)loadLocalData;
- (id)getLensPackageFor:(id)arg1;
- (void)downloadLensPackage:(id)arg1;
- (void)tryUpdateHistoryRecords;
- (void)downloadLensIcon:(id)arg1;
- (void)requestLensInfoWithId:(id)arg1;
- (void)requestLensListNextPage;
- (_Bool)canLoadMore;
- (void)requestLensList;
- (void)setRecommendData:(id)arg1;
- (id)getIconForLens:(id)arg1;
- (void)addToRecentUse:(id)arg1;
- (id)getRecentUsedList;
- (id)getLocalLensList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

