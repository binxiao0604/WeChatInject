//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlutterApplicationLifeCycleDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class FlutterMethodCall, NSObject;
@protocol FlutterPluginRegistrar;

@protocol FlutterPlugin <NSObject, FlutterApplicationLifeCycleDelegate>
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar> *)arg1;

@optional
+ (void)setPluginRegistrantCallback:(CDUnknownFunctionPointerType)arg1;
- (void)detachFromEngineForRegistrar:(NSObject<FlutterPluginRegistrar> *)arg1;
- (void)handleMethodCall:(FlutterMethodCall *)arg1 result:(void (^)(id))arg2;
@end
