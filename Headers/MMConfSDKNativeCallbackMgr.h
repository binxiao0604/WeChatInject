//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMConfSDKNativeCallbackMgr : NSObject
{
    struct WxConfSDKCallback *nCallback;
    NSMutableDictionary *_outerCallbacks;
    struct recursive_mutex recursive_mutex_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeWillListen:(int)arg1 callback:(id)arg2;
- (void)registerWillListen:(int)arg1 callback:(id)arg2;
- (id)callbackImp:(int)arg1 errCode:(int)arg2 data:(void *)arg3 dataLength:(int)arg4;
- (void)dealloc;
- (struct IWXConfCallback *)refreshCallback:(_Bool)arg1;
- (id)init;

@end

