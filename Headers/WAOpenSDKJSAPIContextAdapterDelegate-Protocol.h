//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, WAJSEventHandler_BaseEvent, WAOpenSDKJSAPIContextAdapter;

@protocol WAOpenSDKJSAPIContextAdapterDelegate <NSObject>

@optional
- (void)onWAOpenSDKJSAPIContextAdapter:(WAOpenSDKJSAPIContextAdapter *)arg1 sendResultBeforeEnd:(NSDictionary *)arg2 resultType:(long long)arg3 handler:(WAJSEventHandler_BaseEvent *)arg4;
- (void)onWAOpenSDKJSAPIContextAdapter:(WAOpenSDKJSAPIContextAdapter *)arg1 endWithResult:(NSDictionary *)arg2 handler:(WAJSEventHandler_BaseEvent *)arg3;
@end

