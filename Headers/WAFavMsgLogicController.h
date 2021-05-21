//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "WAFavMsgManagerExt-Protocol.h"

@class CMessageWrap, MMTimer, NSMutableArray, NSMutableSet, NSString, WAFavMsgReportController;

@interface WAFavMsgLogicController : BaseMsgContentLogicController <WAFavMsgManagerExt>
{
    WAFavMsgReportController *m_reportController;
    NSMutableArray *m_arrMsgId;
    NSMutableSet *m_setAppearedMsg;
    _Bool m_isPopOverViewShown;
    NSMutableArray *m_arrMsgToAdd;
    MMTimer *m_timer;
    unsigned int m_enterTimestamp;
    _Bool m_hasStayedForThreeSecond;
    MMTimer *m_weappTimer;
    CMessageWrap *m_clickedMessage;
    CMessageWrap *_lastMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *lastMessage; // @synthesize lastMessage=_lastMessage;
- (void)didReceiveNewMsg:(id)arg1;
- (void)didSetConfig:(id)arg1 scene:(int)arg2;
- (unsigned int)getOpLocationById:(unsigned int)arg1;
- (id)maskMessageContent:(id)arg1;
- (void)reportMessageReadInTime;
- (void)reportMessagesReadInTime;
- (void)onWillPushFromNavigationController;
- (void)onPopFromNavigationController;
- (void)onDeleteMsg:(id)arg1;
- (void)DidAddMsg:(id)arg1;
- (void)onClickUnreadTip;
- (void)onReturnFavWeAppMsgVCFromSubVC;
- (void)onFavWeAppMsgAppear:(id)arg1;
- (void)onRejectFavWeAppMsg:(id)arg1 WithReasons:(id)arg2;
- (void)onPopOverViewWillDismiss;
- (void)onRejectFavWeAppMsgPopOverWithMessage:(id)arg1;
- (void)onEnterFavWeAppMsgSetting;
- (void)onExposeFavWeAppMsg:(id)arg1;
- (void)openWaApp:(id)arg1;
- (void)onOpenWeappProfileWithAppid:(id)arg1 msgWrap:(id)arg2;
- (void)removeRepeatedIdMessage:(id)arg1;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (_Bool)ShouldShowSearchCompleteRightBarButton;
- (id)GetUsrTitle;
- (void)CustomToolViewEX:(id)arg1;
- (_Bool)isShowHeadImage:(id)arg1;
- (void)dealloc;
- (void)initViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

