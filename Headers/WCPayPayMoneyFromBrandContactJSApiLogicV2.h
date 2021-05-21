//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class JSEvent, KindaJSEvent, NSString, WAJSEventHandler_BaseEvent;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogicV2 : WCPayControlLogic <WCBaseControlMgrExt, MMUseCaseCallback>
{
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
    id <WCPayPayJSApiLogicParamDelegate> _paramDelegate;
    WAJSEventHandler_BaseEvent *_tinyAppEvent;
    KindaJSEvent *_kindaJSEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaJSEvent *kindaJSEvent; // @synthesize kindaJSEvent=_kindaJSEvent;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent; // @synthesize tinyAppEvent=_tinyAppEvent;
@property(nonatomic) __weak id <WCPayPayJSApiLogicParamDelegate> paramDelegate; // @synthesize paramDelegate=_paramDelegate;
- (void)call:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)dealloc;
- (void)setExtraInfo:(id)arg1;
- (id)initWithJSEvent:(id)arg1 tinyAppEvent:(id)arg2 URL:(id)arg3 BrandUserName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

