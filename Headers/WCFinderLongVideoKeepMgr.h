//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "ILiveTaskMgrExt-Protocol.h"
#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "IVOIPWindowExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MinimizationTransitionControllerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIView, WCFinderLongVideoPlayViewController;

@interface WCFinderLongVideoKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>
{
    WCFinderLongVideoPlayViewController *_vcContext;
    NSMutableDictionary *_caches;
    UIView *_inPictureCacheView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *inPictureCacheView; // @synthesize inPictureCacheView=_inPictureCacheView;
@property(retain, nonatomic) NSMutableDictionary *caches; // @synthesize caches=_caches;
@property(nonatomic) __weak WCFinderLongVideoPlayViewController *vcContext; // @synthesize vcContext=_vcContext;
- (void)onVoipWindowDidAppear;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMMLiveStartForNotifyOuter;
- (void)updateVcContextUsedRecord;
- (_Bool)videoPlayCompleted;
- (void)onEnterRecentUsedTask:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)updateMinizedVC:(id)arg1;
- (void)inPictureVC:(id)arg1 animated:(_Bool)arg2;
- (void)minizeVC:(id)arg1;
- (_Bool)isMinizing:(id)arg1;
- (_Bool)shouldBlockMinimizationEntryInInteractivePop;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(int)arg1;
- (void)updateSnapShotWithVC:(id)arg1;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)customMinimizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (id)customMaximizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (id)inPictureTaskData:(_Bool)arg1;
- (id)taskDataWithType:(int)arg1;
- (id)minimizeKey;
- (_Bool)setInPictureMute:(_Bool)arg1;
- (_Bool)resolveExternalConflicts;
- (void)removeInPictureTaskFor:(id)arg1;
- (_Bool)isInPicture;
- (void)removeVC:(id)arg1;
- (id)cachedPlayerVCForKey:(id)arg1;
- (void)cachePlayerVC:(id)arg1 forKey:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
