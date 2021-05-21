//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "TextStateLikeCellContentViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString, TextStatusGetSelfLikedsResp, UILabel, UIScreenEdgePanGestureRecognizer, WCTimeLineFooterView;

@interface TextStateLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, TextStateLikeCellContentViewDelegate, MMRefreshTableFooterDelegate>
{
    _Bool _isDarkMode;
    _Bool _isRemoteData;
    _Bool _isLoadingData;
    double _cellHeight;
    MMTableView *_tableView;
    NSString *_statusID;
    UILabel *_emptyLabel;
    WCTimeLineFooterView *_footerView;
    TextStatusGetSelfLikedsResp *_currentSelfLikedsResp;
    NSMutableArray *_arrLikeInfo;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(retain, nonatomic) NSMutableArray *arrLikeInfo; // @synthesize arrLikeInfo=_arrLikeInfo;
@property(retain, nonatomic) TextStatusGetSelfLikedsResp *currentSelfLikedsResp; // @synthesize currentSelfLikedsResp=_currentSelfLikedsResp;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool isRemoteData; // @synthesize isRemoteData=_isRemoteData;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onClickHeadImageWithLikeInfo:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onNoMoreData;
- (void)onRecieveLikedsRespWithLikeInfos:(id)arg1;
- (void)loadMoreHistoryData;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)initGesture;
- (void)initData;
- (void)initView;
- (void)initFooterView;
- (void)viewDidLoad;
- (id)initWithTextStatusID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

