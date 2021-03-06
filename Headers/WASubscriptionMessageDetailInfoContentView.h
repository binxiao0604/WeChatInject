//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSString, WASubscriptionMessageDetailInfoContentViewSettings;

@interface WASubscriptionMessageDetailInfoContentView : MMUIView <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_detailList;
    MMTableView *_tableView;
    WASubscriptionMessageDetailInfoContentViewSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WASubscriptionMessageDetailInfoContentViewSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *detailList; // @synthesize detailList=_detailList;
- (double)calculateContentHeight:(double)arg1;
- (double)calculateHeightWith:(id)arg1 width:(double)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)loadAllSubviews;
- (id)initWithDetailList:(id)arg1 settings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

