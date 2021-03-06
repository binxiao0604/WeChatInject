//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "SoterUpdateMPAuthKeyCgiDelegate-Protocol.h"

@class JSEvent, NSString, SoterSignHelper, SoterUpdateMPAuthKeyCgi;

@interface WebviewJSEventHandler_reqSoterAuthentication : WebviewJSEventHandlerBase <SoterUpdateMPAuthKeyCgiDelegate>
{
    JSEvent *_m_event;
    SoterSignHelper *_m_soterSignHelper;
    SoterUpdateMPAuthKeyCgi *_m_cgi;
    unsigned long long _m_authMode;
    NSString *_m_challenge;
    NSString *_m_authContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_authContent; // @synthesize m_authContent=_m_authContent;
@property(retain, nonatomic) NSString *m_challenge; // @synthesize m_challenge=_m_challenge;
@property(nonatomic) unsigned long long m_authMode; // @synthesize m_authMode=_m_authMode;
@property(retain, nonatomic) SoterUpdateMPAuthKeyCgi *m_cgi; // @synthesize m_cgi=_m_cgi;
@property(retain, nonatomic) SoterSignHelper *m_soterSignHelper; // @synthesize m_soterSignHelper=_m_soterSignHelper;
@property(retain, nonatomic) JSEvent *m_event; // @synthesize m_event=_m_event;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)endEventUserCancelWithChallenge:(id)arg1;
- (void)endEventWithChallenge:(id)arg1;
- (void)endEventWithSignedResult;
- (id)resultJsonWithChallenge:(id)arg1;
- (void)endEventWithErrorCode:(int)arg1 errorMsg:(id)arg2 useMode:(unsigned long long)arg3 resultJson:(id)arg4 resultSignature:(id)arg5 Event:(id)arg6;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

