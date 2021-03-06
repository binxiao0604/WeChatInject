//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderLiveExt-Protocol.h"

@class FinderLiveTabInfo, FinderStreamLayoutInfo, NSData, NSMutableArray, NSString;
@protocol WCFinderNearbyMoreLivePageViewModelDelegate;

@interface WCFinderNearbyMoreLivePageViewModel : NSObject <WCFinderLiveExt>
{
    _Bool _continueFlag;
    _Bool _isFetchingData;
    _Bool _hasFetchData;
    id <WCFinderNearbyMoreLivePageViewModelDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _refreshTime;
    FinderLiveTabInfo *_tabInfo;
    FinderLiveTabInfo *_jumpToTabInfo;
    unsigned long long _fromScene;
    NSData *_lastBuffer;
    NSMutableArray *_dataArray;
    FinderStreamLayoutInfo *_layoutInfo;
    long long _moreLiveDividerInsertBeforeIndex;
    unsigned long long _targetScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long targetScene; // @synthesize targetScene=_targetScene;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(nonatomic) long long moreLiveDividerInsertBeforeIndex; // @synthesize moreLiveDividerInsertBeforeIndex=_moreLiveDividerInsertBeforeIndex;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) FinderLiveTabInfo *jumpToTabInfo; // @synthesize jumpToTabInfo=_jumpToTabInfo;
@property(retain, nonatomic) FinderLiveTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderNearbyMoreLivePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id)liveList;
- (id)getUnreadDataItems;
- (void)updateState;
- (_Bool)updateStreamLayoutInfoIfNeed:(id)arg1;
- (_Bool)hasChangeDataWithOldArray:(id)arg1 dataArray:(id)arg2;
- (id)tranformDataItemArray:(id)arg1;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (void)refreshDataFromTop;
- (void)fetchMoreData;
- (id)dividerTitle;
- (id)contentVMAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSection;
- (_Bool)hasNoData;
- (void)registerLiveExtension:(id)arg1;
- (void)dealloc;
- (id)initWithLiveTabInfo:(id)arg1 fromScene:(unsigned long long)arg2 targetScene:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

