//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAPackageDownloadProtocolInfo;

@protocol WAPackageDownloadLogicDelegate <NSObject>
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(NSString *)arg2 filePath:(NSString *)arg3 protocolInfo:(WAPackageDownloadProtocolInfo *)arg4 totalLength:(unsigned long long)arg5;

@optional
- (void)onDownloadTaskRecordTime:(double)arg1 appId:(NSString *)arg2;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(NSString *)arg4;
@end

