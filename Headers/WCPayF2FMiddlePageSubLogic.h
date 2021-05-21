//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPaySubLogic.h"

#import "WCPayF2FDynamicCodeCgiDelegate-Protocol.h"

@class NSString, WCPayControlData, WCPayF2FDynamicCodeCgi;
@protocol WCPayF2FMiddlePageSubLogicDelegate;

@interface WCPayF2FMiddlePageSubLogic : WCPaySubLogic <WCPayF2FDynamicCodeCgiDelegate>
{
    WCPayControlData *_m_data;
    id <WCPayF2FMiddlePageSubLogicDelegate> _m_delegate;
    WCPayF2FDynamicCodeCgi *_m_f2fDynamicCodeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayF2FDynamicCodeCgi *m_f2fDynamicCodeCgi; // @synthesize m_f2fDynamicCodeCgi=_m_f2fDynamicCodeCgi;
@property __weak id <WCPayF2FMiddlePageSubLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayControlData *m_data; // @synthesize m_data=_m_data;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 netWorkError:(id)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 resp:(id)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

