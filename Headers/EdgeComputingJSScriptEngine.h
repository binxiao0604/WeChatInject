//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EdgeComputingScriptEngineProtocol-Protocol.h"

@class JSContext, NSString;

@interface EdgeComputingJSScriptEngine : MMObject <EdgeComputingScriptEngineProtocol>
{
    JSContext *context;
}

- (void).cxx_destruct;
- (void)clear;
- (id)executeArrayFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (id)executeStringFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (long long)executeLongFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (int)executeIntFunction:(id)arg1 withData:(id)arg2 withArgs:(id)arg3;
- (_Bool)loadScript:(id)arg1;
- (_Bool)registerJsApi;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

