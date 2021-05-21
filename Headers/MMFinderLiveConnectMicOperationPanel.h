//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveConnectMicContainerViewDelegate-Protocol.h"
#import "MMFinderLiveConnectedMicUserCellViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMFinderLiveConnectMicAnchorContainerView, MMFinderLiveConnectMicAudienceContainerView, MMFinderLiveConnectMicBaseContainerView, MMFinderLiveConnectMicTabView, MMFinderLiveTaskId, MMUnderlineTabsView, NSString, UIView;
@protocol MMFinderLiveConnectMicOperationPanelDelegate;

@interface MMFinderLiveConnectMicOperationPanel : MMPageSheetBaseView <UIGestureRecognizerDelegate, MMFinderLiveConnectedMicUserCellViewDelegate, MMFinderLiveConnectMicContainerViewDelegate>
{
    _Bool _enableOperation;
    _Bool _isShowing;
    id <MMFinderLiveConnectMicOperationPanelDelegate> _actionDelegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_panelView;
    MMUnderlineTabsView *_tabsView;
    MMFinderLiveConnectMicTabView *_audienceTabView;
    MMFinderLiveConnectMicTabView *_anchorTabView;
    MMFinderLiveConnectMicAudienceContainerView *_audienceContainerView;
    MMFinderLiveConnectMicAnchorContainerView *_anchorContainerView;
    MMFinderLiveConnectMicBaseContainerView *_currentContainerView;
}

+ (id)TabItemWithTabView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicBaseContainerView *currentContainerView; // @synthesize currentContainerView=_currentContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicAnchorContainerView *anchorContainerView; // @synthesize anchorContainerView=_anchorContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicAudienceContainerView *audienceContainerView; // @synthesize audienceContainerView=_audienceContainerView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *anchorTabView; // @synthesize anchorTabView=_anchorTabView;
@property(retain, nonatomic) MMFinderLiveConnectMicTabView *audienceTabView; // @synthesize audienceTabView=_audienceTabView;
@property(retain, nonatomic) MMUnderlineTabsView *tabsView; // @synthesize tabsView=_tabsView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool enableOperation; // @synthesize enableOperation=_enableOperation;
@property(nonatomic) __weak id <MMFinderLiveConnectMicOperationPanelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onFinderLiveConnectMicContainerViewOpenSearchOnlineAnchor;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)closeAction;
- (id)configUnderlineTabsView;
@property(readonly, nonatomic) unsigned long long currentTabType;
- (void)pageSheetDidClose;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillAppear;
- (void)changeToContainerWithType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)showPanelWithTargetTabType:(unsigned long long)arg1;
- (void)scrollPanelToTopWithTabType:(unsigned long long)arg1;
- (void)updateAudiencePanelWithConnectingUserList:(id)arg1 invalidUserList:(id)arg2;
- (void)updatePanelViews;
- (void)layoutSubviews;
- (id)makeCloseButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
