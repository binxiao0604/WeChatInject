//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class CMessageWrap, ForwardMessageLogicController, JSEvent, NSDictionary, NSMutableData, NSString, NSURLConnection, WWKMsgForwarder;

@interface WebviewJSEventHandler_sendGameNameCard : WebviewJSEventHandlerBase <NSURLConnectionDelegate, ForwardMessageLogicDelegate>
{
    CMessageWrap *m_wrapMsg;
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSURLConnection *_m_connecttion;
    JSEvent *_m_curEvent;
    NSDictionary *_m_curExtraData;
    NSMutableData *_m_recData;
    long long _orientation;
    WWKMsgForwarder *_weworkMsgForwarder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKMsgForwarder *weworkMsgForwarder; // @synthesize weworkMsgForwarder=_weworkMsgForwarder;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) NSDictionary *m_curExtraData; // @synthesize m_curExtraData=_m_curExtraData;
@property(retain, nonatomic) JSEvent *m_curEvent; // @synthesize m_curEvent=_m_curEvent;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)stopForcedRotationToPortrait;
- (void)dealloc;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)clearCurData;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

