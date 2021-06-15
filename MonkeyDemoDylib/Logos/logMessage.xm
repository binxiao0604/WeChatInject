#import <UIKit/UIKit.h>

/*
%hook CMessageMgr
+ (id)GetPathOfOpenDownloadCDNLargeFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (id)GetPathOfOpenDownloadCDNFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (id)GetPathOfOpenUploadVideoCDNFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (id)GetPathOfOpenUploadCDNLargeFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (id)GetPathOfOpenUploadCDNFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (id)GetPathOfOpenUploadFile { %log; id r = %orig; NSLog(@" = %@", r); return r; }
+ (unsigned long long)preCleanGetCacheSize { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
+ (unsigned long long)cleanCacheMgrMakeToClean { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (void)setPlayingVideoPath:(NSString *)playingVideoPath { %log; %orig; }
- (NSString *)playingVideoPath { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (void)PostInsertParsedXmlSysMsg:(id)arg1 ChatName:(id)arg2 { %log; %orig; }
- (void)stopChatRoomDownlaodAllResource:(id)arg1 { %log; %orig; }
- (void)MigrateOpenImChatRoomMsgWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2 { %log; %orig; }
- (long long)numberOfRedPacketsIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4 { %log; long long r = %orig; NSLog(@" = %lld", r); return r; }
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 type:(long long)arg3 destination:(id)arg4 fromSender:(id)arg5 { %log; long long r = %orig; NSLog(@" = %lld", r); return r; }
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4 { %log; long long r = %orig; NSLog(@" = %lld", r); return r; }
- (void)updateReferMsgAsRevoked:(id)arg1 chatName:(id)arg2 { %log; %orig; }
- (void)checkAndUpdateReferMsgAsRevoked:(id)arg1 chatName:(id)arg2 { %log; %orig; }
- (id)getMarkColorForTableLocation:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)changeAppMsgToText:(id)arg1 type:(int)arg2 { %log; %orig; }
- (int)AppMsgToTextTypeByMsgSource:(id)arg1 { %log; int r = %orig; NSLog(@" = %d", r); return r; }
- (id)GetMsgForUsr:(id)arg1 fromLocalIdList:(id)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetFTSMsgRealChatUsrInTransaction:(id)arg1 forIdList:(id)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (_Bool)hasMsg:(id)arg1 fromCreateTime:(unsigned int)arg2 endTime:(unsigned int)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2 { %log; %orig; }
- (_Bool)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)getImageMsg:(id)arg1 beforeCreateTime:(unsigned int)arg2 limit:(int)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)getImageMsg:(id)arg1 limit:(int)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)onUploadBypassVideoCdnFinish:(id)arg1 { %log; %orig; }
- (void)onUploadBypassImageCdnFinish:(id)arg1 { %log; %orig; }
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (id)onGetMsg:(id)arg1 LocalID:(unsigned int)arg2 Wrap:(id)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)onGetBigImageErrorWithWrap:(id)arg1 { %log; %orig; }
- (void)onGetBigImageResultWithWrap:(id)arg1 image:(id)arg2 imageData:(id)arg3 isSaveImgOK:(_Bool)arg4 { %log; %orig; }
- (void)onUploadImageRequestWithWrap:(id)arg1 { %log; %orig; }
- (void)enterBackground { %log; %orig; }
- (void)enterForeground { %log; %orig; }
- (void)reSendAllMsgFromNotificationDone { %log; %orig; }
- (id)getSentFailMsgs { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)onAuthOK { %log; %orig; }
- (id)getSemaphore { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (_Bool)IsRecordMsgDownloading:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)StopDownloadRecordMsg:(id)arg1 downloadTaskInfo:(id *)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4 { %log; %orig; }
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 prior:(_Bool)arg3 { %log; %orig; }
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 { %log; %orig; }
- (_Bool)StartDownloadByHistoryRecordMsg:(id)arg1 prior:(_Bool)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)StartDownloadByRecordMsg:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)StopUploadRecordMsgByUsername:(id)arg1 { %log; %orig; }
- (void)StopUploadRecordMsg:(id)arg1 { %log; %orig; }
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)copyDataForDataList:(id)arg1 msgWrap:(id)arg2 { %log; %orig; }
- (unsigned long long)QueryDownloadedLength:(id)arg1 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (_Bool)StartDownloadAppAttachInCDN:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5 { %log; %orig; }
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)ClearAllMessagePatternCacheCache { %log; %orig; }
- (unsigned int)GetDownloadThumbStatus:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)StartDownloadThumb:(id)arg1 isPrior:(_Bool)arg2 { %log; %orig; }
- (void)StartDownloadThumb:(id)arg1 { %log; %orig; }
- (unsigned int)GetUploadPercent:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)StopSilentImageDownloadTask:(id)arg1 { %log; %orig; }
- (void)StopImageDownloadTask:(id)arg1 { %log; %orig; }
- (void)StopDownloadImage:(id)arg1 { %log; %orig; }
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 SaveAlbum:(_Bool)arg4 Silent:(_Bool)arg5 { %log; %orig; }
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 { %log; %orig; }
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1 { %log; %orig; }
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(_Bool)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(_Bool)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)onServiceEnterBackground { %log; %orig; }
- (void)onServiceClearData { %log; %orig; }
- (void)onServiceInit { %log; %orig; }
- (void)UpdateVideoMsg:(id)arg1 { %log; %orig; }
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2 { %log; %orig; }
- (void)OnErrorBySender:(id)arg1 ErrNo:(int)arg2 { %log; %orig; }
- (void)OnMessageSentBySender:(id)arg1 { %log; %orig; }
- (void)OnAddMessageByReceiver:(id)arg1 { %log; %orig; }
- (void)OnAddMessageBySender:(id)arg1 { %log; %orig; }
- (void)onNewSyncNotAddDBSession:(id)arg1 withMessages:(id)arg2 { %log; %orig; }
- (void)onNewSyncShowPush:(id)arg1 isAlwaysShow:(_Bool)arg2 { %log; %orig; }
- (void)onNewSyncSpecialSession:(id)arg1 withMessages:(id)arg2 { %log; %orig; }
- (void)onNewSyncClearUnread:(id)arg1 { %log; %orig; }
- (void)onNewSyncNotAddDBMessage:(id)arg1 { %log; %orig; }
- (void)onNewSyncAddMsgSessionArray:(id)arg1 withUsers:(id)arg2 { %log; %orig; }
- (void)onNewSyncDeleteMessage:(id)arg1 { %log; %orig; }
- (void)onNewSyncAddMessage:(id)arg1 { %log; %orig; }
- (void)onBypMsgModByBitSet:(unsigned int)arg1 msgWrap:(id)arg2 { %log; %orig; }
- (void)onBypEmotionMsgModByBitSet:(unsigned int)arg1 msgWrap:(id)arg2 { %log; %orig; }
- (void)OnSendMessageFail:(id)arg1 { %log; %orig; }
- (void)OnSendMessageSuccess:(id)arg1 { %log; %orig; }
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2 { %log; %orig; }
- (void)HandleSvrCmd:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)DelMsgPatten:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (id)GetLastVoipMsg:(id)arg1 AfterTime:(unsigned int)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetLastMsgToUsr:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetLastMsgFromUsr:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)CheckQueue { %log; %orig; }
- (id)GetRealChatName:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)StopUploadAppAttach:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)StopDownloadSilentAppAttach:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (_Bool)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 Silent:(_Bool)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Data:(id)arg3 Scene:(unsigned int)arg4 { %log; %orig; }
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 DataPath:(id)arg3 Scene:(unsigned int)arg4 { %log; %orig; }
- (void)StartUploadAppMsg:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3 { %log; %orig; }
- (void)SetGetLocationEnd:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)UpdateEmoticonMsg:(id)arg1 { %log; %orig; }
- (void)SetEmoticonGameEnd:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (_Bool)StopDownloadEmoticonMsgWrapByChatName:(id)arg1 n64SvrID:(long long)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)UpgradePriorityForMsgWrap:(id)arg1 { %log; %orig; }
- (_Bool)StartDownloadEmoticonMsgWrap:(id)arg1 HighPriority:(_Bool)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)isChatStatusNotifyOpenForMsgWrap:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)UpdateMsgSourceToDB:(id)arg1 { %log; %orig; }
- (_Bool)AddBackupMsg:(id)arg1 MsgWraps:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)backupGetMsg:(id)arg1 n64svrIDArray:(id)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 { %log; %orig; }
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 Unique:(_Bool)arg5 { %log; %orig; }
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)DropChatTable:(id)arg1 { %log; %orig; }
- (void)downLoadRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2 { %log; %orig; }
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2 { %log; %orig; }
- (void)StopDownloadVideoByChatName:(id)arg1 { %log; %orig; }
- (void)StopDownloadSilentVideo:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (_Bool)StopDownloadVideo:(id)arg1 MsgWrap:(id)arg2 downloadTaskInfo:(id *)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (unsigned long long)GetVideoMessageDownloadMode:(id)arg1 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (unsigned long long)GetVideoMessageDownloadModeFromCDNTask:(id)arg1 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (unsigned long long)ForceCleanAllPreloadVideoCache { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (void)CleanPreloadVideoCache { %log; %orig; }
- (void)ResumePreloadVideo { %log; %orig; }
- (void)PausePreloadVideo { %log; %orig; }
- (void)StartPreloadVideo:(id)arg1 { %log; %orig; }
- (unsigned long long)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4 Silent:(_Bool)arg5 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (unsigned long long)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4 { %log; unsigned long long r = %orig; NSLog(@" = %llu", r); return r; }
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(_Bool)arg3 { %log; %orig; }
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)StopUploadVideoByChatName:(id)arg1 { %log; %orig; }
- (void)StopUploadVideo:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)StartUploadVideo:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (id)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)ResendVideoMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 { %log; %orig; }
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 { %log; %orig; }
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned int)arg2 DownloadStatus:(unsigned int)arg3 { %log; %orig; }
- (id)GetRevokeMsgBySvrId:(long long)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetSecMsgBySvrId:(long long)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetAllMesCount:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetUnReadCountInHello:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetCountInHello:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetMyMesCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetUnReadCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetUnReadCount:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)DelAllMsgs:(id)arg1 { %log; %orig; }
- (void)DelMsgForBatchDelete:(id)arg1 MsgList:(id)arg2 { %log; %orig; }
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3 { %log; %orig; }
- (void)ClearUnreadForSync:(id)arg1 CreateTime:(unsigned int)arg2 { %log; %orig; }
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3 { %log; %orig; }
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (_Bool)ModHelloLocationMsg:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)AddHelloMsgList:(id)arg1 MsgList:(id)arg2 { %log; %orig; }
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned int)arg4 DES:(unsigned int)arg5 checkCreateTime:(_Bool)arg6 status:(unsigned int)arg7 { %log; %orig; }
- (_Bool)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2 { %log; %orig; }
- (id)GetHelloMsg:(id)arg1 n64SvrID:(long long)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetDBHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(_Bool)arg4 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)CheckMessageStatus:(id)arg1 Msg:(id)arg2 { %log; %orig; }
- (id)GetFirstUnreadMsgIncludingNewXML:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (_Bool)checkSqliteMasterExistFor:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetFirstUnreadMsg:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetMsgSeqMaxLocalId:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (id)GetLastInsertMsg:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetLastMsg:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetTextMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (id)GetTextMsg:(id)arg1 DescendinglyToID:(unsigned int)arg2 Limit:(int)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetTextMsg:(id)arg1 AscendinglyFromID:(unsigned int)arg2 Limit:(int)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)getValidNewMessageWrapArray:(id)arg1 bizType:(long long)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)DelOverTimeNewBizExtMsgsOnType:(long long)arg1 { %log; %orig; }
- (id)GetAllChatNameWithValidNewBizMsg { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned int)GetAllValidNewBizMsgCount { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (unsigned int)GetValidNewBizMsgCountByChatName:(id)arg1 bizType:(long long)arg2 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)ModNewBizExtMsg:(id)arg1 bizId:(id)arg2 bizStatus:(long long)arg3 bizType:(long long)arg4 { %log; %orig; }
- (_Bool)addMessageToNewWCPayBizExtTable:(id)arg1 type:(long long)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2 bizType:(long long)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetLastNonSysMsg:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 hasError:(_Bool *)arg3 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)QueryMsgFromChat:(id)arg1 queryText:(id)arg2 FromID:(unsigned int)arg3 FromCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetFirstMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetLastMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)AddMsgPattern:(id)arg1 { %log; %orig; }
- (void)HandleMsgList:(id)arg1 MsgList:(id)arg2 { %log; %orig; }
- (void)setUploadContinueFieldNewMsg:(id)arg1 OldMsg:(id)arg2 { %log; %orig; }
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)ModMsgByBitSetWithoutNotify:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3 { %log; %orig; }
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)updateMsgForSecSystemMsg:(struct XmlReaderNode_t *)arg1 msgWrap:(id)arg2 { %log; %orig; }
- (void)onRevokeRoomHistory:(id)arg1 msg:(id)arg2 { %log; %orig; }
- (void)onSecMsg:(id)arg1 { %log; %orig; }
- (void)onRevokeMsg:(id)arg1 { %log; %orig; }
- (void)reloadRevokeMsgNode:(id)arg1 { %log; %orig; }
- (void)reloadRevokeMsg:(id)arg1 after:(unsigned int)arg2 { %log; %orig; }
- (void)onRevokeMsgCgiReturn:(id)arg1 { %log; %orig; }
- (_Bool)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (unsigned int)messageDataSize:(id)arg1 { %log; unsigned int r = %orig; NSLog(@" = %u", r); return r; }
- (void)AsyncOnModMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (_Bool)IsVideoMsgdDownloadIng:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)IsVideoMsgUploadIng:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)InitMsgMgr:(id)arg1 { %log; %orig; }
- (_Bool)SaveMesVoice:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)init { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (void)MainThreadNotifyToExt:(id)arg1 { %log; %orig; }
- (void)AsyncOnPushMsg:(id)arg1 isAlwaysShow:(_Bool)arg2 { %log; %orig; }
- (void)AsyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AsyncOnSendVoiceError:(id)arg1 MsgWrap:(id)arg2 ErroNO:(unsigned int)arg3 { %log; %orig; }
- (void)AsyncOnUnReadChange:(id)arg1 { %log; %orig; }
- (void)AsyncOnDelMsg:(id)arg1 DelAll:(_Bool)arg2 { %log; %orig; }
- (void)AsyncOnDelMsg:(id)arg1 { %log; %orig; }
- (void)AsyncOnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2 { %log; %orig; }
- (void)AsyncOnSpecialSession:(id)arg1 MsgList:(id)arg2 { %log; %orig; }
- (void)AsyncOnNotAddDBMessage:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2 NewMsgArriveNotify:(_Bool)arg3 { %log; %orig; }
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AsyncOnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2 { %log; %orig; }
- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)AsyncOnPreAddMsg:(id)arg1 MsgWrap:(id)arg2 { %log; %orig; }
- (void)UpdateVideoStatus:(id)arg1 { %log; %orig; }
- (_Bool)IsRecordMsgUploading:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (_Bool)IsImageMsgUploadIng:(id)arg1 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (id)escapeKeywordForQueryString:(id)arg1 { %log; id r = %orig; NSLog(@" = %@", r); return r; }
- (_Bool)isContact:(id)arg1 ConfirmToQueryString:(id)arg2 { %log; _Bool r = %orig; NSLog(@" = %d", r); return r; }
- (void)BackGroundAddHelloMsg:(id)arg1 { %log; %orig; }
- (NSString *)debugDescription { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (NSString *)description { %log; NSString * r = %orig; NSLog(@" = %@", r); return r; }
- (unsigned long long )hash { %log; unsigned long long  r = %orig; NSLog(@" = %llu", r); return r; }
- (Class )superclass { %log; Class  r = %orig; NSLog(@" = %@", r); return r; }
%end
*/

%hook CMessageMgr

- (void)CheckMessageStatus:(id)arg1 Msg:(id)arg2 {
    NSLog(@"arg1:%@\narg1Class:%@",arg1,[arg1 class]);
    NSLog(@"arg2:%@\narg1Class:%@",arg2,[arg2 class]);
    %orig;
}

%end

%hook WCRedEnvelopesReceiveHomeView

- (void)OnOpenRedEnvelopes {
    %orig;
    NSLog(@"TEST");
}

%end
