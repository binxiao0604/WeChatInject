//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IAutoVerifySMSExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INewABTestMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCPayNetworkHelperDelegate-Protocol.h"
#import "WCPaySingleDownloadLogicDelegate-Protocol.h"

@class MMTipsViewController, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, TenpayCertificate, WCPayAuthenticationPay, WCPayAuthenticationPayVerifySMSStruct, WCPayAvalibleBankCardBinInfo, WCPayBindCardInfo, WCPayBindInfo, WCPayBindInfoSMS, WCPayLocalCachedData, WCPayNetworkHelper, WCPayRealNameTipsViewController, WCPayResetPasswordInfo, WCPaySingleDownloadLogic, WCRedEnvelopesCdnManager;

@interface WCPayLogicMgr : MMUserService <MMTipsViewControllerDelegate, ILinkEventExt, MMWebViewDelegate, MMResourceMgrExt, MMImageLoaderObserver, MMKernelExt, MMServiceProtocol, WCPayNetworkHelperDelegate, MMPackageDownloadMgrExt, IMsgExt, IAutoVerifySMSExt, INewABTestMgrExt, WCPaySingleDownloadLogicDelegate>
{
    WCPayLocalCachedData *m_oWCPayLocalCachedData;
    WCPayNetworkHelper *m_oWCPayNetworkHelper;
    unsigned int m_uWCPayLogicQuitCount;
    WCPayAuthenticationPay *m_oWCPayAuthenticationPay;
    WCPayAuthenticationPayVerifySMSStruct *m_oWCPayAuthenticationPayVerifySMSStruct;
    WCPayBindInfo *m_oWCPayBindInfo;
    WCPayBindInfoSMS *m_oWCPayBindInfoSMS;
    WCPayBindCardInfo *m_owcPayUnbindCardInfo;
    WCPayResetPasswordInfo *m_oWCPayResetPasswordInfo;
    WCPayAvalibleBankCardBinInfo *m_oWCPayAvalibleBankCardBinInfo;
    NSString *m_orderListExtBuffer;
    NSString *m_bizOrderListExtBuffer;
    NSDictionary *m_dicCFTNeedPayRequestInfo;
    NSString *m_oOldPassword;
    NSString *m_oNewPassword;
    NSDictionary *m_bufferAvailableCard;
    NSDate *m_oGetDate;
    NSDate *m_oGetBankLogoDate;
    NSMutableArray *m_aReceivedStatusChangedOrderList;
    NSMutableArray *m_aOrderList;
    unsigned int m_uiOrderListSum;
    unsigned int m_uiLimit;
    _Bool m_bGetTenpaySecureCtrlSalt;
    _Bool m_needRetryDownloadPackageList;
    TenpayCertificate *m_oTenpayCertificate;
    double m_lastTimestampWhenCodeIsNil;
    NSString *m_oTenpayCertificateToken;
    NSDate *m_ndOfflinePayTokenValidDate;
    _Bool m_bIsOfflinePayInPos;
    NSString *m_nsOfflinePayOrderIdInPos;
    _Bool m_bIsCurrentOfflinePayMsgFromPull;
    unsigned long long getTokenScene;
    _Bool m_hasLoadCreditCardViewDic;
    NSMutableDictionary *m_dicCreditCardHadView;
    unsigned int m_lastQueryCreditPayTime;
    NSString *m_nsCurrentScene;
    NSMutableArray *m_handledMsgSvrIds;
    WCRedEnvelopesCdnManager *_m_oCdnManager;
    NSMutableDictionary *m_sceneBuffer;
    _Bool isGetBankResourcesPending;
    unsigned int m_uiRealnameReportScene;
    NSMutableDictionary *m_redEnvelopesPromotionCacheDict;
    _Bool _isFromViewLicense;
    _Bool _isOfflineViewAppear;
    _Bool _isBackground;
    _Bool _isClickOfflinePayRefreshBtn;
    _Bool _bIsUserCreateOfflinePay;
    unsigned int _acceptLicenseScene;
    unsigned int _alertViewScene;
    NSString *_m_nsJsApiReqKey;
    NSString *_m_nsLogString_14954;
    NSString *_m_lastBankOrPhoneAlreadyShow;
    CDUnknownBlockType _licenseAcceptCallback;
    CDUnknownBlockType _licenseDenyCallback;
    CDUnknownBlockType _licenseStartLoadingCallback;
    CDUnknownBlockType _licenseStopLoadingCallback;
    MMTipsViewController *_payLicenseAlertView;
    NSDictionary *_licenseData;
    CDUnknownBlockType _realnameGuideAcceptCallback;
    CDUnknownBlockType _realnameGuideDenyCallback;
    MMTipsViewController *_realnameGuideAlertView;
    WCPaySingleDownloadLogic *_singleDownloadLogic;
    CDUnknownBlockType _mobileInfoCompletion;
    TenpayCertificate *_m_digitalCertControl;
    WCPayRealNameTipsViewController *_realnameTipsVC;
    NSString *_offlinePayCertNo;
    NSMutableDictionary *_showResourceDownloadDict;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *showResourceDownloadDict; // @synthesize showResourceDownloadDict=_showResourceDownloadDict;
@property(retain, nonatomic) NSString *offlinePayCertNo; // @synthesize offlinePayCertNo=_offlinePayCertNo;
@property(nonatomic) _Bool bIsUserCreateOfflinePay; // @synthesize bIsUserCreateOfflinePay=_bIsUserCreateOfflinePay;
@property(retain, nonatomic) WCPayRealNameTipsViewController *realnameTipsVC; // @synthesize realnameTipsVC=_realnameTipsVC;
@property(nonatomic) _Bool isClickOfflinePayRefreshBtn; // @synthesize isClickOfflinePayRefreshBtn=_isClickOfflinePayRefreshBtn;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) _Bool isOfflineViewAppear; // @synthesize isOfflineViewAppear=_isOfflineViewAppear;
@property(retain, nonatomic) TenpayCertificate *m_digitalCertControl; // @synthesize m_digitalCertControl=_m_digitalCertControl;
@property(copy, nonatomic) CDUnknownBlockType mobileInfoCompletion; // @synthesize mobileInfoCompletion=_mobileInfoCompletion;
@property(retain, nonatomic) WCPaySingleDownloadLogic *singleDownloadLogic; // @synthesize singleDownloadLogic=_singleDownloadLogic;
@property(retain, nonatomic) MMTipsViewController *realnameGuideAlertView; // @synthesize realnameGuideAlertView=_realnameGuideAlertView;
@property(copy) CDUnknownBlockType realnameGuideDenyCallback; // @synthesize realnameGuideDenyCallback=_realnameGuideDenyCallback;
@property(copy) CDUnknownBlockType realnameGuideAcceptCallback; // @synthesize realnameGuideAcceptCallback=_realnameGuideAcceptCallback;
@property(nonatomic) unsigned int alertViewScene; // @synthesize alertViewScene=_alertViewScene;
@property(nonatomic) _Bool isFromViewLicense; // @synthesize isFromViewLicense=_isFromViewLicense;
@property(nonatomic) unsigned int acceptLicenseScene; // @synthesize acceptLicenseScene=_acceptLicenseScene;
@property(retain, nonatomic) NSDictionary *licenseData; // @synthesize licenseData=_licenseData;
@property(retain, nonatomic) MMTipsViewController *payLicenseAlertView; // @synthesize payLicenseAlertView=_payLicenseAlertView;
@property(copy) CDUnknownBlockType licenseStopLoadingCallback; // @synthesize licenseStopLoadingCallback=_licenseStopLoadingCallback;
@property(copy) CDUnknownBlockType licenseStartLoadingCallback; // @synthesize licenseStartLoadingCallback=_licenseStartLoadingCallback;
@property(copy) CDUnknownBlockType licenseDenyCallback; // @synthesize licenseDenyCallback=_licenseDenyCallback;
@property(copy) CDUnknownBlockType licenseAcceptCallback; // @synthesize licenseAcceptCallback=_licenseAcceptCallback;
@property(retain, nonatomic) NSString *m_lastBankOrPhoneAlreadyShow; // @synthesize m_lastBankOrPhoneAlreadyShow=_m_lastBankOrPhoneAlreadyShow;
@property(retain, nonatomic) NSString *m_nsLogString_14954; // @synthesize m_nsLogString_14954=_m_nsLogString_14954;
@property(retain, nonatomic) NSString *m_nsJsApiReqKey; // @synthesize m_nsJsApiReqKey=_m_nsJsApiReqKey;
- (void)checkIsReceiveOrPayRedDotOverTime;
- (void)showABTestRedDot;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)OnHandleOpenAutoVerifySMS:(id)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)setWalletBalanceTitle:(id)arg1;
- (id)getWalletBalanceTitle;
- (void)setBalanceDetailRealnameGuideTitle:(id)arg1;
- (id)getBalanceDetailRealnameGuideTitle;
- (void)setIsShowOfflinePayTips:(_Bool)arg1;
- (_Bool)getIsShowOfflinePayTips;
- (void)setLBSTipsLastShowTime:(double)arg1;
- (double)getLBSTipsLastShowTime;
- (void)setBanners:(id)arg1;
- (id)getBanners;
- (void)GetBankResources:(id)arg1;
- (void)GetBankPackage;
- (void)QuitWCPay;
- (void)StartWCPay;
- (void)GetTenpaySecureCtrlSalt;
- (id)GetServerCurrentTimestamp;
- (void)VerifyPayPassword:(id)arg1 Scene:(unsigned int)arg2;
- (void)setCurrentSceneValue:(id)arg1;
- (id)getCFTNeedPayRequestExtraInfo;
- (void)setCFTNeedPayRequestExtraInfo:(id)arg1;
- (void)OnWCToTenpayCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToTenpayCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToTenpayCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetBanPayMobileInfoResponse:(id)arg1 Request:(id)arg2;
- (void)OnSetMainBankCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnSetMainBankCardResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayConfirmOfflinePayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayConfirmOfflinePayResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetOfflinePayInfoErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetOfflinePayInfoResponse:(id)arg1 Request:(id)arg2;
- (void)OnRemoveVirtualCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnRemoveVirtualCardResponse:(id)arg1 Request:(id)arg2;
- (void)OnEvaluateOrderErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnEvaluateOrderResponse:(id)arg1 Request:(id)arg2;
- (void)OnCheckWCPayJsApiErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnCheckWCPayJsApiResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubscribeServiceAppErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubscribeServiceAppResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayQuitQRScanPayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayQuitQRScanPayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCBizIapOrderDetailErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCBizIapOrderDetailResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetA8KeyLogicErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnGetA8KeyLogicResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubmitMallPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPaySubmitMallPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGenPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGenPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGetAppAuthUrlErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGetAppAuthUrlResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayDelOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayDelOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGetOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCPayGetOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetHtml5WalletUrl:(id)arg1 request:(id)arg2;
- (void)saveCacheWalletUrl:(id)arg1;
- (id)readCacheWalletUrl;
- (void)getHtml5WalletUrl;
- (_Bool)isNeedShowRedCodeInMoreView;
- (void)removeRedDotForTransferNowAndForever;
- (_Bool)needToShowRedDotForTransfer;
- (void)updateBrightness;
- (void)setBrightness:(double)arg1;
- (void)insideCallBackVerifyPayPassword:(id)arg1 OnRequest:(id)arg2;
- (void)cleanOverTimeNewBizExtMsgs;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)startDownloadWCPayImageWithURL:(id)arg1 md5:(id)arg2;
- (void)dealloc;
- (void)clearData;
- (void)enterForeground;
- (void)initLocalCachedData;
- (void)setRedEnvelopesPromotionCacheResponse:(id)arg1 byId:(id)arg2;
- (id)getRedEnvelopesPromotionCacheResponseByPayMsgId:(id)arg1;
- (id)init;
- (void)onManulLoginOK;
- (void)onAuthOK;
- (void)reportRightBarButtonScene:(unsigned int)arg1 payControlData:(id)arg2;
- (void)reportBankCardListScene:(unsigned int)arg1 bankCardType:(id)arg2;
- (void)reportMainWalletScene:(unsigned int)arg1 functionTypeId:(unsigned int)arg2;
- (void)resetUniqueSessionId;
- (void)setM_reportUUID:(id)arg1;
- (id)m_reportUUID;
- (void)setLqbNeedShowEnteranceReddot:(_Bool)arg1;
- (_Bool)lqbNeedShowEnteranceReddot;
- (void)setLqtNeedShowEnteranceReddot:(_Bool)arg1;
- (_Bool)lqtNeedShowEnteranceReddot;
- (void)setLqtNeesShowBalanceReddot:(_Bool)arg1;
- (_Bool)lqtNeedShowBalanceReddot;
- (void)setLqtNeedShowWalletReddot:(_Bool)arg1;
- (_Bool)lqtNeedShowWalletReddot;
- (id)getLqtWalletReddotWording;
- (void)setRealnameReportScene:(unsigned int)arg1;
- (unsigned int)getRealnameReportScene;
- (id)getRealnameSessionId;
- (void)setM_realNameUUID:(id)arg1;
- (id)m_realNameUUID;
- (void)checkHongbaoOpenLicense:(id)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3;
- (void)setIsLicenseQueryDelay:(long long)arg1;
- (_Bool)isLicenseQueryDelay;
- (void)checkShowRealnameGuideInfo:(id)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3;
- (void)webViewReturn:(id)arg1;
- (void)OnRealNameVeirfySuccess:(id)arg1;
- (void)OnRealnameVerifyCancel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)handleRealNameInfo:(id)arg1 reportDelegate:(id)arg2 acceptCallback:(CDUnknownBlockType)arg3 denyCallback:(CDUnknownBlockType)arg4;
- (void)handleRealNameInfo:(id)arg1 reportDelegate:(id)arg2;
- (void)handleRealNameInfo:(id)arg1;
- (void)showLicenseAlertView:(id)arg1;
- (void)setAcceptRealnameLicense:(_Bool)arg1;
- (_Bool)getAcceptRealnameLicense;
- (void)checkAndShowRealnameLicense:(unsigned int)arg1 acceptCallback:(CDUnknownBlockType)arg2 denyCallback:(CDUnknownBlockType)arg3 startLoadingCallback:(CDUnknownBlockType)arg4 stopLoadingCallback:(CDUnknownBlockType)arg5;
- (unsigned int)GetStatusChangedOrderListCount;
- (id)GetStatusChangedOrderList;
- (void)RemoveAllStatusChangedOrder;
- (void)RemoveStatusChangedOrderDetail:(id)arg1;
- (void)AddStatusChangedOrderDetail:(id)arg1;
- (void)SetEvaluateOrder:(id)arg1;
- (void)GetIAPHistoryOrderDetailInfo:(id)arg1;
- (void)GetHistoryOrderDetailInfo:(id)arg1 PayType:(int)arg2;
- (void)GetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4 payScene:(int)arg5 payChannel:(int)arg6;
- (void)GetOrderDetailInfoAndBindQueryNew:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3 Scene:(int)arg4;
- (void)GetOrderDetailInfo:(id)arg1 ProductsID:(id)arg2 UsedBalance:(int)arg3;
- (void)DeleteAllOrder;
- (void)DeleteOrder:(id)arg1 PayType:(unsigned int)arg2;
- (void)GetOrderList:(unsigned int)arg1 Limit:(int)arg2;
- (void)clearOrderListCache;
- (void)insideCallBackEvaluateOrderErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackEvaluateOrderResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayDelOrderHistoryResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayDelOrderHistoryErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCBizIapOrderDetailResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetHistoryOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetWebPayOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (void)saveCashierSwitchInfo:(id)arg1;
- (void)insideCallBackGetOrderDetailInfoAndBindQueryNew:(id)arg1 OnRequest:(id)arg2;
- (id)GetAllOrderCanPayBank:(id)arg1;
- (void)ClearBindCardContext;
- (id)GetBindCardUUID;
- (int)GetBindCardScene;
- (_Bool)GetIsInBindCardProcess;
- (void)SetBindCardUUID:(id)arg1;
- (void)SetBindCardScene:(int)arg1;
- (void)SetIsInBindCardProcess:(_Bool)arg1;
- (void)EnterBindCardProcess:(int)arg1;
- (void)insideCallBackRealnameReg:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackRealnameAuthen:(id)arg1 OnRequest:(id)arg2;
- (void)SetWCPayPasswordInBind:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 UserInfo:(id)arg5 isOverseasBankCard:(_Bool)arg6 BindCard:(_Bool)arg7 isOnlyVerify:(_Bool)arg8 data:(id)arg9 sessionId:(id)arg10 realnameReq:(id)arg11;
- (void)BindCardVerifySMS:(id)arg1 UserInfo:(id)arg2;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2 Retry:(_Bool)arg3;
- (void)GetTenpayImportBindQuery:(id)arg1;
- (void)insideCallBackSetWCPayPasswordInReset:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInBind:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCardSMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackTenpayImportBindQuery:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetBanPayMobileInfoResponse:(id)arg1 Request:(id)arg2;
- (void)GetBanPayMobileInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SetIsShowedBalanceFirstTips:(_Bool)arg1;
- (_Bool)IsShowedBalanceFirstTips;
- (id)getLocalBalanceInfo;
- (void)updateWalletBalance:(unsigned long long)arg1;
- (_Bool)updateBalanceWithInfo:(id)arg1 partical:(_Bool)arg2;
- (void)setLocalCardDetailBaseUrl:(id)arg1;
- (id)getLocalCardDetailBaseUrl;
- (void)SetShowedChangeWalletTips:(_Bool)arg1;
- (_Bool)IsShowedChangeWalletTips;
- (void)insideCallBackSetUserWallet:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryUserWallet:(id)arg1 OnRequest:(id)arg2;
- (void)SetUserWallet:(id)arg1;
- (void)QueryUserWallet;
- (void)RealnameReg:(id)arg1 password:(id)arg2;
- (void)RealnameAuthen:(id)arg1 idCard:(id)arg2;
- (void)RealnameAuthen:(id)arg1;
- (void)setVisitActivity:(unsigned int)arg1;
- (_Bool)isVisitActivity:(unsigned int)arg1;
- (void)setLocalBadgetIndex:(unsigned int)arg1;
- (unsigned int)getLocalBadgetIndex;
- (void)SetShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (_Bool)IsShowedRedCodeForWXBorrowMoneyItem:(id)arg1 WithRedCodeIndex:(unsigned int)arg2;
- (void)SetShowedHKFaceToFaceReceiveMoneyTips:(_Bool)arg1;
- (_Bool)IsShowedHKFaceToFaceReceiveMoneyTips;
- (void)SetShowedFaceToFaceReceiveMoneyTips:(_Bool)arg1;
- (_Bool)IsShowedFaceToFaceReceiveMoneyTips;
- (void)SetShowedFaceToFaceTransferViewTips:(_Bool)arg1;
- (_Bool)IsShowedFaceToFaceTransferViewTips;
- (void)SetShowedBalanceDescription:(_Bool)arg1;
- (_Bool)IsShowedBalanceDescription;
- (id)GetLastBankCard:(int)arg1;
- (id)GetLastBankCard;
- (id)GetMainBankCard;
- (void)SetMainBankCard:(id)arg1;
- (void)GetAvailableBank;
- (void)UnBindCard:(id)arg1 WCPayPassword:(id)arg2 unbindScene:(int)arg3;
- (void)UnBindCard:(id)arg1 WCPayPassword:(id)arg2;
- (void)GetCardBinAndAvailableBankWithoutOrderID:(id)arg1 scene:(int)arg2;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(int)arg2 fromRealname:(_Bool)arg3 sessionId:(id)arg4;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(int)arg2 fromRealname:(_Bool)arg3;
- (void)GetCardBinAndAvailableBank:(id)arg1 scene:(int)arg2;
- (void)GetBindingCardBin:(id)arg1;
- (void)addParametersForBalance:(id)arg1;
- (void)addParametersForTouchID:(id)arg1;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3 UsedLocalCacheCard:(_Bool)arg4 Scene:(int)arg5;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3 UsedLocalCacheCard:(_Bool)arg4;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2;
- (void)GetPayCardListAndUsrVerifiedInfo:(_Bool)arg1 ToMainServiceSearch:(_Bool)arg2 UsedMemoryCacheCard:(_Bool)arg3;
- (void)callBackBufferGetPayCardListAndUsrVerifiedInfo:(id)arg1;
- (void)insideCallBackSetMainBankCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackSetMainBankCardResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackUnBindCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetCardBinAndAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetAvailableBank:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetCardBin:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetPayCardListAndUsrVerifiedInfo:(id)arg1 OnRequest:(id)arg2 NewInfo:(_Bool)arg3;
- (void)saveCreditCardHadViewDic;
- (void)loadCreditCardHadViewDic;
- (_Bool)hadCreditCardView:(id)arg1;
- (void)setCreditCardView:(id)arg1;
- (void)ShowedCreditCardNew:(unsigned int)arg1;
- (_Bool)IsCreditCardShowedNew:(unsigned int)arg1;
- (void)RemoveVirtualCard:(unsigned int)arg1 cardBankType:(id)arg2;
- (void)UnBindCreditPay:(id)arg1 SerialNo:(id)arg2 passwd:(id)arg3;
- (void)VerifyCreditPayAndCreateCard:(id)arg1 password:(id)arg2 sessionKey:(id)arg3 bindSessionKey:(id)arg4 bankType:(id)arg5;
- (void)VerifyCreditPaySmsVerifyCode:(id)arg1 sessionKey:(id)arg2;
- (void)VerifyCreditPayPassword:(id)arg1 bankType:(id)arg2;
- (void)AuthenticationCreditPayIdentifier:(id)arg1 idNum:(id)arg2 sessionKey:(id)arg3 retry:(_Bool)arg4 bankType:(id)arg5;
- (void)CommitWXCreditAnswer:(id)arg1 questionAry:(id)arg2;
- (void)QueryWXCreditQuestion:(id)arg1;
- (void)QueryWXCreditCardDetail:(id)arg1 password:(id)arg2;
- (void)QueryWXCreditCardInfo:(id)arg1 bankType:(id)arg2 goToBank:(_Bool)arg3 forceQuery:(_Bool)arg4;
- (void)insideCallBackRemoveVirtualCardErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackRemoveVirtualCardResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackUnbindCreditPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPayAndCreateCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPaySmsVerifyCode:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackVerifyCreditPayPassword:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationCreditPayIdentifier:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCommitWXCreditCardAnswer:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryWXCreditCardQuestion:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryWXCreditCardDetail:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryWXCreditCardInfo:(id)arg1 OnRequest:(id)arg2;
- (void)AddSynthesizeSpeechRecord:(id)arg1;
- (_Bool)IsExistSynthesizeSpeechRecord:(id)arg1;
- (void)handleSetWalletTypeMsg:(id)arg1;
- (void)handleEnableWalletMsg:(id)arg1;
@property(readonly, nonatomic) WCRedEnvelopesCdnManager *m_oCdnManager;
- (_Bool)checkShouldHandleId:(long long)arg1;
- (void)removeAllNewBankCardSerial;
- (void)removeNewBankCardSerial:(id)arg1;
- (void)setNewBankCardSerial:(id)arg1;
- (id)newBankCardSerials;
- (void)setShowBankCardRedDot:(_Bool)arg1;
- (_Bool)showBankCardRedDot;
- (void)setShowWalletRedDot:(_Bool)arg1;
- (_Bool)showWalletRedDot;
- (void)setWalletRedDotWording:(id)arg1;
- (id)walletRedDotWording;
- (_Bool)checkIsBankCardListNewBannerOverTime;
- (_Bool)checkIsBankCardRedDotOverTime;
- (void)updateBankCardListNewBannerLastUpdateTime;
- (void)updateBankCardRedDotLastUpdateTime;
- (void)addNewGroupPayPaySuccessMsgRecord:(id)arg1;
- (_Bool)IsExistGroupPayPaySuccessMsgRecord:(id)arg1;
- (void)addNewGroupPayLaunchMsgRecord:(id)arg1;
- (_Bool)IsExistGroupPayLaunchMsgRecord:(id)arg1;
- (void)AddNewTransferMsgRecord:(id)arg1;
- (_Bool)IsExistTransferMsgRecord:(id)arg1;
- (void)AddNewHBMsgRecord:(id)arg1;
- (_Bool)IsExistHBMsgRecord:(id)arg1;
- (void)handleWCPayBalanceDetail:(id)arg1;
- (void)handleYearHB:(id)arg1;
- (void)handleTransferReturnMessage:(id)arg1;
- (void)preDownloadHbShowResource:(id)arg1;
- (void)preDownloadEmoticonResource:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)isTransferReturnMessage:(id)arg1;
- (void)handleWCPayTransferOverTime:(id)arg1;
- (void)handleOverseaFacingReceiveMoneyMsg:(id)arg1;
- (void)handleTransToBankCardEntryMsg:(id)arg1;
- (void)handleOverseaRedEnvelopeMsg:(id)arg1;
- (void)handleTranfserExpireAlertMsg:(id)arg1;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 extraInfo:(id)arg3 filePath:(id)arg4 totalLength:(unsigned long long)arg5;
- (void)handleUpdateSpeechPosMsg:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3 IsPull:(_Bool)arg4;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleExclusiveRedEnvelopesTimeout:(id)arg1;
- (void)handleReceiveOrPayRedDotMsg:(id)arg1;
- (void)handleWCPayNewLQTRedDotMessage:(id)arg1;
- (void)handleWCPayLQTRedDotMessage:(id)arg1;
- (void)handleWCPayOfflinePayUserPaying:(id)arg1;
- (void)handleWCPayOfflinePayReqkeyConfirm:(id)arg1;
- (void)handleWCPayCardRedDot:(id)arg1;
- (void)handleWCPayDelayTransferPay:(id)arg1;
- (void)handleWCPayAA24HourUnPayNotifyMsg:(id)arg1;
- (void)handleWCPayAAPaySuccessMsg:(id)arg1;
- (void)handleWCPayLaunchAAMsgUpdate:(id)arg1;
- (void)handleWCPayMakeTransferMoneySuccessMsg:(id)arg1;
- (void)handleWCPayMakeHBSuccessMsg:(id)arg1;
- (void)handleWCPayFacingReceiveMoneyMsg:(id)arg1;
- (void)handleWCPayOrderNotifyMsg:(id)arg1;
- (void)handleWCPayFreezeOfflinePayMsg:(id)arg1;
- (void)handleWCPayOfflinePayRefreshTokenMsg:(id)arg1;
- (void)handleWCPayFreshPayCardListMsg:(id)arg1;
- (void)handleWCPayOfflinePayConfirmMsg:(id)arg1;
- (void)handleWCPayOfflinePaySuccessMsg:(id)arg1;
- (id)getDateTimeStringFromTimeStamp:(double)arg1;
- (id)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (id)parseFinderInfoViewXml:(struct XmlReaderNode_t *)arg1;
- (void)handlePaySuccessMsg:(id)arg1;
- (void)handleWCPayOfflinePayNotifyMsg:(id)arg1;
- (void)handleWCPayOfflinePayRealNameMsg:(id)arg1;
- (void)HandleWCPayOrderListStatusUpdate:(id)arg1;
- (void)handleFreezeBalanceMsg:(id)arg1;
- (_Bool)importCftCert:(id)arg1;
- (id)getCftCSR:(id)arg1;
- (_Bool)isOfflinePayHasSuccess;
- (void)setOfflinePayHasSuccess;
- (void)setTokenUpdateInterval:(long long)arg1;
- (void)setRegetTokenNum:(long long)arg1;
- (long long)getTokenUpdateInterval;
- (long long)getRegetTokenNum;
- (long long)getLastTokenUpdateTime;
- (void)setLastTokenUpdateTime:(long long)arg1;
- (_Bool)setCftTokenCode:(id)arg1 certId:(id)arg2 useSm4:(_Bool)arg3;
- (void)removeCertid;
- (_Bool)deleteCftCert:(id)arg1;
- (void)cleanCftToken:(id)arg1;
- (id)getCftCertSign:(id)arg1 message:(id)arg2;
- (_Bool)setTokenPin:(id)arg1;
- (id)getTokenPin;
- (long long)getRemainCftTokenNum:(id)arg1;
- (id)getCftToken:(id)arg1;
- (_Bool)setCertIdStr:(id)arg1;
- (_Bool)setDeviceIDStr:(id)arg1;
- (_Bool)setOfflineCodeVer:(id)arg1;
- (id)getOfflineCodeVer;
- (id)genSm4CBCKey;
- (_Bool)GetOfflinePayGetMsgIsEnabledInABTest;
- (_Bool)GetCurrentOfflinePayMsgFromPull;
- (void)SetCurrentOfflinePayMsgFromPull:(_Bool)arg1;
- (int)GetOfflinePayOfflineGetMsgPayMsgType;
- (void)SetOfflinePayOfflineGetMsgPayMsgType:(int)arg1;
- (id)GetOfflinePayOfflineGetMsgTransId;
- (void)SetOfflinePayOfflineGetMsgTransId:(id)arg1;
- (id)GetOfflinePayOfflineGetMsgReqKey;
- (void)SetOfflinePayOfflineGetMsgReqKey:(id)arg1;
- (void)SetOfflinePayInPosTimeoutInterval:(double)arg1;
- (double)GetOfflinePayInPosTimeoutInterval;
- (id)GetOfflinePayOrderIdInPos;
- (void)SetOfflinePayOrderIdInPos:(id)arg1;
- (_Bool)GetOfflinePayPosStatus;
- (void)SetOfflinePayPosStatusWithoutReport:(_Bool)arg1;
- (void)SetOfflinePayPosStatus:(_Bool)arg1;
- (double)GetOfflinePayOfflineGetMsgNextRequestDelayTime;
- (double)GetOfflinePayOfflineGetMsgRequestStartTimestamp;
- (void)SetOfflinePayOfflineGetMsgRequestStartTimestamp;
- (int)GetOfflinePayOfflineGetMsgPollTime;
- (void)SetOfflinePayOfflineGetMsgPollTime:(int)arg1;
- (id)GetOfflinePayOfflineGetMsgAckKey;
- (void)SetOfflinePayOfflineGetMsgAckKey:(id)arg1;
- (void)LogOfflinePayOrderIdStateInLocalStorage;
- (unsigned long long)GetOfflinePayTransIdNumInLocalStorage;
- (void)SetOfflinePayAllOrderIdToFinalStateInLocalStorage;
- (int)GetOfflinePayOrderIdStateInLocalStorage:(id)arg1;
- (int)FindOfflinePayOrderIdInLocalStorage:(id)arg1;
- (void)SetOfflinePayOrderIdStateInLocalStorage:(id)arg1 withState:(int)arg2;
- (void)reportOfflineShowCode:(unsigned int)arg1 isSnapshot:(_Bool)arg2 statDic:(id)arg3 isUserViewDigit:(_Bool)arg4;
- (void)reportOfflineShowCode:(unsigned int)arg1 isSnapshot:(_Bool)arg2 statDic:(id)arg3;
- (id)GetOfflinepayLastSelectedBankCard;
- (void)SetOfflinePayLastSelctedBankCard:(id)arg1;
- (unsigned long long)getPrefix;
- (id)getCardIdList;
- (void)saveTokenInfoFromDictionary:(id)arg1;
- (void)saveCardId:(id)arg1;
- (_Bool)updateOfflinePayTokenIfNeedWithUserInfo:(id)arg1;
- (_Bool)updateOfflinePayTokenIfNeed;
- (id)currentCardInfoShouldUseFromData:(id)arg1;
- (unsigned long long)remainOfflineTokenCount;
- (id)getCardListInfoWithBindSerial:(id)arg1;
- (_Bool)couldGetOfflinePayCodeWithBindSerial:(id)arg1;
- (id)GetWCPayOfflinePayCodeStringWithBindSerial:(id)arg1 entryScene:(unsigned int)arg2 statDic:(id)arg3;
- (id)getCertIdIfExist;
- (void)updateTokenAfterSeconds:(double)arg1 withUserInfo:(id)arg2;
- (void)ScheduleUpdateTokenWhenShitHappened;
- (void)SendOfflinePayUserBindqueryRequestWithEntryScene:(int)arg1 extraInfo:(id)arg2 useCache:(_Bool)arg3;
- (void)SendOfflinePayUserBindqueryRequestWithEntryScene:(int)arg1 extraInfo:(id)arg2;
- (void)reportRemainNum:(long long)arg1 entryScene:(unsigned int)arg2 isSnapshot:(_Bool)arg3 statDic:(id)arg4 isUserViewDigit:(_Bool)arg5;
- (void)reportRemainNum:(long long)arg1;
- (void)GetBarCodeFromQRCode:(id)arg1;
- (void)ConfirmOfflinePayRequest:(id)arg1 routeInfo:(unsigned char)arg2;
- (id)GetWCPayOfflonePayQRCode:(id)arg1 MainCardBindSerial:(id)arg2 Balance:(_Bool)arg3;
- (id)GetWCPayOfflonePayQRCode:(id)arg1 MainCardBindSerial:(id)arg2;
- (void)_updateOfflinePayToken:(id)arg1;
- (void)updateOfflinePayTokenFromHoneyPay;
- (void)UpdateOfflinePayTokenFromScene:(unsigned long long)arg1;
- (id)getDeviceIDStr;
- (void)CleanTokenForCurrentUser;
- (void)UnfreezeOfflinePay:(id)arg1;
- (void)ChangeOfflinePayLimitFee:(id)arg1;
- (void)QueryOfflinePayUserInfo:(int)arg1;
- (void)ClearOfflinePay;
- (void)CloseOfflinePay:(id)arg1;
- (void)CreateOfflinePay:(id)arg1;
- (id)getFreezeOfflinePayInfo;
- (_Bool)IsCreateOfflinePay;
- (void)ShowedOfflinePayNew;
- (_Bool)IsOfflinePayShowedNew;
- (void)QueryOfflinePayInfo:(id)arg1;
- (void)QueryLocalCachedOfflinePayInfo;
- (void)insideCallBackOfflineUserBindQuery:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBarCodeFromQRCode:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnWCPayConfirmOfflinePayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnWCPayConfirmOfflinePayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnGetOfflinePayInfoErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnGetOfflinePayInfoResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetOfflinePayToken:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackUnfreezeOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackChangeOfflineLimit:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackQueryOfflinePayUserInfo:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCloseOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCreateOfflinePay:(id)arg1 OnRequest:(id)arg2;
- (void)GetTransferPrepayRequest:(id)arg1;
- (void)GetFetchPrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2 FetchAll:(_Bool)arg3;
- (void)GetSavePrepayRequest:(unsigned long long)arg1 BindCardInfo:(id)arg2;
- (void)GetA8Key:(id)arg1;
- (void)GetMallPaypreRequest:(id)arg1;
- (void)GetCheckPayPwdVerifyCodeByToken:(id)arg1;
- (void)GetCheckPayPwdByToken:(id)arg1;
- (void)GetCheckWCPayAuthorityRequest:(id)arg1;
- (void)GetGenPaypreRequest:(id)arg1;
- (void)GetAppAuthVerifyRequest:(id)arg1;
- (void)insideCallBackOnVerifyPayPwdVerifyCodeResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnVerifyPayPwdResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetTransferPrepayResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackCheckWCPayJsApiResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPaySubmitMallPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackGetA8KeyLogicErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackOnGetBalanceFetchResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetBalanceSaveResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetA8KeyLogicResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGetAppAuthUrlErrorResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGenPrepayResponse:(id)arg1 Request:(id)arg2;
- (void)insideCallBackWCPayGenPrepayErrorResponse:(id)arg1 Request:(id)arg2;
- (void)AuthenticationResetBalancePayVerifySMS:(id)arg1;
- (void)AuthenticationResetBalanceTelPay:(id)arg1;
- (void)GetWCPayQuitQRPay:(id)arg1 UUID:(id)arg2;
- (void)PaySubscribeServiceAppWithPaySubscribeRequest:(id)arg1;
- (void)PaySubscribeServiceApp:(id)arg1;
- (void)AuthenticationPayVerifyBind:(id)arg1;
- (void)PayOrderQuery:(id)arg1;
- (void)GetOrderDetailInfoAfterPaidError:(id)arg1 PayScene:(unsigned int)arg2;
- (void)SetWCPayPasswordInPay:(id)arg1;
- (void)AuthenticationPayVerifySMS:(id)arg1;
- (void)AuthenticationPay:(id)arg1 CMDID:(unsigned int)arg2;
- (void)AuthenticationPay:(id)arg1;
- (void)insideCallBackAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationResetBalanceTelPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackPayQueryOrderAfterPaidError:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackGetOrderDetailInfoAfterPaidError:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnAuthenticationPayVerifyBind:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInPay:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationPayVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackAuthenticationPay:(id)arg1 OnRequest:(id)arg2;
- (void)parseShowInfo:(id)arg1 from:(id)arg2;
- (void)SetWCPayPasswordInReset:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 isOverseasBankCard:(_Bool)arg5;
- (void)ResetWCPayPasswordVerifySMS:(id)arg1 RetKey:(id)arg2;
- (void)ResetWCPayPasswordVerifyCard:(id)arg1;
- (void)ModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 RepeatWCPayPassword:(id)arg3;
- (void)insideCallBackResetWCPayPasswordVerifySMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackResetWCPayPasswordVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackModifyWCPayPassword:(id)arg1 OnRequest:(id)arg2;
- (_Bool)SendC2CMessageForSecure:(id)arg1 TemplateID:(id)arg2 SenderTitle:(id)arg3 ReceiverTitle:(id)arg4 Description:(id)arg5 SenderDesc:(id)arg6 ReceiverDesc:(id)arg7 JumpUrl:(id)arg8 SceneID:(unsigned int)arg9;
- (void)insideCallBackOnSendC2CSecureMessageResponse:(id)arg1 OnRequest:(id)arg2;
- (void)CancelBizQRPay:(id)arg1 ReceiverUserName:(id)arg2 ReceiverTicket:(id)arg3 ReceiverOpenId:(id)arg4;
- (void)CancelTransferQRPay:(id)arg1 ReceiverUserName:(id)arg2;
- (void)GetFixedAmountQRCode:(id)arg1;
- (void)GetTransferUserName:(id)arg1 payChannel:(int)arg2;
- (void)DeleteTransferUser:(id)arg1;
- (void)SetTransferedUser:(id)arg1;
- (id)GetTransferedUserList;
- (void)RetrySendTransferMessage:(id)arg1;
- (void)RefuseTransferMoney:(id)arg1;
- (void)ConfirmTransferMoney:(id)arg1;
- (void)CheckTransferMoneyStatus:(id)arg1;
- (void)insideCallBackOnGetFixedAmountQRCodeResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnGetTransferUserNameResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnRetrySendTransferMessageResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnRefuseTransferMoneyResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnConfirmTransferMoneyResponse:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackOnCheckTransferMoneyStatusResponse:(id)arg1 OnRequest:(id)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)UpdateTenpaySecureCtrlSalt;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 retryCount:(unsigned int)arg5;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 retryCount:(unsigned int)arg5 routeInfo:(unsigned char)arg6;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4 routeInfo:(unsigned char)arg5;
- (void)GetWCPayBusinessRequest:(id)arg1 WXInnerUseDic:(id)arg2 CMDID:(unsigned int)arg3 OutputType:(unsigned int)arg4;
- (void)safeSaveLocalData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

