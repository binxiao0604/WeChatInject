//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;
@protocol WCFinderFavListDetailViewModelDelegate;

@interface WCFinderFavListDetailViewModel : NSObject
{
    _Bool _stopFetchData;
    _Bool _queryContinueFlag;
    unsigned long long _refreshTime;
    id <WCFinderFavListDetailViewModelDelegate> _delegate;
    NSMutableArray *_allSearchDataItems;
    NSData *_lastBuffer;
}

+ (id)initWithLastBuffer:(id)arg1 queryContinueFlag:(_Bool)arg2 dataSources:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool stopFetchData; // @synthesize stopFetchData=_stopFetchData;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(nonatomic) __weak id <WCFinderFavListDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
- (unsigned long long)feedViewControllerScene;
- (long long)numberOfSection;
- (long long)contentIndexOfTid:(id)arg1;
- (void)stopPreloadVideoItem:(id)arg1;
- (void)preloadVideoItems:(id)arg1;
- (_Bool)isNoMoreData;
- (void)onQueryNextPageDataItems;
- (id)contentVMWithTid:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;

@end

