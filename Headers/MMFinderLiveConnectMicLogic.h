//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveConnectMicLogic.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "MMFinderLiveConnectMicAllUserInfoViewDelegate-Protocol.h"
#import "MMFinderLiveConnectMicOperationPanelDelegate-Protocol.h"
#import "MMFinderLiveConnectMicUserViewDelegate-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "MMLiveViewExt-Protocol.h"
#import "WCLiveActionSheetDelegate-Protocol.h"

@class MMFinderLiveConnectMicOperationPanel, MMFinderLiveConnectMicUser, MMFinderLiveOperationView, MMFinderLiveTaskId, MMTimer, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, OrderedDictionary, UIView, WCLiveActionSheet;
@protocol MMFinderLiveConnectMicActionDelegate;

@interface MMFinderLiveConnectMicLogic : MMLiveConnectMicLogic <MMFinderLiveConnectMicUserViewDelegate, WCLiveActionSheetDelegate, MMFinderLiveConnectMicOperationPanelDelegate, MMFinderLiveConnectMicAllUserInfoViewDelegate, MMLiveViewExt, MMLiveTaskMgrExt, IRecordPermissionCheckExt>
{
    _Bool _recordPermissionCheckOK;
    id <MMFinderLiveConnectMicActionDelegate> _actionDelegate;
    MMFinderLiveConnectMicUser *_connectMicAnchorUser;
    OrderedDictionary *_applyConnectMicAudienceDic;
    NSMutableSet *_unreadApplyConnectMicAudienceSet;
    OrderedDictionary *_applyConnectMicAnchorDic;
    NSMutableSet *_unreadApplyConnectMicAnchorSet;
    NSMutableDictionary *_allConnectMicAnchorUserIdToRoomId;
    unsigned long long _currentCdnVideoDisplayType;
    unsigned long long _maxConnectMicAudienceSequence;
    WCLiveActionSheet *_applyConnectMicActionSheet;
    WCLiveActionSheet *_cancelOrStopConnectMicActionSheet;
    MMTimer *_activateLiveConnectMicTimer;
    NSMutableDictionary *_closeInfoDic;
    MMFinderLiveConnectMicOperationPanel *_connectMicOperationPanel;
    OrderedDictionary *_cachedConnectMicAudienceDic;
    OrderedDictionary *_connectMicAudienceDic;
    OrderedDictionary *_waitConnectAudienceDic;
    MMFinderLiveConnectMicUser *_connectMicAudienceSelfUser;
    NSMutableArray *_connectMicAudienceListForCDNUser;
    MMTimer *_anchorCheckAcceptedAudienceTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *anchorCheckAcceptedAudienceTimer; // @synthesize anchorCheckAcceptedAudienceTimer=_anchorCheckAcceptedAudienceTimer;
@property(retain, nonatomic) NSMutableArray *connectMicAudienceListForCDNUser; // @synthesize connectMicAudienceListForCDNUser=_connectMicAudienceListForCDNUser;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicAudienceSelfUser; // @synthesize connectMicAudienceSelfUser=_connectMicAudienceSelfUser;
@property(retain, nonatomic) OrderedDictionary *waitConnectAudienceDic; // @synthesize waitConnectAudienceDic=_waitConnectAudienceDic;
@property(retain, nonatomic) OrderedDictionary *connectMicAudienceDic; // @synthesize connectMicAudienceDic=_connectMicAudienceDic;
@property(retain, nonatomic) OrderedDictionary *cachedConnectMicAudienceDic; // @synthesize cachedConnectMicAudienceDic=_cachedConnectMicAudienceDic;
@property(retain, nonatomic) MMFinderLiveConnectMicOperationPanel *connectMicOperationPanel; // @synthesize connectMicOperationPanel=_connectMicOperationPanel;
@property(retain, nonatomic) NSMutableDictionary *closeInfoDic; // @synthesize closeInfoDic=_closeInfoDic;
@property(retain, nonatomic) MMTimer *activateLiveConnectMicTimer; // @synthesize activateLiveConnectMicTimer=_activateLiveConnectMicTimer;
@property(retain, nonatomic) WCLiveActionSheet *cancelOrStopConnectMicActionSheet; // @synthesize cancelOrStopConnectMicActionSheet=_cancelOrStopConnectMicActionSheet;
@property(retain, nonatomic) WCLiveActionSheet *applyConnectMicActionSheet; // @synthesize applyConnectMicActionSheet=_applyConnectMicActionSheet;
@property(nonatomic) unsigned long long maxConnectMicAudienceSequence; // @synthesize maxConnectMicAudienceSequence=_maxConnectMicAudienceSequence;
@property(nonatomic) _Bool recordPermissionCheckOK; // @synthesize recordPermissionCheckOK=_recordPermissionCheckOK;
@property(nonatomic) unsigned long long currentCdnVideoDisplayType; // @synthesize currentCdnVideoDisplayType=_currentCdnVideoDisplayType;
@property(retain, nonatomic) NSMutableDictionary *allConnectMicAnchorUserIdToRoomId; // @synthesize allConnectMicAnchorUserIdToRoomId=_allConnectMicAnchorUserIdToRoomId;
@property(retain, nonatomic) NSMutableSet *unreadApplyConnectMicAnchorSet; // @synthesize unreadApplyConnectMicAnchorSet=_unreadApplyConnectMicAnchorSet;
@property(retain, nonatomic) OrderedDictionary *applyConnectMicAnchorDic; // @synthesize applyConnectMicAnchorDic=_applyConnectMicAnchorDic;
@property(retain, nonatomic) NSMutableSet *unreadApplyConnectMicAudienceSet; // @synthesize unreadApplyConnectMicAudienceSet=_unreadApplyConnectMicAudienceSet;
@property(retain, nonatomic) OrderedDictionary *applyConnectMicAudienceDic; // @synthesize applyConnectMicAudienceDic=_applyConnectMicAudienceDic;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *connectMicAnchorUser; // @synthesize connectMicAnchorUser=_connectMicAnchorUser;
@property(nonatomic) __weak id <MMFinderLiveConnectMicActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(_Bool)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(struct CGRect)arg2;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapSendRedPacketWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapAvatarWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewSwitchCameraWithUserInfo:(id)arg1;
- (void)onMMFinderLiveConnectMicAllUserInfoViewTapHangupWithUserInfo:(id)arg1;
- (id)getRealAcceptedUserForAnchorFromUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelCancelConnectToUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelCloseConnectToUser:(id)arg1;
- (void)handleAcceptLiveMicResult:(_Bool)arg1 error:(id)arg2 sessionId:(id)arg3 userInfo:(id)arg4;
- (void)onMMFinderLiveConnectMicOperationPanelApplyConnectToUser:(id)arg1;
- (void)realAcceptConnectMicWithUser:(id)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelAcceptConnectFromUser:(id)arg1;
- (id)onMMFinderLiveConnectMicOperationPanelGetConnectMicUserListWithType:(unsigned long long)arg1;
- (_Bool)onMMFinderLiveConnectMicOperationPanelShouldShowRedDotAtTab:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicOperationPanelClose;
- (void)actionSheet:(id)arg1 clickedRichTitleWithURL:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMMFinderLiveConnectMicUserViewTapped;
- (void)onMMFinderLiveConnectMicUserViewTapHangup;
- (void)onMMFinderLiveConnectMicUserViewMoveEnd;
@property(readonly, nonatomic) _Bool isConnectingMic;
@property(readonly, nonatomic) UIView *containerView;
- (id)getFinderLiveTask;
@property(readonly, nonatomic) MMFinderLiveOperationView *finderLiveOperationView;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
- (void)checkAllWaitConnectMicAudienceUsers;
- (void)stopAnchorCheckAcceptedAudienceTimer;
- (void)startAnchorCheckAcceptedAudienceTimer;
- (void)delayStopAnchorConnectMicWithSessionId:(id)arg1;
- (void)activateLiveConnectMic;
- (void)stopActivateLiveConnectMicTimer;
- (void)startActivateLiveConnectMicTimer;
- (void)stopConnectMicManuallyWithUserInfo:(id)arg1;
- (void)updateCloseInfoDicWithSessionId:(id)arg1 connectMicUserInfo:(id)arg2 shouldResetCount:(_Bool)arg3 shouldRemove:(_Bool)arg4;
- (void)sendCloseConnectMicCgiWithConnectMicUser:(id)arg1 andCloseScene:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendCloseConnectMicCgiWithConnectMicUser:(id)arg1 andCloseScene:(long long)arg2;
- (void)checkAndClearConnectMicUserTipViewWithUserInfo:(id)arg1;
- (void)checkAndNotifyConnectMicEndWithUserInfo:(id)arg1;
- (void)checkAndNotifyConnectMicEndWithOtherAnchor;
- (void)notifyConnectMicWithUserInfo:(id)arg1;
- (void)notifyConnectMicWithOtherAnchor;
- (void)updateConnectMicButtonBadge;
- (void)clearApplyConnectMicUserList;
- (void)checkAndDismissAllActionSheet;
- (void)realStopConnectMicWithTask:(id)arg1;
- (void)stopConnectMicWithConnectMicUser:(id)arg1 andCloseScene:(long long)arg2;
- (void)checkAndStopConnectMicForAudience;
- (void)connectMicAudienceTimeOutWithUserInfo:(id)arg1;
- (void)checkConnectingMicTimeOutForAnchorMic;
- (void)cancelConnectMicWithUserInfo:(id)arg1 showToast:(_Bool)arg2 isTimeOut:(_Bool)arg3;
- (void)checkAndCancelConnectMicForAnchor;
- (void)checkAndCancelConnectMicForAudience;
- (id)applyConnectMicFailedToastMsgForErrorCode:(long long)arg1;
- (_Bool)isApplyConnectMicFailedToastErrorCode:(long long)arg1;
- (void)handleApplyLiveMicResult:(_Bool)arg1 error:(id)arg2 sessionId:(id)arg3 userInfo:(id)arg4;
- (void)startApplyConnectMicWithVideo:(_Bool)arg1;
- (void)showCancelApplyOrStopConnectActionSheet;
- (_Bool)tryStopConnectMicWithCloseScene:(long long)arg1;
- (_Bool)tryStopConnectMic;
- (void)connectMicAction;
- (void)switchCamera;
- (void)changeAndUpdateConnectMicButtonStateHighlighted;
- (void)clearConnectMicAudienceSelfUserInfoWithToast:(_Bool)arg1;
- (void)clearConnectMicAnchorUserInfoWithToast:(_Bool)arg1;
- (void)clearConnectMicAnchorUserInfo;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)arg1;
- (void)handleConnectToOtherRoomResult:(_Bool)arg1 userId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)arg1;
- (void)handleUser:(id)arg1 videoAvailable:(_Bool)arg2;
- (void)handleUser:(id)arg1 audioAvailable:(_Bool)arg2;
- (void)onTrtcSwitchRoleError:(int)arg1 errMsg:(id)arg2;
- (void)onTrtcSwitchRoleFinished;
- (void)notifyCanApplyConnectMicValueChanged:(_Bool)arg1;
- (void)checkAndUpdateLiveView;
- (void)changeOrUpdateConnectMicMode;
- (void)checkAndShowConnectMicVideoOperationView;
- (id)getConnectedMicUserInfoList;
- (void)showAudienceSelfConnectMicUserViewWithState:(unsigned long long)arg1;
- (void)showAnchorConnectMicUserViewWithState:(unsigned long long)arg1;
- (void)updateCanApplyConnectMic:(_Bool)arg1 fromJoinLive:(_Bool)arg2;
- (void)enableApplyConnectMic:(_Bool)arg1;
- (void)checkConnectMicUserInfoAndVideoSizeForCdnAudience;
- (void)updateConnectMicAudienceListForCDNUser;
- (void)clearConnectMicAudienceListForCDNUser;
- (void)receiveAnchorCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveAnchorConnectMicStatus:(long long)arg1 connectMicFinderContact:(id)arg2 sessionId:(id)arg3 sequence:(unsigned long long)arg4 sdkUserId:(id)arg5 fromJoinLive:(_Bool)arg6;
- (void)receiveAnchorCloseConnectMicFromContact:(id)arg1 sessionId:(id)arg2;
- (void)receiveAnchorAcceptConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 sdkRoomId:(unsigned int)arg3 sdkPkSign:(id)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6;
- (void)receiveAnchorApplyConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 sdkRoomId:(unsigned int)arg3 sessionId:(id)arg4;
- (void)receiveConnectMicUserForAudience:(id)arg1;
- (void)receiveSelfConnectMicUserInfo:(id)arg1 fromJoinLive:(_Bool)arg2;
- (void)receiveConnectMicUserForAnchor:(id)arg1 expiredTime:(unsigned long long)arg2 fromJoinLive:(_Bool)arg3;
- (void)receiveConnectMicFinderContact:(id)arg1 withVideo:(_Bool)arg2 sdkUserId:(id)arg3 expiredTime:(unsigned long long)arg4 sessionId:(id)arg5 sequence:(unsigned long long)arg6 fromJoinLive:(_Bool)arg7;
- (void)receiveConnectMicLiveSdkInfo:(id)arg1 expiredTime:(unsigned long long)arg2 sessionId:(id)arg3 sequence:(unsigned long long)arg4;
- (void)receiveApplyConnectMicFromContact:(id)arg1 sdkUserId:(id)arg2 sessionId:(id)arg3 andUseVideo:(_Bool)arg4;
- (void)receiveCloseConnectMicMsgForAudienceWithSessionId:(id)arg1;
- (void)receiveCloseConnectMicMsgWithContact:(id)arg1 sessionId:(id)arg2;
- (id)getConnectMicAudienceUserListWithApplyAudience:(_Bool)arg1;
- (_Bool)removeWaitConnectAudienceWithSessionId:(id)arg1;
- (_Bool)addWaitConnectAudienceWithUserInfo:(id)arg1 updatePanel:(_Bool)arg2;
- (_Bool)addWaitConnectAudienceWithUserInfo:(id)arg1;
- (_Bool)removeConnectMicAudienceWithSessionId:(id)arg1;
- (_Bool)addConnectMicAudienceWithUserInfo:(id)arg1;
- (id)findConnectMicUserInfoInDic:(id)arg1 bySdkUserId:(id)arg2;
- (void)addCachedConnectMicAudienceWithUserInfo:(id)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

