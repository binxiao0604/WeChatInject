//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKInputTipAlert-Protocol.h"

@class MMVoidCallback, MMVoidStringCallback, NSString;

@interface KindaInputTipAlert : NSObject <MMKInputTipAlert>
{
    MMVoidStringCallback *_m_okCallback;
    MMVoidCallback *_m_cancelCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidCallback *m_cancelCallback; // @synthesize m_cancelCallback=_m_cancelCallback;
@property(retain, nonatomic) MMVoidStringCallback *m_okCallback; // @synthesize m_okCallback=_m_okCallback;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)showInputAlertImpl:(id)arg1 content:(id)arg2 tips:(id)arg3 ok:(id)arg4 cancel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

