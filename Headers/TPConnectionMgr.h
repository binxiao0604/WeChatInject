//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPConnectionMgr-Protocol.h"

@class NSString, TPThumbPlayerConnectionMgrWrapper;

@interface TPConnectionMgr : NSObject <ITPConnectionMgr>
{
    TPThumbPlayerConnectionMgrWrapper *_connectionMgrWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPThumbPlayerConnectionMgrWrapper *connectionMgrWrapper; // @synthesize connectionMgrWrapper=_connectionMgrWrapper;
- (void)removeConnection:(int)arg1;
- (void)deactiveConnection:(int)arg1;
- (void)deactiveAllConnections;
- (int)addConnectionWithPlayer1:(id)arg1 actions1:(id)arg2 player2:(id)arg3 actions2:(id)arg4;
- (int)activeConnection:(int)arg1;
- (int)activeAllConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

