//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate;

@interface WCPayQueryWalletEntranceBalanceSwitchStateCgi : WCPayBaseCgi
{
    _Bool _m_isServerResponse;
    id <WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_isServerResponse; // @synthesize m_isServerResponse=_m_isServerResponse;
@property __weak id <WCPayQueryWalletEntranceBalanceSwitchStateCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;

@end

