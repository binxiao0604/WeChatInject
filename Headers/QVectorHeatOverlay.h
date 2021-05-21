//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QShape.h"

#import "QOverlay-Protocol.h"

@class NSArray, NSString, QVectorHeatOverlayOption;
@protocol QOverlayProtocol;

@interface QVectorHeatOverlay : QShape <QOverlay>
{
    CDStruct_02837cd9 _boundingRect;
    void *_impl;
    _Bool _visible;
    NSArray *_nodes;
    QVectorHeatOverlayOption *_option;
    id <QOverlayProtocol> _containerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QOverlayProtocol> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(nonatomic) void *impl; // @synthesize impl=_impl;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) QVectorHeatOverlayOption *option; // @synthesize option=_option;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (id)getAggregationUnit:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (id)initWithHeatNodes:(id)arg1 option:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

