//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, WAOpenSDKTransferAuthAdapter;

@protocol WAOpenSDKTransferAuthAdapterDelegate <NSObject>
- (void)onWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1 confirmAuthRequestDidComplete:(_Bool)arg2;
- (void)onWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1 authDidFailWithErrMsg:(NSString *)arg2;
- (void)onWAOpenSDKTransferAuthAdapterUserDidReject:(WAOpenSDKTransferAuthAdapter *)arg1;
- (void)onWAOpenSDKTransferAuthAdapterUserDidAccept:(WAOpenSDKTransferAuthAdapter *)arg1;
- (MMUIViewController *)containerVCForWAOpenSDKTransferAuthAdapter:(WAOpenSDKTransferAuthAdapter *)arg1;
@end

