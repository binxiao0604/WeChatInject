//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedContentVM;

@protocol WCFinderTopicListDetailViewModelDelegate <NSObject>

@optional
- (void)onFinderTopicListFeedWithTid:(NSString *)arg1 pinToTop:(_Bool)arg2 errorCode:(int)arg3;
- (void)onFinderTopicListBeDeletedWith:(WCFinderFeedContentVM *)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListNextPageError;
- (void)onFinderTopicListResultChanged;
- (void)onFinderTopicListResultNoMore;
@end

