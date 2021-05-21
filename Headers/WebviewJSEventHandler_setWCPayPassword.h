//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayResetPwdByTokenCgiDelegate-Protocol.h"

@class NSString, WCPayPayPwdViewController, WCPayResetPwdByTokenCgi;

@interface WebviewJSEventHandler_setWCPayPassword : WebviewJSEventHandlerBase <WCPayPayPwdViewControllerDelegate, WCPayLogicMgrExt, WCPayResetPwdByTokenCgiDelegate>
{
    NSString *_token;
    WCPayPayPwdViewController *_pwdVC;
    WCPayResetPwdByTokenCgi *_resetCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayResetPwdByTokenCgi *resetCgi; // @synthesize resetCgi=_resetCgi;
@property(retain, nonatomic) WCPayPayPwdViewController *pwdVC; // @synthesize pwdVC=_pwdVC;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)resetPwdByTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)resetPwdByTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

