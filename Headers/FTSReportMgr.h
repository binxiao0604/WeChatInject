//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSBrowseReportHelper, NSMutableSet, WCSearchCTRInfo;

@interface FTSReportMgr : NSObject
{
    WCSearchCTRInfo *_ctrInfo;
    NSMutableSet *_resultHittedKeywordSet;
    NSMutableSet *_resultHittedKeywordSetForSubSearch;
    FTSBrowseReportHelper *_mainBrowseHelper;
    FTSBrowseReportHelper *_subBrowseHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSBrowseReportHelper *subBrowseHelper; // @synthesize subBrowseHelper=_subBrowseHelper;
@property(retain, nonatomic) FTSBrowseReportHelper *mainBrowseHelper; // @synthesize mainBrowseHelper=_mainBrowseHelper;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSetForSubSearch; // @synthesize resultHittedKeywordSetForSubSearch=_resultHittedKeywordSetForSubSearch;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSet; // @synthesize resultHittedKeywordSet=_resultHittedKeywordSet;
@property(retain, nonatomic) WCSearchCTRInfo *ctrInfo; // @synthesize ctrInfo=_ctrInfo;
- (void)newCTREndSearch;
- (void)newCTRBeginSearch:(id)arg1 isVoiceInput:(_Bool)arg2;
- (void)batchReportUnSelectedGroupTrains:(id)arg1 exclude:(id)arg2 dicMatchTips:(id)arg3 query:(id)arg4 topHits:(id)arg5;
- (void)reportSelectedGroupTrains:(id)arg1;
- (void)reportExposureInfo:(id)arg1 displayInfo:(id)arg2;
- (void)reportKVMsgSearchInfo:(unsigned long long)arg1 pageType:(int)arg2 searchAgain:(_Bool)arg3 appendMode:(_Bool)arg4;
- (void)reportContactSearchMonitor:(id)arg1;
- (void)reportMessageFTSModify:(int)arg1 MessageCount:(unsigned long long)arg2 CostTime:(unsigned long long)arg3;
- (void)reportMessageFTSResultCnt:(unsigned long long)arg1 FTSQueryTime:(unsigned long long)arg2 MainDBTime:(unsigned long long)arg3 GroupTime:(unsigned long long)arg4 limitSessionCount:(unsigned long long)arg5 targetSessionCount:(unsigned long long)arg6 itemLimit:(unsigned long long)arg7 maxCreateTime:(unsigned long long)arg8 totalTime:(unsigned long long)arg9;
- (void)reportDBFileSize:(long long)arg1 pageCount:(unsigned int)arg2 freeListCount:(unsigned int)arg3;
- (void)reportKVMsgResultClickType:(int)arg1 pageType:(int)arg2 showTalkerEntry:(_Bool)arg3;
- (void)reportIDKeyWithFTSDBUpgradeForCC;
- (void)createChatRoomOperationKVReport:(_Bool)arg1;
- (void)reportKVSearchGuideWeAppEntryDisplay:(id)arg1 appList:(id)arg2 stragetyId:(int)arg3;
- (void)weAppKVReportForScene:(_Bool)arg1 searchText:(id)arg2 opType:(int)arg3 opContent:(id)arg4 resultCount:(unsigned int)arg5 clickPos:(unsigned int)arg6;
- (void)cancelSearch;
- (unsigned int)getReportDeviceCode;
- (void)reportKVContactSearchInfo:(id)arg1;
- (void)reportIDKeyContactSearchTime:(unsigned int)arg1;
- (void)startBrowseSubSearchResult;
- (void)startBrowseMainSearchResult;
- (unsigned int)searchFavCount:(id)arg1;
- (_Bool)searchMatchFavItems:(id)arg1;
- (_Bool)searchMatchMemoryMsg:(id)arg1;
- (_Bool)searchMatchIndexMsg:(id)arg1;
- (unsigned int)searchMsgCount:(id)arg1;
- (_Bool)searchMatchMsg:(id)arg1;
- (unsigned int)searchGameCount:(id)arg1;
- (_Bool)searchMatchGame:(id)arg1;
- (unsigned int)searchFeatureCount:(id)arg1;
- (_Bool)searchMatchFeature:(id)arg1;
- (unsigned int)searchBrandContactCount:(id)arg1;
- (_Bool)searchMatchBrandContact:(id)arg1;
- (unsigned int)searchAddressBookCount:(id)arg1;
- (_Bool)searchMatchAddressBookContact:(id)arg1;
- (unsigned int)searchGroupCount:(id)arg1;
- (_Bool)searchMatchGroupContact:(id)arg1;
- (unsigned int)searchNormalContactCount:(id)arg1;
- (_Bool)searchMatchNormalContact:(id)arg1;
- (unsigned int)searchTopHitCount:(id)arg1;
- (_Bool)searchMatchTopHit:(id)arg1;
- (_Bool)searchMemoryDone:(id)arg1;
- (_Bool)searchFavDone:(id)arg1;
- (void)reportGlobalSearchResult:(id)arg1;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2 isInMainPage:(_Bool)arg3 isClickMore:(_Bool)arg4;
- (void)logGroupHitPos:(unsigned int)arg1 totalCount:(unsigned int)arg2;
- (void)logGuidePageClick:(unsigned long long)arg1;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(_Bool)arg2 clickType:(unsigned int)arg3 cellStyle:(unsigned int)arg4;
- (void)clearCacheHitKeywordForSubSearch;
- (void)tryLogResultNoActionForSubSearch:(id)arg1 hasResult:(_Bool)arg2 displayInfo:(id)arg3 searchType:(int)arg4;
- (void)logHitResultForSubSearch:(id)arg1 searchType:(int)arg2 displayInfo:(id)arg3;
- (void)clearCacheHitKeyword;
- (_Bool)hasSearchResultToLogForHomePage;
- (void)tryLogResultNoActionWithDisplayInfo:(id)arg1;
- (void)logHitResult:(id)arg1 displayInfo:(id)arg2;
- (void)logResultActionItem:(id)arg1 actionType:(unsigned long long)arg2 searchType:(unsigned long long)arg3 displayInfo:(id)arg4;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)logInviteAddressFriend:(int)arg1;
- (void)logAddAddressFriend:(int)arg1;
- (void)logBeginSearch:(int)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (id)safeKVString:(id)arg1;
- (id)init;

@end

