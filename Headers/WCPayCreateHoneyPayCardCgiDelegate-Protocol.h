//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class CreateHoneyPayCardResp, WCPayBaseNetworkingError, WCPayCreateHoneyPayCardCgi;

@protocol WCPayCreateHoneyPayCardCgiDelegate <WCPayBaseCgiDelegate>
- (void)createHoneyPayCardCgi:(WCPayCreateHoneyPayCardCgi *)arg1 didFailWithError:(WCPayBaseNetworkingError *)arg2;
- (void)createHoneyPayCardCgi:(WCPayCreateHoneyPayCardCgi *)arg1 didGetResponse:(CreateHoneyPayCardResp *)arg2;
@end

