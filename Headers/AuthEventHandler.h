//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ProtobufEventHandler.h"

@interface AuthEventHandler : ProtobufEventHandler
{
    struct ec_key_st *ecdh_key;
    unsigned int ct1;
}

- (_Bool)OnProtocolEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolManualAuthEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolAutoAuthEncryptPack:(id)arg1 OutBuf:(struct AutoBuffer *)arg2 uin:(unsigned int)arg3;
- (_Bool)OnProtocolHasCustomEncryptPack:(id)arg1;
- (void)OnProtocolConnectFail:(id)arg1;
- (void)OnNonDisasterAuthResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnDisasterAuthResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)changeForMessage:(id)arg1;
- (void)OnProtocolStart:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end

