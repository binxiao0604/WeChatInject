//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FlutterEngine, WxaRouterConfig;

@interface WxaRouter : NSObject
{
    FlutterEngine *_engine;
    WxaRouterConfig *_config;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) WxaRouterConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FlutterEngine *engine; // @synthesize engine=_engine;

@end

