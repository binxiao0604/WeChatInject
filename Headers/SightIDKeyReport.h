//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SightIDKeyReport : NSObject
{
}

+ (void)reportConcreteABAPrams:(int)arg1 videosize:(struct CGSize)arg2 inPara:(struct WxVideoTransParaABA)arg3 abaReportPrams:(id)arg4 VideoEncodeParams:(id)arg5 consumingTime:(long long)arg6 oriTargetBitrate:(float)arg7 enableHEVCEncode:(_Bool)arg8 enableABA:(_Bool)arg9 abaControlPrams:(struct ControlParams)arg10 oriAudioBitrate:(double)arg11 oriAudioChannel:(unsigned long long)arg12;
+ (void)reportCompressVideoFailed;
+ (void)reportUploadSnsRecordVideo:(id)arg1;
+ (void)reportUploadSnsAlbumVideo:(id)arg1 containsWXTag:(_Bool)arg2;
+ (void)reportUploadC2CRecordVideo:(id)arg1;
+ (void)reportUploadC2CAlbumVideo:(id)arg1 selectedKbpsLevel:(int)arg2 containsWXTag:(_Bool)arg3;
+ (void)reportDownloadResult:(_Bool)arg1;
+ (void)reportUploadResult:(_Bool)arg1;
+ (void)reportUploadSize:(unsigned int)arg1;

@end

