//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderMoreSimilarViewModelDelegate-Protocol.h"

@class NSString, WCFinderFeedListView, WCFinderMoreSimilarViewModel;
@protocol WCFinderMoreSimilarViewControllerDelegate;

@interface WCFinderMoreSimilarViewController : MMUIViewController <WCFinderMoreSimilarViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol>
{
    id <WCFinderMoreSimilarViewControllerDelegate> _delegate;
    WCFinderMoreSimilarViewModel *_viewModel;
    WCFinderFeedListView *_feedListView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderMoreSimilarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderMoreSimilarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)updateFooterView;
- (void)finderMoreSimilarFinishFetchFeedWithError;
- (void)finderMoreSimilarFinishFetchFeedAppedFromIdx:(long long)arg1 toIdx:(long long)arg2;
- (_Bool)useTransparentNavibar;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollToTargetVM;
- (void)setupFeedListView;
- (void)viewDidLoad;
- (id)initWithLayoutVM:(id)arg1 targetVM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

