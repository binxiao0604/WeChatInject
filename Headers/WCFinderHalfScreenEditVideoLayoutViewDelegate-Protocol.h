//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCFinderHalfScreenEditVideoLayoutView;

@protocol WCFinderHalfScreenEditVideoLayoutViewDelegate <NSObject>
- (double)finderEditVideoLayoutViewGetVideoDurationInSecond;
- (void)finderEditVideoLayoutView:(WCFinderHalfScreenEditVideoLayoutView *)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)finderEditVideoLayoutView:(WCFinderHalfScreenEditVideoLayoutView *)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)finderEditVideoLayoutView:(WCFinderHalfScreenEditVideoLayoutView *)arg1 didCropWithResultStartTime:(double)arg2 endTime:(double)arg3 editAssetIndex:(long long)arg4;
@end

