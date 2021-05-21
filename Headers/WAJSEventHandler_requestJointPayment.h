//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "IWCPayJSApiMgrExt-Protocol.h"
#import "IWCPayPayMoneyLogicExt-Protocol.h"
#import "WCPayPayJSApiLogicParamDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_requestJointPayment : WAJSEventHandler_BaseEvent <WCPayPayJSApiLogicParamDelegate, IWCPayJSApiMgrExt, IWCPayPayMoneyLogicExt>
{
    NSMutableDictionary *_dic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2 tinyappUsername:(id)arg3 tinyappPath:(id)arg4;
- (void)onWCPayJSApiResult:(id)arg1 needCloseWebview:(_Bool)arg2;
- (void)onWCPayPayMoneySuccess:(id)arg1;
- (id)getTinyappPath;
- (id)getTinyappUserName;
- (id)getWCPayPayParam;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

