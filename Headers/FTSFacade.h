//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "FTSDBDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class FTSContactMgr, FTSDB, FTSFavMgr, FTSGlobalStat, FTSIndexEngine, FTSMemorySearchMgr, FTSMessageMgr, FTSReportMgr, FTSTopHitMgr, FTSWebSearchMgr, LocalSearchDynamicConfig, MCSBrandContactMgr, MiniGameSearchMgr, NSMutableSet, NSString, WALocalSearchMgr, WANetSearchMgr, WAShowOutLogic, WCSearchGroupTrainingMgr, WSMusicMgr, WebSearchRedotMgr;

@interface FTSFacade : MMUserService <FTSDBDelegate, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, MMServiceProtocol, MMKernelExt>
{
    FTSDB *_ftsDB;
    _Bool _isPositioning;
    _Bool _bHasActiveSearch;
    FTSContactMgr *_ftsContactMgr;
    FTSMessageMgr *_ftsMessageMgr;
    FTSFavMgr *_ftsFavMgr;
    FTSMemorySearchMgr *_ftsMemorySearchMgr;
    FTSWebSearchMgr *_ftsWebSearchMgr;
    WSMusicMgr *_musicMgr;
    FTSReportMgr *_ftsReportMgr;
    WALocalSearchMgr *_weAppSearchMgr;
    WebSearchRedotMgr *_webSearchRedotMgr;
    MiniGameSearchMgr *_miniGameSearchMgr;
    NSMutableSet *_imageCacheUrlSet;
    _Bool _isOpenWeAppSearch;
    _Bool _isOpenMiniGameSearch;
    _Bool _useFTSNewLogic;
    _Bool _hasReportNoRedotExposeForSearch;
    _Bool _useAPITestLocalH5;
    FTSTopHitMgr *_ftsTopHitMgr;
    MCSBrandContactMgr *_mcsBrdContactMgr;
    FTSGlobalStat *_ftsStat;
    WCSearchGroupTrainingMgr *_groupTrainMgr;
    WANetSearchMgr *_waNetSearchMgr;
    FTSIndexEngine *_ftsIndexEngine;
    NSString *_localSearchId;
    long long _i64LocalSessionId;
    long long _i64LocalSearchId;
    long long _i64LocalSubSearchId;
    WAShowOutLogic *_waShowOutLogic;
    LocalSearchDynamicConfig *_dynConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useAPITestLocalH5; // @synthesize useAPITestLocalH5=_useAPITestLocalH5;
@property(nonatomic) _Bool hasReportNoRedotExposeForSearch; // @synthesize hasReportNoRedotExposeForSearch=_hasReportNoRedotExposeForSearch;
@property(retain, nonatomic) LocalSearchDynamicConfig *dynConfig; // @synthesize dynConfig=_dynConfig;
@property(retain, nonatomic, getter=getWaShowOutLogic) WAShowOutLogic *waShowOutLogic; // @synthesize waShowOutLogic=_waShowOutLogic;
@property(readonly, nonatomic) long long i64LocalSubSearchId; // @synthesize i64LocalSubSearchId=_i64LocalSubSearchId;
@property(readonly, nonatomic) long long i64LocalSearchId; // @synthesize i64LocalSearchId=_i64LocalSearchId;
@property(readonly, nonatomic) long long i64LocalSessionId; // @synthesize i64LocalSessionId=_i64LocalSessionId;
@property(readonly, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
@property(retain, nonatomic) FTSReportMgr *ftsReportMgr; // @synthesize ftsReportMgr=_ftsReportMgr;
@property(retain, nonatomic) FTSIndexEngine *ftsIndexEngine; // @synthesize ftsIndexEngine=_ftsIndexEngine;
@property(retain, nonatomic) WANetSearchMgr *waNetSearchMgr; // @synthesize waNetSearchMgr=_waNetSearchMgr;
@property(retain, nonatomic) WCSearchGroupTrainingMgr *groupTrainMgr; // @synthesize groupTrainMgr=_groupTrainMgr;
@property(retain, nonatomic) FTSGlobalStat *ftsStat; // @synthesize ftsStat=_ftsStat;
@property(retain, nonatomic) WebSearchRedotMgr *webSearchRedotMgr; // @synthesize webSearchRedotMgr=_webSearchRedotMgr;
@property(retain, nonatomic) MiniGameSearchMgr *miniGameSearchMgr; // @synthesize miniGameSearchMgr=_miniGameSearchMgr;
@property(retain, nonatomic) WALocalSearchMgr *weAppSearchMgr; // @synthesize weAppSearchMgr=_weAppSearchMgr;
@property(retain, nonatomic) MCSBrandContactMgr *mcsBrdContactMgr; // @synthesize mcsBrdContactMgr=_mcsBrdContactMgr;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) WSMusicMgr *musicMgr; // @synthesize musicMgr=_musicMgr;
@property(retain, nonatomic) FTSWebSearchMgr *ftsWebSearchMgr; // @synthesize ftsWebSearchMgr=_ftsWebSearchMgr;
@property(retain, nonatomic) FTSMemorySearchMgr *ftsMemorySearchMgr; // @synthesize ftsMemorySearchMgr=_ftsMemorySearchMgr;
@property(retain, nonatomic) FTSFavMgr *ftsFavMgr; // @synthesize ftsFavMgr=_ftsFavMgr;
@property(retain, nonatomic) FTSMessageMgr *ftsMessageMgr; // @synthesize ftsMessageMgr=_ftsMessageMgr;
@property(retain, nonatomic) FTSContactMgr *ftsContactMgr; // @synthesize ftsContactMgr=_ftsContactMgr;
- (id)getSharedFTSMessageDB;
- (_Bool)useFTSNewLogic;
- (void)registerFTSIndexingEngine;
- (void)onServiceInitIndexEngine;
- (_Bool)recoverGroupTrainDB;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)updateFTSStat;
- (void)jumpSearchWithQrQuery:(id)arg1 appid:(id)arg2 versionType:(unsigned int)arg3 appVersion:(unsigned int)arg4 searchExtInfo:(id)arg5;
- (void)cleanFTSDB:(_Bool)arg1;
- (void)recover:(_Bool)arg1;
- (void)willRecover;
- (void)onEndFtsSearch;
- (void)onViewPop;
- (void)removeImageCacheKey:(id)arg1;
- (void)addImageCacheKey:(id)arg1;
- (void)clearImageCache;
- (void)stopRetrievingLocation;
- (void)updateLocation;
- (void)onRecoverFTSDB;
- (void)onWillDeleteAllSession;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)doInitMiniGameSearchMgrIfNeeded;
- (_Bool)isOpenMiniGame;
- (void)doInitWeAppSearchMgrIfNeeded;
- (_Bool)isOpenWeAppSearch;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onEnterBackground;
- (void)onServiceInit;
- (void)logBeginSearch:(int)arg1;
- (void)updateSubSearchId:(id)arg1;
- (void)updateNewLocalSearchId:(id)arg1;
- (void)cancelSearchForHomePage;
- (void)startSearchForHomePage:(id)arg1;
- (void)updateNewestHomePageSearchText:(id)arg1;
- (void)resetSearchStatus;
- (void)onBeginSearch;
- (void)doInitWorker;
- (void)loadMultiPinyinMap;
- (void)forbidForegroundTask;
- (void)enableForegroundTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

