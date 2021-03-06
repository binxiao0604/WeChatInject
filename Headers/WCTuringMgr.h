//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WCTuringMgr : MMUserService <MMServiceProtocol, MMKernelExt>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _bEnable;
}

- (void).cxx_destruct;
- (void)reportOwnerRecord;
- (void)reportHumenRecord;
- (void)reportAllRecord;
- (void)onAuthOK;
- (void)keyboardWillDisappear:(id)arg1 withContext:(id)arg2 isFinishInput:(_Bool)arg3;
- (void)keyboardWillAppear:(id)arg1 withContext:(id)arg2;
- (void)start:(unsigned long long)arg1 action:(int)arg2 duration:(float)arg3;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

