//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXTableViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WAProfileHeaderViewDelegate-Protocol.h"
#import "WAProfileLikeListCellDelegate-Protocol.h"
#import "WAProfilePreviewCellDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class ForwardMessageLogicController, NSDictionary, NSMutableArray, NSString, WAContact, WAProfileFooterView, WAProfileHeaderView, WAProfileLogicController;
@protocol WAProfileViewControllerDelegate;

@interface NewWAProfileViewController : ZZFLEXTableViewController <WCActionSheetDelegate, WAProfileHeaderViewDelegate, ForwardMessageLogicDelegate, WAProfileLikeListCellDelegate, WAProfilePreviewCellDelegate>
{
    ForwardMessageLogicController *_forwardLogic;
    WAProfileHeaderView *_headerView;
    NSMutableArray *_sectionHeaderList;
    WAProfileFooterView *_footerView;
    _Bool _isEnterStatReported;
    unsigned int _fromAppVersion;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    NSDictionary *_exposeExtraInfo;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    id <WAProfileViewControllerDelegate> _delegate;
    WAProfileLogicController *_logicController;
    NSString *_userName;
    WAContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnterStatReported; // @synthesize isEnterStatReported=_isEnterStatReported;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) WAProfileLogicController *logicController; // @synthesize logicController=_logicController;
@property(nonatomic) __weak id <WAProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(retain, nonatomic) NSDictionary *exposeExtraInfo; // @synthesize exposeExtraInfo=_exposeExtraInfo;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void)profileCommonReport:(unsigned long long)arg1;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2;
- (void)profileCommonReport:(unsigned long long)arg1 Result:(unsigned long long)arg2 configAction:(CDUnknownBlockType)arg3;
- (void)shareStatReport:(id)arg1 Result:(unsigned long long)arg2;
- (void)leaveProfileStatReport;
- (void)enterProfileStatReport:(unsigned int)arg1;
- (void)onJumpAllLikeList;
- (void)onMyLikeStatusChanged:(_Bool)arg1;
- (void)didEndPreviewVideo:(unsigned long long)arg1;
- (void)didBeginPreview:(_Bool)arg1;
- (id)getNavigationController;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onShareButtonClicked:(id)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)onTeenagerProtectLinkClicked:(unsigned long long)arg1;
- (void)onTagViewClicked:(id)arg1 tagType:(long long)arg2;
- (void)originalJump:(unsigned long long)arg1 JumpURL:(id)arg2;
- (void)showTipsViewController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getItemData;
- (void)onClickNavRightButton;
- (void)onBackButtonClicked;
- (void)onSelectedMoreInfoCell;
- (void)openBrandContact:(id)arg1;
- (void)onSelectRelatedWeAppCell;
- (void)onSelectRelatedBrandCell;
- (void)onSelectFeedBackButton;
- (void)initCustomNavItems;
- (void)updateHeaderViewWithEvaluateInfo;
- (void)reloadFooterView:(id)arg1;
- (void)initHeaderViewIfNeed:(id)arg1;
- (void)initTableView;
- (void)reloadData;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

