//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderTabPageView;

@protocol WCFinderTabPageViewDelegate <NSObject>
- (void)headerViewWillEndDisplayInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (void)headerViewWillDisplayInFinderTabPageView:(WCFinderTabPageView *)arg1;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(WCFinderTabPageView *)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(WCFinderTabPageView *)arg1;
@end

