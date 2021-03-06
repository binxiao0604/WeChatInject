//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMFinderShareSettingPrimaryCellDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCFinderLiveRosterSelectDelegate-Protocol.h"

@class MMFinderShareSettingPrimaryCell, MMTableView, NSArray, NSMutableArray, NSString, UIView;
@protocol MMFinderLiveShareSettingViewControllerDelegate;

@interface MMFinderLiveShareSettingViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderShareSettingPrimaryCellDelegate, WCFinderLiveRosterSelectDelegate, MultiSelectContactsViewControllerDelegate>
{
    _Bool _isVisibilityDoneButtonEnable;
    int _currVisibilityMode;
    id <MMFinderLiveShareSettingViewControllerDelegate> _actionDelegate;
    NSMutableArray *_allVisibilityFileList;
    NSMutableArray *_chooseContactIdList;
    NSArray *_redPacketChooseIdList;
    unsigned long long _contactSelectLimit;
    MMTableView *_tableView;
    NSMutableArray *_visibilityIdList;
    long long _lastSelectedMode;
    MMFinderShareSettingPrimaryCell *_publicCell;
    MMFinderShareSettingPrimaryCell *_anchorShareCell;
    MMFinderShareSettingPrimaryCell *_groupCell;
    NSMutableArray *_primaryCellArray;
    UIView *_tableViewFooter;
    double _subSettingTableHeight;
    double _topSettingHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double topSettingHeight; // @synthesize topSettingHeight=_topSettingHeight;
@property(nonatomic) double subSettingTableHeight; // @synthesize subSettingTableHeight=_subSettingTableHeight;
@property(retain, nonatomic) UIView *tableViewFooter; // @synthesize tableViewFooter=_tableViewFooter;
@property(retain, nonatomic) NSMutableArray *primaryCellArray; // @synthesize primaryCellArray=_primaryCellArray;
@property(retain, nonatomic) MMFinderShareSettingPrimaryCell *groupCell; // @synthesize groupCell=_groupCell;
@property(retain, nonatomic) MMFinderShareSettingPrimaryCell *anchorShareCell; // @synthesize anchorShareCell=_anchorShareCell;
@property(retain, nonatomic) MMFinderShareSettingPrimaryCell *publicCell; // @synthesize publicCell=_publicCell;
@property(nonatomic) long long lastSelectedMode; // @synthesize lastSelectedMode=_lastSelectedMode;
@property(nonatomic) int currVisibilityMode; // @synthesize currVisibilityMode=_currVisibilityMode;
@property(retain, nonatomic) NSMutableArray *visibilityIdList; // @synthesize visibilityIdList=_visibilityIdList;
@property(nonatomic) _Bool isVisibilityDoneButtonEnable; // @synthesize isVisibilityDoneButtonEnable=_isVisibilityDoneButtonEnable;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long contactSelectLimit; // @synthesize contactSelectLimit=_contactSelectLimit;
@property(retain, nonatomic) NSArray *redPacketChooseIdList; // @synthesize redPacketChooseIdList=_redPacketChooseIdList;
@property(retain, nonatomic) NSMutableArray *chooseContactIdList; // @synthesize chooseContactIdList=_chooseContactIdList;
@property(retain, nonatomic) NSMutableArray *allVisibilityFileList; // @synthesize allVisibilityFileList=_allVisibilityFileList;
@property(nonatomic) __weak id <MMFinderLiveShareSettingViewControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)onFinderShareSettingPrimaryCellToggleCellArrowView:(_Bool)arg1;
- (void)onFinderShareSettingClicked:(id)arg1 withVisibilityMode:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)calculateHeightForRosterIds;
- (double)calculateHeightForChatRoom;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onTapDone;
- (void)onTapCancel;
- (void)shouldShowSubSettingTableView:(_Bool)arg1;
- (void)layoutTableHeight;
- (void)layoutSubSettingSection;
- (void)layoutTopSettingSection;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (long long)preferredStatusBarStyle;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (id)initWithVisibilityMode:(int)arg1 fileList:(id)arg2 andChoosenIdList:(id)arg3 contactIdList:(id)arg4 redPacketChooseIdList:(id)arg5 contactSelectLimit:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

