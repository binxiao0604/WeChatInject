//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWSWebViewPluginProtocol-Protocol.h"

@class NSString;
@protocol WSWebViewPluginableProtocol;

@interface WSWebViewPluginBase : NSObject <IWSWebViewPluginProtocol>
{
    id <WSWebViewPluginableProtocol> _webviewOwner;
}

+ (id)GetInstanceFrom:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webviewOwner; // @synthesize webviewOwner=_webviewOwner;
- (id)webview;
- (void)sendEventToJSBridge:(id)arg1 withParams:(id)arg2;
@property(readonly, copy, nonatomic) NSString *debugModuleName;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

