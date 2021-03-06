//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWAExptService-Protocol.h"

@class NSString;

@interface WAExptProxy : NSObject <IWAExptService>
{
}

+ (_Bool)willUseWeAppHandoff;
+ (_Bool)shouldAllowHandoff:(_Bool)arg1 withGameCheck:(_Bool)arg2 withDeviceType:(unsigned int)arg3 withClientVersion:(unsigned int)arg4;
+ (_Bool)shouldAllowCurVersion:(unsigned int)arg1 withDeviceType:(unsigned int)arg2;
+ (_Bool)isCloseSilentOpen;
+ (_Bool)isOpenShoppingCartEntry;
+ (double)splashADTimeInterval:(_Bool)arg1;
+ (_Bool)isOpenLocalVersionFallback;
+ (id)splashADEnterSceneArray;
+ (_Bool)isOpenMiniTask;
+ (_Bool)shouldShowWxaBrandTradingGuaranteeTag;
+ (_Bool)shouldShowWxaOfficialTag;
+ (_Bool)isOpenPerformanceIndexReport;
+ (_Bool)isOpenCameraScanWxCodePreload;
+ (_Bool)isOpenCdnPreConnect;
+ (_Bool)isOpenMPShortLinkGlobalHighLight;
+ (_Bool)isOpenMPShortLinkMenuEntry;
+ (_Bool)isOpenCronetNewDNS;
+ (_Bool)isColdLaunchUseWeakLoading;
+ (_Bool)canAddWeAppPageToWCFavorite;
+ (long long)weAppPublicResCacheNum;
+ (long long)weAppPublicResCleanPeriod;
+ (_Bool)shouldEnableScrollViewEnhancement;
+ (_Bool)canShowShareTimelineItem:(_Bool)arg1;
+ (id)checkVideoContentTypeArr;
+ (id)checkVideoContentTypeTimeOut;
+ (id)checkVideoContentTypeSwitch;
+ (_Bool)isOpenLaunchTimeAxisKV;
+ (_Bool)isWeAppShouldShowLiveAppMenu;
+ (_Bool)isWeAppUsePkgEncrypt:(_Bool)arg1;
+ (_Bool)isWeappUseNewPkgUrl;
+ (_Bool)isOpenWeGameGfxRenderMode;
+ (_Bool)isWeGameAudioEngineEnable;
+ (_Bool)isWeAppUseSkiaCanvas;
+ (_Bool)isOpenLaunchDownloadInPrecheckerThread;
+ (_Bool)shouldOpenMiniProgramABTestCheck;
+ (_Bool)shouldOpenGameABTestCheck;
+ (_Bool)shouldOpenIsolatePluginCheck;
+ (_Bool)shouldCloseWeGameMultiSplitPlugin;
+ (_Bool)shouldAllowMultiSplitPluginCode;
+ (_Bool)shouldUseCronetWhenDownloadPkg;
+ (_Bool)shouldAllowWeAppSplitPlugin;
+ (_Bool)shouldAllowWeGameSplitPlugin;
+ (_Bool)shouldAllowWeGamePreloadTask;
+ (unsigned int)getWeAppPreloadTaskDegradeType;
+ (_Bool)shouldUseSetCustomAgent;
+ (double)splashADTimeThreshold;
+ (_Bool)shouldShowSplashAD;
+ (_Bool)shouldShowCommentEntryInMenu;
+ (_Bool)shouldInsertToWebLayer:(long long)arg1;
+ (_Bool)shouldClosePubLibDelayUnpack;
+ (_Bool)shouldCloseSearchEntryInMainList;
+ (_Bool)isNearEntryCloseAlwaysInMainList;
+ (_Bool)shouldShowNearEntryInMainList;
+ (long long)getABTestNearByEntranceMode;
+ (double)videlPlayBufferTime;
+ (_Bool)shouldAllowBatchAttrSyncInMainFrameTaskBar;
+ (_Bool)shouldShowMainFrameTaskBar;
+ (_Bool)shouldShowGameEntryInFTSSearch;
+ (_Bool)shouldShowGameEntryInMainList;
+ (_Bool)shouldOpenGlobalLocalSearch;
+ (_Bool)shouldReportCommandBufferPerformanceInWeGame;
+ (_Bool)shouldUseCommandBufferInWeGame;
+ (_Bool)shouldReportWebglCmd;
+ (_Bool)shouldAllowPreloadTaskControlByUserCmd;
+ (_Bool)shouldCloseWeAppPreloadTask;
+ (_Bool)shouldCloseAdDeviceInfoReport;
+ (_Bool)shouldOpenLaunchParalellRequest;
+ (_Bool)shouldOpenWeGameSplashScreen;
+ (_Bool)shouldOpenWeGamePredownload;
+ (_Bool)shouldOpenImageSearchEntry;
+ (_Bool)shouldUseWegameWxAudio;
+ (_Bool)shouldUseWegameCronetDownload;
+ (_Bool)shouldUseWegameCronetRequest;
+ (_Bool)shouldUseWegameWcwss;
+ (_Bool)shouldUseSkiaCanvas;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

