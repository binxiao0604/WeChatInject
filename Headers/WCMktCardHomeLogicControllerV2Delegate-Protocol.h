//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSIndexPath;

@protocol WCMktCardHomeLogicControllerV2Delegate <NSObject>
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedReloadCellWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableViewNeedDeleteWithIndexPath:(NSIndexPath *)arg1;
- (void)onTableViewNeedRefresh;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)vcStopLoading;
- (void)vcStartLoading;
- (MMUIViewController *)getViewController;
@end
