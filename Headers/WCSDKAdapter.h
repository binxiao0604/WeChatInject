//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCABTest-Protocol.h"
#import "IWCAudioHelper-Protocol.h"
#import "IWCAudioSessionService-Protocol.h"
#import "IWCBrand-Protocol.h"
#import "IWCCdnComMgr-Protocol.h"
#import "IWCExpt-Protocol.h"
#import "IWCIdleTimerUtil-Protocol.h"
#import "IWCKeyReporter-Protocol.h"
#import "IWCKitchenMgr-Protocol.h"
#import "IWCLimitedModeMgr-Protocol.h"
#import "IWCLocalization-Protocol.h"
#import "IWCLogStat-Protocol.h"
#import "IWCLogger-Protocol.h"
#import "IWCMonoServiceLogic-Protocol.h"
#import "IWCSightFacade-Protocol.h"
#import "IWCTheme-Protocol.h"
#import "IWCThemeUtil-Protocol.h"
#import "IWCUtilityProxyServiceProtocol-Protocol.h"
#import "IWCViewManager-Protocol.h"

@class NSString;

@interface WCSDKAdapter : NSObject <IWCLogger, IWCLogStat, IWCKeyReporter, IWCLocalization, IWCBrand, IWCTheme, IWCThemeUtil, IWCABTest, IWCViewManager, IWCExpt, IWCMonoServiceLogic, IWCCdnComMgr, IWCIdleTimerUtil, IWCSightFacade, IWCAudioHelper, IWCUtilityProxyServiceProtocol, IWCAudioSessionService, IWCKitchenMgr, IWCLimitedModeMgr>
{
}

