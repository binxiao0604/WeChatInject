//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BlueProfilePedometerInfo, ModContact, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSString, WCDevice;

@protocol IWCDeviceBrandMgrExt <NSObject>

@optional
- (void)onUploadSportRecordReponse:(NSMutableArray *)arg1 success:(int)arg2;
- (void)onWCDeviceWifiStatusUpdate:(WCDevice *)arg1 Status:(unsigned int)arg2;
- (void)onGetSportDeviceListEnd:(NSMutableArray *)arg1 DataSourceFaqURL:(NSString *)arg2 WatchDataSourceFaqURL:(NSString *)arg3 ErrorCode:(int)arg4;
- (void)onBLEHardDeviceSearch:(WCDevice *)arg1 modContact:(ModContact *)arg2 respData:(NSDictionary *)arg3 errorCode:(int)arg4;
- (void)onGetHardDeviceHelpUrl:(NSString *)arg1 device:(WCDevice *)arg2;
- (void)onWifiHardDeviceSearch:(ModContact *)arg1 respData:(NSDictionary *)arg2 ExtData:(NSString *)arg3;
- (void)onSendWCDevicesGetOperTicketResponse:(NSArray *)arg1 reqTicketList:(NSArray *)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceSendDataEnd:(long long)arg1 ErrType:(int)arg2 ErrCode:(int)arg3 ErrMsg:(const char *)arg4;
- (void)onBatchSearchWCDevice:(NSArray *)arg1 Scene:(int)arg2 Error:(int)arg3;
- (void)onWCDeviceUnbindEnd:(NSString *)arg1 Error:(NSError *)arg2;
- (void)onWCDeviceBindEnd:(WCDevice *)arg1 Error:(NSError *)arg2;
- (void)onWCDeviceInitEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(_Bool *)arg3;
- (void)onWCDeviceBrandSearch:(ModContact *)arg1 respData:(NSDictionary *)arg2 fliterStatus:(unsigned int)arg3;
- (void)onWCDeviceGetBoundDevices:(NSArray *)arg1;
- (void)onBlueProfilePedometerTargetWrote:(long long)arg1;
- (void)onBlueProfilePedometerTargetUpdated:(long long)arg1 Step:(int)arg2;
- (void)onBlueProfilePedometerInfoUpdated:(long long)arg1 Info:(BlueProfilePedometerInfo *)arg2;
- (void)onBlueProfileConnectStateChanged:(long long)arg1 State:(int)arg2 ErrorCode:(int)arg3;
- (void)onWCDeviceSendDataToWebView:(NSString *)arg1 data:(NSString *)arg2;
- (void)onWCDeviceSessionTimeout:(long long)arg1;
- (void)onWCDeviceBlueToothStateChanged:(int)arg1;
- (void)onWCDeviceChannelStateChanged:(long long)arg1:(int)arg2:(int)arg3;
- (void)onWCDeviceLost:(long long)arg1;
- (void)onWCDeviceFoundAddExtData:(long long)arg1 extData:(NSData *)arg2;
- (void)onWCDeviceFoundForJSAPI:(long long)arg1;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(_Bool *)arg2;
@end

