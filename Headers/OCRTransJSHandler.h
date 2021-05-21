//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseJSHandler.h"

@class NSMutableDictionary, NSString;

@interface OCRTransJSHandler : WSTemplateBaseJSHandler
{
    NSString *_senderUserName;
    NSString *_imageTransDataJsonStr;
    NSMutableDictionary *_imageTransDataCallbackID2RequestIDMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *imageTransDataCallbackID2RequestIDMap; // @synthesize imageTransDataCallbackID2RequestIDMap=_imageTransDataCallbackID2RequestIDMap;
@property(retain, nonatomic) NSString *imageTransDataJsonStr; // @synthesize imageTransDataJsonStr=_imageTransDataJsonStr;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
- (void)notifyImageTransDataJsonStrWithCallbackID:(id)arg1;
- (void)handleJSAPIShakeWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISetTitleWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICollectWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPICopyWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPISendWithParams:(id)arg1 callbackID:(id)arg2;
- (void)handleJSAPIGetImageTransDataWithParams:(id)arg1 callbackID:(id)arg2;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)jsEventsNeedRegister;
- (void)sendJsEventOnTapTopBar;
- (unsigned long long)getLocalJSBusinessType;
- (id)init;

@end
