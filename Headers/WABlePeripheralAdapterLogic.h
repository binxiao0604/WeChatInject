//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralManagerDelegate-Protocol.h"

@class CBPeripheralManager, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue, WABlePeripheralAdapterLogicDelegate;

@interface WABlePeripheralAdapterLogic : NSObject <CBPeripheralManagerDelegate>
{
    NSString *m_serverID;
    CBPeripheralManager *m_adapter;
    NSRecursiveLock *m_lock;
    NSObject<OS_dispatch_queue> *m_blueQueue;
    NSMutableDictionary *m_services;
    NSMutableDictionary *m_centralDevices;
    NSMutableDictionary *m_serviceCharacteristicsDic;
    NSMutableArray *m_notifyQueue;
    NSMutableDictionary *m_connectedDevices;
    id <WABlePeripheralAdapterLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WABlePeripheralAdapterLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)onPowerOff;
- (void)onConnected:(id)arg1;
- (void)respondToRequest:(id)arg1;
- (int)removeService:(id)arg1;
- (void)stopAdvertising;
- (void)startAdvertisingWithRequest:(id)arg1;
- (int)notifyCharacteristicChange:(id)arg1 service:(id)arg2;
- (id)readCharacteristics:(id)arg1 service:(id)arg2;
- (int)writeCharacteristics:(id)arg1 value:(id)arg2 forService:(id)arg3;
- (int)addService:(id)arg1 isPrimary:(_Bool)arg2 withCharacteristics:(id)arg3;
- (long long)state;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 lock:(id)arg2 serverID:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

