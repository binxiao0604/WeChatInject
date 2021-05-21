//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMCPLabel, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMTableView, MMUIView, NSString;
@protocol MMLiveRewardRecipientSelectionLogicDelegate;

@interface MMLiveRewardRecipientSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMFinderLiveTaskId *_taskId;
    MMTableView *_contactTableView;
    id <MMLiveRewardRecipientSelectionLogicDelegate> _logicDelegate;
    MMLiveHalfScreenTitleBarView *_mainTitleBar;
    MMUIView *_titleBarView;
    MMCPLabel *_titleLabel;
    MMUIView *_titleSeperatorLiveView;
    MMUIView *_contentView;
    MMUIView *_seperatorLiveView;
    MMUIView *_footerCancelView;
    MMCPLabel *_footerCancelLabel;
    MMFinderLiveTaskId *_liveTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMCPLabel *footerCancelLabel; // @synthesize footerCancelLabel=_footerCancelLabel;
@property(retain, nonatomic) MMUIView *footerCancelView; // @synthesize footerCancelView=_footerCancelView;
@property(retain, nonatomic) MMUIView *seperatorLiveView; // @synthesize seperatorLiveView=_seperatorLiveView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *titleSeperatorLiveView; // @synthesize titleSeperatorLiveView=_titleSeperatorLiveView;
@property(retain, nonatomic) MMCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar; // @synthesize mainTitleBar=_mainTitleBar;
@property(nonatomic) __weak id <MMLiveRewardRecipientSelectionLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMTableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(readonly, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)liveTask;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)reloadData;
- (void)initView;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

