//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppJsApiCallback : NSObject
{
    struct LVUICallback *callback;
    NSString *_appId;
    unsigned long long _appPtr;
    unsigned long long _pageId;
    long long _callbackId;
}

- (void).cxx_destruct;
@property(nonatomic) long long callbackId; // @synthesize callbackId=_callbackId;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) unsigned long long appPtr; // @synthesize appPtr=_appPtr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)succes:(id)arg1;
- (void)fail:(id)arg1;
- (void)succes:(id)arg1 keepAlive:(_Bool)arg2;
- (void)fail:(id)arg1 keepAlive:(_Bool)arg2;
- (id)initWithParam:(id)arg1 appPtr:(unsigned long long)arg2 pageId:(unsigned long long)arg3 callbackId:(long long)arg4 callback:(struct LVUICallback *)arg5;

@end

