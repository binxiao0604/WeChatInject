//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "BrandTemplateMsgAuthLogicDelegate-Protocol.h"

@class BrandTemplateMsgAuthLogic, JSEvent, NSString;

@interface WebviewJSEventHandler_requestSubscribeMessage : WebviewJSEventHandlerBase <BrandTemplateMsgAuthLogicDelegate>
{
    JSEvent *_event;
    BrandTemplateMsgAuthLogic *_logic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandTemplateMsgAuthLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (id)pageSheetLifecyclePlugin;
- (id)viewControllerToShowPageSheet;
- (void)onSubscriptionMessageLogicWillDismissPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogicWillShowPageSheet:(id)arg1;
- (void)onSubscriptionMessageLogic:(id)arg1 finishedWithResult:(id)arg2 extInfo:(id)arg3 success:(_Bool)arg4 cancel:(_Bool)arg5 errorCode:(long long)arg6;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

