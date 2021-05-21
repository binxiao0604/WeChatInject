//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMFinderLiveTopCommentContentView, NSMutableArray, NSMutableSet;

@interface MMFinderLiveTopCommentLogic : NSObject
{
    _Bool _isAnimating;
    unsigned int _displayDuration;
    MMFinderLiveTopCommentContentView *_containerView;
    MMFinderLiveTaskId *_taskId;
    NSMutableArray *_notifyCommentItemArr;
    NSMutableSet *_commentMsgIdSet;
    NSMutableSet *_notifyProductIdSet;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int displayDuration; // @synthesize displayDuration=_displayDuration;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSMutableSet *notifyProductIdSet; // @synthesize notifyProductIdSet=_notifyProductIdSet;
@property(retain, nonatomic) NSMutableSet *commentMsgIdSet; // @synthesize commentMsgIdSet=_commentMsgIdSet;
@property(retain, nonatomic) NSMutableArray *notifyCommentItemArr; // @synthesize notifyCommentItemArr=_notifyCommentItemArr;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveTopCommentContentView *containerView; // @synthesize containerView=_containerView;
- (id)getCommentArrayFilterType:(id)arg1 validType:(unsigned int)arg2;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (void)addTopComment:(id)arg1;
- (_Bool)innerAppendNewNotifyComments:(id)arg1 filterRepeat:(_Bool)arg2;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (_Bool)appendTopComment:(id)arg1;
- (_Bool)startDisplayAnimated;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onExitLive;
- (void)onEnterLive;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1 taskId:(id)arg2;

@end

