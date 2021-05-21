//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCheckUserAuthJSApiCgiDelegate-Protocol.h"
#import "WCPayNewPwdViewControllerDelegate-Protocol.h"
#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class JSEvent, NSData, NSString, WCPayCheckUserAuthJSApiCgi;
@protocol WCPayJSApiVerifyDelegate;

@interface WCPayJSApiVerifyPayPasswordControlLogic : WCPayControlLogic <WCPayNewPwdViewControllerDelegate, WCPayCheckUserAuthJSApiCgiDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate>
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    unsigned int m_verifyPayPwdStatus;
    _Bool _m_bHasBiotricAuth;
    id <WCPayJSApiVerifyDelegate> _paramDelegate;
    WCPayCheckUserAuthJSApiCgi *_checkUserAuthJSApiCgi;
    NSData *_m_lastAuthBiotricData;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bHasBiotricAuth; // @synthesize m_bHasBiotricAuth=_m_bHasBiotricAuth;
@property(retain, nonatomic) NSData *m_lastAuthBiotricData; // @synthesize m_lastAuthBiotricData=_m_lastAuthBiotricData;
@property(retain, nonatomic) WCPayCheckUserAuthJSApiCgi *checkUserAuthJSApiCgi; // @synthesize checkUserAuthJSApiCgi=_checkUserAuthJSApiCgi;
@property(nonatomic) __weak id <WCPayJSApiVerifyDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)onAlertResetPwdConfirm:(id)arg1;
- (void)onAlertResetPwdCancel:(id)arg1;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)verifyPayBiotricNext:(id)arg1;
- (void)verifyPayPwdNext:(id)arg1;
- (void)OnWCPayNewPwdViewControllerBack;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)OnGetCheckUserAuthJSApiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)OnGetCheckUserAuthJSApiResponseOK:(id)arg1;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
