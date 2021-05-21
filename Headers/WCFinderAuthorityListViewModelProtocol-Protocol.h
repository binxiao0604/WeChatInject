//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol WCFinderAuthorityListViewModelDelegate, WCFinderAuthorityListViewModelSearchDelegate;

@protocol WCFinderAuthorityListViewModelProtocol <NSObject>
@property(readonly, nonatomic) NSArray *contacts;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelDelegate> delegate;
- (_Bool)hasMoreData;
- (_Bool)showAddContactButton;
- (NSString *)emptyTips;
- (NSString *)guideTips;
- (void)batchConfigAddItems:(NSArray *)arg1 delItems:(NSArray *)arg2;
- (void)requestLoadNextPageData;
- (void)requestLoadFirstPageData;

@optional
- (double)fixDisplayOffsetY;
- (void)requestNextSearchPageData;
- (void)searchWithKeyword:(NSString *)arg1;
- (_Bool)searchResultHasMoreData;
- (_Bool)isDataEmpty;
@end

