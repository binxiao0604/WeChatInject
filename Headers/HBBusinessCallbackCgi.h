//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol HBBusinessCallbackCgiDelegate;

@interface HBBusinessCallbackCgi : WCPayBaseCgi
{
    unsigned long long _requestType;
    id <HBBusinessCallbackCgiDelegate> _m_cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HBBusinessCallbackCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;

@end
