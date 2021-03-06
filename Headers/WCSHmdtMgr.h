//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCSHmdtMgr : MMRootService <MMKernelExt, IMsgExt, MMServiceProtocol>
{
    _Bool _isEnable;
    NSMutableDictionary *_dicSceneBehaviorID;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNewRegOK;
- (void)onManulLoginOK;
- (void)setBehaviorID:(id)arg1 forScene:(unsigned int)arg2;
- (void)startTask:(unsigned int)arg1 behaviorID:(id)arg2;
- (_Bool)isHmdtEnable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

