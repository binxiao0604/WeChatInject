//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMLiveTaskMgrExt-Protocol.h"

@class MMLiveTaskId, NSArray, NSMutableDictionary, NSString;

@interface MMLivePerformanceOverlay : UIView <MMLiveTaskMgrExt>
{
    MMLiveTaskId *_taskId;
    NSMutableDictionary *_performanceLabels;
    NSArray *_performanceLabelNames;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSArray *performanceLabelNames; // @synthesize performanceLabelNames=_performanceLabelNames;
@property(retain, nonatomic) NSMutableDictionary *performanceLabels; // @synthesize performanceLabels=_performanceLabels;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2;
- (void)updatePerformanceLabel:(id)arg1;
- (void)layoutUI;
- (void)setupViews;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

