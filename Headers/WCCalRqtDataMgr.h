//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface WCCalRqtDataMgr : MMUserService <MMServiceProtocol>
{
}

- (_Bool)p_needCalRqtData:(int)arg1 uin:(unsigned long long)arg2;
- (id)calFullSpeRqtData:(const void *)arg1 len:(unsigned long long)arg2 type:(int)arg3;
- (id)calJsApiSpeRqtData:(const void *)arg1 len:(unsigned int)arg2 type:(int)arg3;
- (unsigned int)calRqtData:(const void *)arg1 len:(unsigned int)arg2 cmd:(int)arg3 uin:(unsigned long long)arg4;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

