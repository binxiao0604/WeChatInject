//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VoicePrintLogicControllerFactory.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IVoicePrintMgrExt-Protocol.h"
#import "VoicePrintViewControllerDelegate-Protocol.h"

@class MMTimer, NSString;

@interface CreateVoicePrintLogicController : VoicePrintLogicControllerFactory <IRecordPermissionCheckExt, VoicePrintViewControllerDelegate, IVoicePrintMgrExt>
{
    _Bool _isCreateFirst;
    long long _failureTimes;
    float averagePeakMeter;
    MMTimer *mEnvironmentCheckTimeOutTimer;
}

+ (id)factoryMethod;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *mEnvironmentCheckTimeOutTimer; // @synthesize mEnvironmentCheckTimeOutTimer;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnRegOkWithBioSigKey:(id)arg1 VoiceId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord:(_Bool)arg1;
- (void)OnStartRecord;
- (void)OnEnviromentCheckResult:(_Bool)arg1;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnClickEnvironmentCheckReTryBtn;
- (void)OnTryVerifyBtnDone;
- (void)OnBackButtonDone;
- (void)stopNonBlockLoading;
- (void)startNonBlockLoading;
- (void)OnTalkButtonCanceled;
- (void)beginAllAnimation;
- (void)OnTalkButtonPressed;
- (void)OnViewDidLoad;
- (void)voicePrintBtnPressed;
- (void)processTimeOut;
- (void)TimerEnvironmentCheckTimeOut;
- (void)StartEnviromentCheck;
- (void)getResourceSuccess;
- (void)callVoicePrintMgrStart;
- (void)dealloc;
- (id)initWithScene:(unsigned int)arg1;
- (void)unregisterExtension;
- (void)registerExtension;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

