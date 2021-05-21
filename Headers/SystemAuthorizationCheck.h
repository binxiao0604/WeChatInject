//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSString;

@interface SystemAuthorizationCheck : MMUserService <MMServiceProtocol>
{
}

+ (id)getSettingNotifyState;
- (unsigned int)getHealthKitAuthorizationStatus;
- (unsigned int)getBluetoothPeripheralAuthorizationStatus;
- (int)getLocationAuthorizationStatus;
- (unsigned int)getMicrophoneAuthorizationStatus;
- (unsigned int)getContactsAuthorizationStatus;
- (unsigned int)getCameraAuthorizationStatus;
- (unsigned int)getPhotoLibraryAuthorizationStatus;
- (unsigned long long)getNotificationAuthorizationStatus;
- (void)updateReportTime;
- (_Bool)shouldReport;
- (void)reportReaderSetting;
- (void)reportSettingNotify;
- (void)reportAuthorizationStatus;
- (void)reportWCFontLevel;
- (void)startCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
