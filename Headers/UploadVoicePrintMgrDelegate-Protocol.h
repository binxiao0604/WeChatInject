//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol UploadVoicePrintMgrDelegate <NSObject>

@optional
- (void)OnMgrRegOkWithBioSigKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrVerifyOkWithRandomKey:(NSString *)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrNetworkError:(int)arg1 andMessage:(NSString *)arg2;
- (void)OnMgrLocalFileOperationError;
- (void)OnMgrGetMatchingResult:(int)arg1 VoiceId:(unsigned int)arg2;
@end

