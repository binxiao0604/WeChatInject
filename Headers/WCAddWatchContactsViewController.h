//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTableView, NSArray, NSMutableArray, NSString, UIButton, UITextField, WCSettingWatchContactsViewController;

@interface WCAddWatchContactsViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    NSArray *_recentContactsArr;
    WCSettingWatchContactsViewController *_vc;
    NSMutableArray *_searchedContactsArr;
    UITextField *_searchField;
    MMTableView *_contactTableView;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMTableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSMutableArray *searchedContactsArr; // @synthesize searchedContactsArr=_searchedContactsArr;
@property(nonatomic) __weak WCSettingWatchContactsViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) NSArray *recentContactsArr; // @synthesize recentContactsArr=_recentContactsArr;
- (void)doSearch:(id)arg1;
- (void)delaySearch:(id)arg1;
- (void)cancelChooseContacts;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textFieldDidChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshTableFooterView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initUI;
- (void)setNavItemWithTitle:(id)arg1 action:(SEL)arg2;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

