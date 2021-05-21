//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavTagEditViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FavTagEditView, FavTagHintView, FavTagTableView, MMTableView, NSArray, NSMutableArray, NSString, UILabel;

@interface TagViewController : MMUIViewController <FavTagEditViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSArray *m_currentTags;
    NSArray *m_allTags;
    NSString *m_allTagTitle;
    NSString *m_editPlaceholer;
    MMTableView *m_tableView;
    NSMutableArray *m_arrShowCells;
    FavTagEditView *m_tagEditView;
    FavTagTableView *m_tagTableView;
    FavTagHintView *m_tagHintView;
    UILabel *m_warnLabel;
    _Bool _m_bShowAllTags;
    NSString *m_eduPlaceholer;
}

+ (id)genImage:(unsigned long long)arg1 isHighLight:(_Bool)arg2 isDarkMode:(_Bool)arg3;
+ (id)genImage:(unsigned long long)arg1 isHighLight:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bShowAllTags; // @synthesize m_bShowAllTags=_m_bShowAllTags;
@property(retain, nonatomic) NSString *m_allTagTitle; // @synthesize m_allTagTitle;
@property(retain, nonatomic) NSArray *m_allTags; // @synthesize m_allTags;
@property(retain, nonatomic) NSArray *m_currentTags; // @synthesize m_currentTags;
@property(retain, nonatomic) NSString *m_eduPlaceholer; // @synthesize m_eduPlaceholer;
@property(retain, nonatomic) NSString *m_editPlaceholer; // @synthesize m_editPlaceholer;
- (void)hideKeyboardOnScroll:(id)arg1;
- (void)cleanTextField:(id)arg1;
- (void)onTagUnHighLight:(id)arg1;
- (void)onTagHighLight:(id)arg1;
- (void)onDeleteButton:(id)arg1;
- (void)onAddButton:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldMoved:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelEditingAndExit;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resignKeyBoard;
- (void)tapKeyBoardNextButton;
- (void)onEditDone;
- (void)OnCancel;
- (void)manageTags;
- (void)editCancel;
- (void)editDone:(id)arg1;
- (void)updateCurrentTags:(id)arg1;
- (void)updateAllTags:(id)arg1;
- (void)addViewToCell:(id)arg1 accessoryType:(long long)arg2;
- (void)initTagView;
- (void)initRightBtn;
- (void)initLeftBtn;
- (id)rightBarButtonTitle;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
