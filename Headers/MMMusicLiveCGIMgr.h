//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSData;
@protocol MMMusicLiveCGIMgrDelegate;

@interface MMMusicLiveCGIMgr : NSObject <PBMessageObserverDelegate>
{
    NSData *_heartBeatCookie;
    NSData *_getCommentCookie;
    NSData *_getBgVideoCookie;
    NSData *_getMVRecommentListLastBuffer;
    id <MMMusicLiveCGIMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicLiveCGIMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCheckPermissionCGIWrap:(id)arg1;
- (void)sendCheckPermissionReqWith:(id)arg1;
- (_Bool)checkCGIBaseRespSuccess:(id)arg1;
- (id)genClientMsgId;
- (id)convertPbMsgToModel:(id)arg1;
- (id)convertPbMsgListToModelList:(id)arg1;
- (void)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2 bLongPolling:(_Bool)arg3;
- (void)sendCgiEvent:(unsigned int)arg1 pbReq:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetSongStatusCGIWrap:(id)arg1;
- (void)sendGetSongStatusCgiReqWithSongId:(id)arg1 musicInfo:(id)arg2 mvModel:(id)arg3;
- (void)sendPopReqWithSongId:(id)arg1;
- (void)sendQuitReqWithSongId:(id)arg1;
- (void)handleDoLikeCGIWrap:(id)arg1;
- (void)sendDoLikeReqWithMsgId:(unsigned long long)arg1 bLike:(_Bool)arg2 songId:(id)arg3;
- (void)handleGetBeatTracksCGIWrap:(id)arg1;
- (void)sendGetBeatTracks:(id)arg1 musicDurationMs:(unsigned int)arg2 songId:(id)arg3 mvModel:(id)arg4;
- (void)handleMVLikeWithMVModel:(id)arg1 isSuccess:(_Bool)arg2;
- (void)sendMVLikeReqWithMVModel:(id)arg1 isLike:(_Bool)arg2;
- (void)handleGetMVRecommentListCGIWrap:(id)arg1;
- (void)sendGetMVRecommentListReqWithMVModel:(id)arg1 scene:(int)arg2 type:(int)arg3;
- (void)handleDeleteCommentCGIWrap:(id)arg1;
- (void)sendDeleteCommentWithMsgID:(unsigned long long)arg1 songID:(id)arg2;
- (void)handlePostCommentCGIWrap:(id)arg1;
- (void)sendPostCommentReq:(id)arg1 songId:(id)arg2;
- (void)handleGetCommentListCGIWrap:(id)arg1;
- (void)sendGetCommentListReqWithSongId:(id)arg1;
- (void)handlePostLiveMsgCGIWrap:(id)arg1;
- (void)sendPostLiveMsgReq:(id)arg1 songId:(id)arg2 mvModel:(id)arg3;
- (void)handleLiveCGIWrap:(id)arg1;
- (void)sendOfflineHeartBeatReqWithSongId:(id)arg1;
- (void)sendLiveHeartBeatReqWithSongId:(id)arg1;
- (void)handleLiveJoinCGIWrap:(id)arg1;
- (void)sendLiveJoinReqWithSongid:(id)arg1 songinfo:(id)arg2;
- (void)sendLiveJoinReqWithMVModel:(id)arg1;

@end

