//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCAtomicRedEnvReceiveHomeViewDelegate-Protocol.h"
#import "WCAtomicRedEnvReceiveWelcomeViewDelegate-Protocol.h"
#import "WCFestivalRedEnvFinishViewDelegate-Protocol.h"
#import "WCFestivalRedEnvShareViewDelegate-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate-Protocol.h"

@class JSEvent, NSError, NSString, WCAtomicRedEnvReceiveHomeView, WCAtomicRedEnvReceiveWelcomeView, WCFestivalRedEnvFinishView, WCFestivalRedEnvShareView;
@protocol WCRedEnvWeAppDelegate;

@interface WCRedEnvEnterpriseReceiveControlLogic : WCRedEnvelopesControlLogic <WCAtomicRedEnvReceiveHomeViewDelegate, WCAtomicRedEnvReceiveWelcomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate, WCFestivalRedEnvShareViewDelegate, WCFestivalRedEnvFinishViewDelegate, WCPayLogicMgrExt>
{
    int m_scene;
    WCAtomicRedEnvReceiveHomeView *m_oIntroView;
    WCAtomicRedEnvReceiveWelcomeView *m_oWelcomeView;
    WCFestivalRedEnvShareView *m_oShareView;
    WCFestivalRedEnvFinishView *m_oFinishView;
    JSEvent *m_jsEvent;
    _Bool bStopedLogic;
    NSError *m_error;
    id <WCRedEnvWeAppDelegate> _logicDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCRedEnvWeAppDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) NSError *m_error; // @synthesize m_error;
@property(retain, nonatomic) JSEvent *m_jsEvent; // @synthesize m_jsEvent;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onRealnameActionClick:(id)arg1;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)WCFestivalRedEnvFinishViewToShare;
- (void)WCFestivalRedEnvFinishViewBack;
- (void)OnAsyncBizSubcribeResponse:(id)arg1 Error:(id)arg2;
- (void)WCFestivalRedEnvShareViewToFinish;
- (void)WCFestivalRedEnvShareViewBack;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCAtomicRedEnvReceiveWelcomeViewShowDetail;
- (void)WCAtomicRedEnvReceiveWelcomeViewBack;
- (void)WCAtomicRedEnvReceiveHomeViewOpenList;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopesInner:(_Bool)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewOpenRedEnvelopes:(_Bool)arg1;
- (void)WCAtomicRedEnvReceiveHomeViewBack;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)OnCheckBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnOpenBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveBizEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)closeFinishViewAndStopLogic;
- (unsigned int)getStatFromScene;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnReceiveAtomicEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)stopLogic;
- (void)startLogic;
- (void)stopLoading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

