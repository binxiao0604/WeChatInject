//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPackageSweeperLogic : NSObject
{
    _Bool _enteredForeground;
    unsigned int _processStartTime;
    unsigned int _processEndTime;
}

+ (id)cachePathListInTmpToClean;
+ (id)cachePathListInUsrStoreAndStorageToClean;
+ (unsigned long long)sweepTmpData;
+ (unsigned long long)sweepUsrStoreAndStorageData;
+ (unsigned long long)sweepPrefetchData;
+ (unsigned long long)preGetWeAppCacheSize;
+ (unsigned long long)sweepWeAppCache;
@property(nonatomic) unsigned int processEndTime; // @synthesize processEndTime=_processEndTime;
@property(nonatomic) unsigned int processStartTime; // @synthesize processStartTime=_processStartTime;
@property(nonatomic) _Bool enteredForeground; // @synthesize enteredForeground=_enteredForeground;
- (id)fetchWhiteListUsernameList;
- (void)checkRenderCacheLocalStorage;
- (void)checkAndClearRenderCache;
- (void)checkAndClearPubRes;
- (_Bool)isPluginCodePath:(id)arg1;
- (void)scanAndCleanInvalidNotifyInfo;
- (void)scanAndCleanInvalidModuleInfoData;
- (void)scanAndCleanInvalidEncryptInfoData;
- (void)scanAndCleanInvalidNormalInfoData;
- (void)scanAndCleanInvalidInfoData;
- (void)scanAndCleanDebugPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseModulePkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseEncryptPkgForAppId:(id)arg1;
- (void)scanAndCleanReleaseNormalPkgForAppId:(id)arg1;
- (void)scanAndCleanReleasePkgForAppId:(id)arg1;
- (void)scanAndCleanDebugDir;
- (void)scanAndCleanReleaseDir;
- (void)sweepContactAndDatas:(id)arg1;
- (void)sweepStorageDataForAppID:(id)arg1;
- (void)sweepLocalPkgWithContactNewLogic:(id)arg1 debugType:(unsigned long long)arg2 force:(_Bool)arg3;
- (void)sweepLocalPkgWithContact:(id)arg1 debugType:(unsigned long long)arg2 force:(_Bool)arg3;
- (unsigned int)sweepLocalPkgUnderVersion:(id)arg1 version:(long long)arg2;
- (void)sweepNormalPkgUnderVersion:(unsigned long long)arg1 forAppid:(id)arg2;
- (void)sweepLocalPluginCodeLru:(unsigned long long)arg1;
- (void)checkLocalStorage;
- (void)checkToSweepContactAndDatas:(id)arg1;
- (void)sweepLowerVersionPkgAndContactIfNeededForContacts:(id)arg1;
- (void)sweepOutDatedEncryptPkg;
- (void)sweepOutDatedModulePkg;
- (void)sweepOutDatedNormalPkgForContacts:(id)arg1;
- (void)sweepInvalidPkgAndInfoData;
- (void)saveCheckPointTime;
- (_Bool)isCurrentTimeReachCheckPoint;
- (void)reportCheckAction;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)sweepLocalPkg;
- (void)sweepLocalPkgWhenEnterBackgroundNewLogic;
- (void)enterForeground;
- (void)sweepLocalPkgWhenEnterBackground;

@end

