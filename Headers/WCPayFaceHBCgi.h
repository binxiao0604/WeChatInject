//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol WCPayFaceHBCgiDelegate;

@interface WCPayFaceHBCgi : MMObject <PBMessageObserverDelegate>
{
    id <WCPayFaceHBCgiDelegate> m_delegate;
    NSString *m_key;
    int _cgiNumber;
    unsigned int _m_uiRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount=_m_uiRetryCount;
@property(nonatomic) int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 Key:(id)arg2;

@end

