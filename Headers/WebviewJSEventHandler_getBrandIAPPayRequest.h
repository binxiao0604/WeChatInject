//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IBrandIAPMgrExt-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getBrandIAPPayRequest : WebviewJSEventHandlerBase <IBrandIAPMgrExt>
{
    JSEvent *jsEvent;
    NSString *productExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productExtInfo; // @synthesize productExtInfo;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent;
- (void)OnBrandIAPGetResult:(id)arg1 Error:(int)arg2;
- (void)OnBrandIAPPayFailForProduct:(id)arg1;
- (void)OnBrandIAPPayCancelForProduct:(id)arg1;
- (void)OnBrandIAPPaySuccessForProduct:(id)arg1;
- (void)OnBrandIAPPayRequestForProduct:(id)arg1;
- (void)OnBrandIAPPrepay:(id)arg1 FailedWithError:(int)arg2;
- (void)OnBrandIAPPrepay:(id)arg1 GetProductID:(id)arg2 ExtInfo:(id)arg3;
- (void)stopLoading:(_Bool)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end

