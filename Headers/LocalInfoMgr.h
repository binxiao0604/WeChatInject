//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"

@class CLocalInfo, NSRecursiveLock, NSString;

@interface LocalInfoMgr : MMRootService <MMServiceProtocol>
{
    NSRecursiveLock *m_lock;
    CLocalInfo *m_localInfo;
}

- (void).cxx_destruct;
- (void)setMmtlsCtrlFlag:(unsigned int)arg1 force:(_Bool)arg2;
- (void)clearLocalInfo;
- (void)clearAllLocalInfo;
- (void)saveLocalInfo;
- (void)loadLocalInfo;
@property(readonly, nonatomic) CLocalInfo *localInfo;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

