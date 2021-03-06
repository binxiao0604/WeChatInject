//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LocalJSEventHandler_BaseEvent.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IHttpCacheExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class NSData, NSString;

@interface LocalJSEventHandler_shareImage : LocalJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt, WCActionSheetDelegate, WCCommitViewResultDelegate>
{
    _Bool _isDownloadingImage;
    _Bool _willShareToFriend;
    _Bool _willShareToTimeLine;
    NSString *_cacheKey;
    NSData *_imageData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willShareToTimeLine; // @synthesize willShareToTimeLine=_willShareToTimeLine;
@property(nonatomic) _Bool willShareToFriend; // @synthesize willShareToFriend=_willShareToFriend;
@property(nonatomic) _Bool isDownloadingImage; // @synthesize isDownloadingImage=_isDownloadingImage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getCurrentViewController;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (void)shareImageToTimeLineWithData:(id)arg1;
- (void)shareImageToFriendWithData:(id)arg1;
- (void)tryShareToDestination:(unsigned long long)arg1;
- (id)genKeyForUrl:(id)arg1;
- (void)getImageDataWithHttpUrl:(id)arg1;
- (void)showActionSheet;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

