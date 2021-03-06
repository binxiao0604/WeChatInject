//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXCAsyncSocketDelegate-Protocol.h"

@class NSString, NSURL, TXCAsyncSocket, TXCDarwinNotificationCenter;
@protocol OS_dispatch_queue, TXC264TunnelDelegate;

@interface TXC264Tunnel : NSObject <TXCAsyncSocketDelegate>
{
    struct TXC264TunnelEncodeParam _encoderParams;
    TXCDarwinNotificationCenter *_center;
    NSURL *_socketURL;
    _Bool _isAnnexB;
    id <TXC264TunnelDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    TXCAsyncSocket *_serverSocket;
    TXCAsyncSocket *_clientSocket;
    NSObject<OS_dispatch_queue> *_receivedSocketQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receivedSocketQueue; // @synthesize receivedSocketQueue=_receivedSocketQueue;
@property(retain, nonatomic) TXCAsyncSocket *clientSocket; // @synthesize clientSocket=_clientSocket;
@property(retain, nonatomic) TXCAsyncSocket *serverSocket; // @synthesize serverSocket=_serverSocket;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <TXC264TunnelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnnexB; // @synthesize isAnnexB=_isAnnexB;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 memoryOwner:(id)arg4;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)onReplayKitRequestStop;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)requestIFrame;
- (void)sendAnnexBFlag;
- (void)sendTime;
- (void)sendVersion;
- (void)sendSimpleRequest:(unsigned short)arg1;
- (void)updateEncoderParams:(struct TXC264TunnelEncodeParam *)arg1;
- (void)_swapAndSendStructWithCmd:(unsigned short)arg1 message:(void *)arg2 size:(unsigned int)arg3 tag:(long long)arg4;
- (_Bool)startListenWithParams:(struct TXC264TunnelEncodeParam *)arg1 error:(id *)arg2;
- (void)_tellSocketInfoToClient;
- (void)dealloc;
- (id)initWithAppGroup:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

