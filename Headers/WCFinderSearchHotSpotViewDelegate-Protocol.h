//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderSearchHotSpotView, WCFinderSearchHotWord, WCFinderSearchRecord;

@protocol WCFinderSearchHotSpotViewDelegate <NSObject>

@optional
- (unsigned long long)finderSearchViewGetViewControllerCommentScene;
- (void)finderSearchViewDidDeleteAllHistory:(WCFinderSearchHotSpotView *)arg1;
- (void)finderSearchView:(WCFinderSearchHotSpotView *)arg1 didDeleteHistory:(WCFinderSearchRecord *)arg2;
- (void)finderSearchView:(WCFinderSearchHotSpotView *)arg1 didSelectedHistory:(WCFinderSearchRecord *)arg2;
- (void)finderSearchView:(WCFinderSearchHotSpotView *)arg1 didSelectedHotSpot:(WCFinderSearchHotWord *)arg2;
@end