+ (_Bool)getBoolValue:(id)arg1;
+ (_Bool)isDefineKitchen;
+ (_Bool)isWmpfProject;
+ (void)restart;
+ (_Bool)otherPlayingBeforeActive;
+ (_Bool)isOtherAudioPlaying;
+ (unsigned long long)currentCategoryId;
+ (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setCategroy:(unsigned long long)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1;
+ (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)covertAVCategroy2WCCategroy:(id)arg1;
+ (_Bool)setAVCategroy:(id)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
+ (_Bool)setAVCategroy:(id)arg1 withBlockType:(unsigned long long)arg2;
+ (_Bool)setAVCategroy:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4 withBlockType:(unsigned long long)arg5;
+ (_Bool)setAVCategroy:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3 withBlockType:(unsigned long long)arg4;
+ (_Bool)setAVCategroy:(id)arg1;
+ (_Bool)setAVCategroy:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)setAVCategroy:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (_Bool)setSpeaker:(_Bool)arg1 error:(id *)arg2;
+ (_Bool)setMode:(id)arg1 error:(id *)arg2;
+ (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
+ (void)RestartMusic;
+ (void)StopAudio;
+ (void)RestartAudioTalk;
+ (_Bool)PauseAudioTalk;
+ (_Bool)PauseMusic;
+ (_Bool)IsMusicPaused;
+ (_Bool)IsMusicIdle;
+ (long long)cameraPosition;
+ (_Bool)isSupportSwitchCamera;
+ (void)resumeMusicPlay;
+ (void)pauseMusic;
+ (void)SetIdleTimeDisable:(_Bool)arg1;
+ (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 durationMs:(int)arg4;
+ (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
+ (_Bool)StartHttpVideoStreamingDownload:(id)arg1 httpUrl:(id)arg2 fileType:(int)arg3 filePath:(id)arg4 preloadPercent:(int)arg5 Timeout:(unsigned int)arg6 referer:(id)arg7 blockSize:(unsigned int)arg8;
+ (_Bool)StopDownloadWithClientMediaID:(id)arg1 downloadTaskInfo:(id *)arg2;
+ (unsigned long long)QueryContinousSizeWithClientId:(id)arg1 offset:(unsigned long long)arg2;
+ (unsigned long long)QueryDownloadedSizesWithClientId:(id)arg1;
+ (int)GetAverageSpeedWithClientId:(id)arg1 recentSeconds:(int)arg2;
+ (int)GetAverageSpeedWithRecentSeconds:(int)arg1;
+ (int)GetRecentAverageSpeed;
+ (id)getConflictWording;
+ (void)showMonoServiceWorkingConflict;
+ (_Bool)isVideoMonoServiceWorking;
+ (_Bool)isAudioMonoServiceWorking;
+ (_Bool)shouldWCBlueToothForceSilentInitControl;
+ (_Bool)getExpt:(id)arg1 withBoolDef:(_Bool)arg2;
+ (id)getExpt:(id)arg1 withDef:(id)arg2;
+ (id)getSnsUserOpLogAbtestItem;
+ (id)getUseServerTimeAbtestItem;
+ (void)parseColorDeclarations:(id)arg1 toValues:(id)arg2;
+ (id)parseFontFromValues:(id)arg1;
+ (double)parseFontSizeFromValues:(id)arg1;
+ (id)parseStringFromValues:(id)arg1;
+ (double)parseFloatFromValues:(id)arg1;
+ (long long)parseIntegerFromValues:(id)arg1;
+ (_Bool)parseBOOLFromValues:(id)arg1;
+ (struct UIEdgeInsets)parseEdgeInsetsFromValues:(id)arg1;
+ (struct CGRect)parseRectFromValues:(id)arg1;
+ (struct CGSize)parseSizeFromValues:(id)arg1;
+ (struct CGPoint)parsePointFromValues:(id)arg1;
+ (id)parseStrechedImageFromValues:(id)arg1;
+ (id)parseColorFromValues:(id)arg1;
+ (void)reloadCssForMultiTaskingIfNeed;
+ (id)pathOfResNamed:(id)arg1;
+ (id)getImageName:(id)arg1;
+ (id)svgImageDisableNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageHighlightNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 angle:(int)arg4;
+ (id)svgImageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2 ignoreNotFound:(_Bool)arg3;
+ (id)svgImageNamed:(id)arg1 color:(id)arg2;
+ (id)localizedImageNamed:(id)arg1;
+ (id)imageFromColor:(id)arg1;
+ (id)imageDisableNamed:(id)arg1;
+ (id)imageHighlightNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 alpha:(double)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)getColorByName:(id)arg1 withAlpha:(double)arg2;
+ (id)getColorByName:(id)arg1;
+ (id)getRuleSetForSeletor:(id)arg1;
+ (id)getValueOfProperty:(id)arg1 inRuleSet:(id)arg2;
+ (void)updateLanguage:(id)arg1 forRefresh:(_Bool)arg2 withViewScene:(unsigned int)arg3 shouldChangeMainFrame:(_Bool)arg4;
+ (id)localizedStringForKey:(id)arg1;
+ (void)logFeatureExtIDkeyList:(const vector_2633e87e *)arg1 isKeyLog:(_Bool)arg2;
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(_Bool)arg4;
+ (void)clickStreamSearchControllerDidDismiss:(id)arg1;
+ (void)clickStreamSearchControllerDidPresent:(id)arg1;
+ (void)clickStreamViewDidDisappear:(id)arg1;
+ (void)clickStreamViewDidAppear:(id)arg1;
+ (void)logFeaturePbExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeatureExt:(unsigned int)arg1 logExt:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
+ (void)logFeature:(unsigned int)arg1 isReportNow:(_Bool)arg2 isKeyLog:(_Bool)arg3;
+ (void)asyncCustomDump:(id)arg1;
+ (void)customDump:(id)arg1;
+ (void)silentCrash:(id)arg1;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned int)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (_Bool)shouldEnableDebugLog;
+ (_Bool)shouldLog:(int)arg1;
+ (void)setup;
+ (id)shareInstance;
- (void)changeLevel:(long long)arg1 forBiz:(long long)arg2;
- (long long)levelForBiz:(long long)arg1;
- (void)setLimitedModeOn:(_Bool)arg1;
- (_Bool)isLimitedModeOn;
- (_Bool)isVisibleChildViewControllerOf:(id)arg1 ToFindViewController:(id)arg2;
- (id)getPrevNavigationControllerFor:(id)arg1;
- (id)ApplicationDidBecomeActiveNotificationName;
- (unsigned long long)ParserDetectorTypeWith:(unsigned long long)arg1;
- (id)getCTRichTextView;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(id)arg3;
- (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
- (id)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (_Bool)isNavigationInWeAppSheetMode:(id)arg1;
- (_Bool)isWeAppStatusBarHidden;
- (id)navigationControllerListWithViewController:(id)arg1;
- (id)topViewControllerOfMainWindow;
- (id)getMainWindowViewController;
- (id)topNavigationControllerOnMainWindow;
- (id)getMainWindow;
- (void)checkColumnModeForCurOrientationIfNeeded;
- (id)getCurrentNavigationController;
- (id)topViewControllerOfWindow:(id)arg1;
- (id)topMostController;
- (id)getTopViewController;
- (double)tabBarHeight;
- (void)tabBarController_setMaskViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)tabBarController_currentViewController;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (_Bool)isVCUseCustomPopTransitioning:(Class)arg1;
- (Class)WAWebViewControllerClass;
- (Class)MMTabBarBaseViewControllerClass;
- (Class)MMTabBarControllerClass;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2;
- (id)getRightViewControllerForSplitView;
- (id)getMMTabBarController;
- (id)getMMSplitViewController;
- (_Bool)isUsingSplitView;
- (_Bool)shouldUseSplitView;
- (id)resolveURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

