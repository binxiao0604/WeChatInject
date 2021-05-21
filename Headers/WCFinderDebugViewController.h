//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMPickLocationViewControllerDelegate-Protocol.h"
#import "MMRegionPickerViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMPickLocationViewController, NSString, UITableView;

@interface WCFinderDebugViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMRegionPickerViewControllerDelegate, MMPickLocationViewControllerDelegate>
{
    UITableView *_tableView;
    MMPickLocationViewController *_locaitonPicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPickLocationViewController *locaitonPicker; // @synthesize locaitonPicker=_locaitonPicker;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

