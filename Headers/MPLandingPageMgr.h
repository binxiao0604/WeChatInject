//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MPLandingPageMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>
{
    NSMutableDictionary *_dictMinimizedPages;
}

+ (id)landingPageMinimizeDataFromTaskData:(id)arg1;
+ (void)updateTaskData:(id)arg1 pageObj:(id)arg2 minimizeType:(int)arg3;
+ (id)taskDataFromPageObj:(id)arg1 minimizeType:(int)arg2;
+ (id)genMinimizationMPLandingTaskKey;
+ (id)taskBizIdFromPageObj:(id)arg1;
+ (id)taskKeyFromPageObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictMinimizedPages; // @synthesize dictMinimizedPages=_dictMinimizedPages;
- (_Bool)isOpenVideoLandingPageSwitch;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onTaskEntryExposed:(id)arg1;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(int)arg2 mpLandingVC:(id)arg3;
- (void)tryRescueMinimizeLandingPgeObjWhenViewDidBeDismissed:(id)arg1;
- (void)releaseMinimizeViewControler:(id)arg1;
- (void)unminimizeViewControler:(id)arg1;
- (void)minimizeLandingPageObj:(id)arg1 minimizeType:(int)arg2;
- (_Bool)canMinimizeLandingPaegObj:(id)arg1 pendingTaskContext:(id)arg2;
- (_Bool)isLandingPageHasMinimizedTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

