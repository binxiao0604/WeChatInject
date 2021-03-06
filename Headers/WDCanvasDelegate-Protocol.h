//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITapGestureRecognizer, WDCanvas, WDPixel;

@protocol WDCanvasDelegate <NSObject>

@optional
- (void)canvasDidFinishLoadFirstFrame:(WDCanvas *)arg1;
- (void)canvasDidEndFairyWandMagic:(WDCanvas *)arg1;
- (void)canvas:(WDCanvas *)arg1 didTapOnCanvas:(UITapGestureRecognizer *)arg2;
- (void)canvas:(WDCanvas *)arg1 endScroll:(struct CGPoint)arg2;
- (void)canvas:(WDCanvas *)arg1 endZoom:(double)arg2;
- (void)canvas:(WDCanvas *)arg1 didScroll:(struct CGPoint)arg2;
- (void)canvas:(WDCanvas *)arg1 didZoomToScale:(double)arg2;
- (void)canvas:(WDCanvas *)arg1 didSelectPixel:(WDPixel *)arg2;
@end

