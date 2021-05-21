//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveOperationView, MMLiveTaskId;
@protocol MMLiveConnectMicActionDelegate;

@interface MMLiveConnectMicLogic : NSObject
{
    _Bool _networkReachable;
    id <MMLiveConnectMicActionDelegate> _actionDelegate;
    MMLiveTaskId *_taskId;
    MMLiveOperationView *_operationView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool networkReachable; // @synthesize networkReachable=_networkReachable;
@property(retain, nonatomic) MMLiveOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMLiveConnectMicActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)showToastWithTitle:(id)arg1 shouldVibrate:(_Bool)arg2;
- (void)showToastWithTitle:(id)arg1;
- (id)generateReportHandler;
- (_Bool)tryStopConnectMic;
- (void)connectMicAction;
- (void)handleSEIConnectMicUserInfoListUpdated:(id)arg1;
- (void)handleConnectToOtherRoomResult:(_Bool)arg1 userId:(id)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)handleRemoteUserEnterRoomWithSdkUserId:(id)arg1;
- (void)handleUser:(id)arg1 videoAvailable:(_Bool)arg2;
- (void)handleUser:(id)arg1 audioAvailable:(_Bool)arg2;
- (void)onTrtcSwitchRoleError:(int)arg1 errMsg:(id)arg2;
- (void)onTrtcSwitchRoleFinished;
- (id)initWithTaskId:(id)arg1;

@end

