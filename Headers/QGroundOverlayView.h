//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOverlayView.h"

@class QGroundOverlay;

@interface QGroundOverlayView : QOverlayView
{
}

- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (id)initWithOverlay:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) QGroundOverlay *overlay; // @dynamic overlay;

@end

