//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QOverlayProtocol-Protocol.h"

@class NSString, QMediator, QUniversalMapCounter, TBOrderedSafeDictionary;

@interface QLayerManager : NSObject <QOverlayProtocol>
{
    void *_impl;
    QMediator *_mediator;
    TBOrderedSafeDictionary *_viewContainer;
    QUniversalMapCounter *_universalCounter;
    QUniversalMapCounter *_groundOverlayCounter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak QUniversalMapCounter *groundOverlayCounter; // @synthesize groundOverlayCounter=_groundOverlayCounter;
@property(nonatomic) __weak QUniversalMapCounter *universalCounter; // @synthesize universalCounter=_universalCounter;
@property(retain, nonatomic) TBOrderedSafeDictionary *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (id)removeForGroundOverlay:(id)arg1;
- (void)addGoundOverlayView:(id)arg1;
- (id)removeForHeatOverlay:(id)arg1;
- (void)addHeatOverlayView:(id)arg1;
- (_Bool)draw;
- (id)overlays;
- (id)viewForOverlay:(id)arg1;
- (id)removeForOverlay:(id)arg1;
- (void)addOverlayView:(id)arg1;
- (void)makeDirty;
- (struct LayerContainer *)impl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
