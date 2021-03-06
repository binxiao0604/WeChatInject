//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMMMusicMVCGIService-Protocol.h"
#import "MMMusicMVClipUploaderDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMMusicMVClipUploader, MMMusicPostingMVContext, NSMutableArray, NSString;

@interface MMMusicMVPostDataService : MMUserService <MMMusicMVClipUploaderDelegate, IMMMusicMVCGIService, MMServiceProtocol>
{
    MMMusicPostingMVContext *_currentContext;
    NSMutableArray *_pendingContext;
    NSMutableArray *_localDraftModels;
    MMMusicMVClipUploader *_clipUploader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicMVClipUploader *clipUploader; // @synthesize clipUploader=_clipUploader;
@property(retain, nonatomic) NSMutableArray *localDraftModels; // @synthesize localDraftModels=_localDraftModels;
@property(retain, nonatomic) NSMutableArray *pendingContext; // @synthesize pendingContext=_pendingContext;
@property(retain, nonatomic) MMMusicPostingMVContext *currentContext; // @synthesize currentContext=_currentContext;
- (void)onMusicMVCGISerivcePostMVFailed:(id)arg1;
- (void)onMusicMVCGISerivcePostMVSuccess:(id)arg1;
- (void)onClipUploadFailWithClipId:(id)arg1;
- (void)onClipUploadSuccessWithClipId:(id)arg1 finderDataItem:(id)arg2;
- (id)findContextContaisUploadingClipWithId:(id)arg1;
- (void)syncDraftToMMKV;
- (void)syncLocalModelToMMKV;
- (void)deletePostingContext:(id)arg1;
- (void)postLocalVideo:(id)arg1;
- (void)postMVIfReady:(id)arg1;
- (void)postPendingContext;
- (_Bool)deleteDraftWithLocalId:(id)arg1 needNotify:(_Bool)arg2;
- (id)getDraftMVFinderItem:(id)arg1;
- (id)getDraftMVFinderItemList;
- (_Bool)deleteLocalMVModelWithLocalId:(id)arg1;
- (_Bool)tryPostLocalMVModelWithLocalId:(id)arg1;
- (id)getLocalMVFinderItem:(id)arg1;
- (id)getLocalMVFinderItemList;
- (id)getLocalMVModelWithLocalId:(id)arg1;
- (void)addVideoForTrackAt:(unsigned long long)arg1 localVideoPath:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (void)addVideoForTrackAt:(unsigned long long)arg1 withFinderVideo:(id)arg2 clipOffsetMs:(unsigned long long)arg3;
- (void)discardPostingContext;
- (id)commitPostingContext:(_Bool)arg1 customCover:(id)arg2;
- (void)createPostingContextWithBaseMVModel:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

