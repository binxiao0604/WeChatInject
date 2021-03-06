//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QOverlayView.h"

@class QMapContext, QTileOverlay, QTileOverlayHandler, QTileOverlayManager;

@interface QTileOverlayView : QOverlayView
{
    int _zIndex;
    QTileOverlay *_tileOverlay;
    QMapContext *_mapContext;
    QTileOverlayManager *_tileOverlayManager;
    QTileOverlayHandler *_handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTileOverlayHandler *handler; // @synthesize handler=_handler;
@property(nonatomic) __weak QTileOverlayManager *tileOverlayManager; // @synthesize tileOverlayManager=_tileOverlayManager;
@property(retain, nonatomic) QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(retain, nonatomic) QTileOverlay *tileOverlay; // @synthesize tileOverlay=_tileOverlay;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
- (id)initWithTileOverlay:(id)arg1;
- (id)keyForTilePath:(const CDStruct_7e23819f *)arg1;
- (id)fakeUrlForPath:(CDStruct_7e23819f)arg1;
- (void)reloadData;
- (void)endRender;
- (void)startRender;
- (id)generatePayload;
- (CDStruct_7e23819f)pathForInternal:(id)arg1;

@end

