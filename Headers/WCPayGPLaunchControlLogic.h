//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCPayGPCustomizeLaunchCgiDelegate-Protocol.h"
#import "WCPayGPLaunchViewControllerV2Delegate-Protocol.h"
#import "WCPayGPMemberFillMoneyControllerDelegate-Protocol.h"
#import "WCPayGPSelectMemberControllerDelegate-Protocol.h"

@class NSString, WCPayGPCustomizeLaunchCgi;
@protocol WCPayGPLaunchControlLogicDelegate;

@interface WCPayGPLaunchControlLogic : WCPayControlLogic <WCPayGPSelectMemberControllerDelegate, PBMessageObserverDelegate, WCBaseControlLogicDeleagte, WCPayGPMemberFillMoneyControllerDelegate, ICdnComMgrExt, WCPayGPCustomizeLaunchCgiDelegate, WCPayGPLaunchViewControllerV2Delegate>
{
    _Bool _bEnableReportLocation;
    _Bool _bEnableReportSSID;
    unsigned long long _launchTimeStamp;
    id <WCPayGPLaunchControlLogicDelegate> _launchDelegate;
    NSString *_currentUploadCliMsgId;
    WCPayGPCustomizeLaunchCgi *_customizeLaunchCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayGPCustomizeLaunchCgi *customizeLaunchCgi; // @synthesize customizeLaunchCgi=_customizeLaunchCgi;
@property(retain, nonatomic) NSString *currentUploadCliMsgId; // @synthesize currentUploadCliMsgId=_currentUploadCliMsgId;
@property(nonatomic) __weak id <WCPayGPLaunchControlLogicDelegate> launchDelegate; // @synthesize launchDelegate=_launchDelegate;
@property(nonatomic) unsigned long long launchTimeStamp; // @synthesize launchTimeStamp=_launchTimeStamp;
@property(nonatomic) _Bool bEnableReportSSID; // @synthesize bEnableReportSSID=_bEnableReportSSID;
@property(nonatomic) _Bool bEnableReportLocation; // @synthesize bEnableReportLocation=_bEnableReportLocation;
- (void)openH5WithUrl:(id)arg1;
- (id)genWCRealnameInfoFromRealnameItem:(id)arg1;
- (void)dismissAndStopLogic;
- (void)saveGroupPaySvrConfig:(id)arg1;
- (void)addAAC2CMsgWithMsgContent:(id)arg1;
- (void)onGetCustomizeLaunchResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetActivityAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCommonAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetGroupPaySvrConfigResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendGroupPaySvrConfigRequest;
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
- (void)onWCPayGPSelectViewControllerFinish:(id)arg1;
- (void)onWCPayGPSelectViewControllerCancel;
- (void)OnCdnUpload:(id)arg1;
- (void)onWCPayGPLaunchVCNeedUploadImage:(id)arg1;
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)launchCustomizeAARequestWithActivityTheme:(id)arg1;
- (void)launchActivityAARequestWithActivityTheme:(id)arg1 totalAmount:(unsigned long long)arg2 payerItems:(id)arg3;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(id)arg3 payerUsernameArray:(id)arg4;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(id)arg1 withIgnoreContact:(id)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchViewControllerCancel;
- (void)reportLocationAndWifi;
- (void)setupPfData;
- (void)setupGroupPayOperationData;
- (void)startLogic;
- (void)stopLogic;
- (void)setLaunchLogicDelegate:(id)arg1;
- (id)initWithQueryPfInfoData:(id)arg1;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2 amount:(long long)arg3 title:(id)arg4;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

