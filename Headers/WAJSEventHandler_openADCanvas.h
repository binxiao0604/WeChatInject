//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCCanvasDynamicDataLoaderDelegate-Protocol.h"

@class NSDictionary, NSString, WCCanvasDynamicDataLoader;

@interface WAJSEventHandler_openADCanvas : WAJSEventHandler_BaseEvent <WCCanvasDynamicDataLoaderDelegate>
{
    NSDictionary *_param;
    WCCanvasDynamicDataLoader *_dataLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (unsigned long long)getUInt64ForKey:(id)arg1 inParams:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

