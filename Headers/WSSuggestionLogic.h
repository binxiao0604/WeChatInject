//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WebSearchMgrDelegate-Protocol.h"

@class FTSWebSearchMgr, NSMutableArray, NSString, WSHistoryCacheLogic;
@protocol WSSuggestionLogicDelegate;

@interface WSSuggestionLogic : NSObject <WebSearchMgrDelegate>
{
    _Bool _isHomePage;
    int _scene;
    id <WSSuggestionLogicDelegate> _delegate;
    WSHistoryCacheLogic *_historyLogic;
    unsigned long long _businessType;
    NSMutableArray *_arrHistorySource;
    NSMutableArray *_arrMergeResult;
    NSMutableArray *_arrSvrSugResult;
    NSMutableArray *_arrHistoryResult;
    NSString *_newestQuery;
    NSString *_lastQueryForHistory;
    NSString *_lastQueryForSvrSug;
    NSString *_sugId;
    NSString *_expand;
    FTSWebSearchMgr *_webSearchMgr;
    unsigned long long _searchSugBeginTime;
    unsigned long long _searchLocalSugEndTime;
    unsigned long long _searchSvrSugEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long searchSvrSugEndTime; // @synthesize searchSvrSugEndTime=_searchSvrSugEndTime;
@property(nonatomic) unsigned long long searchLocalSugEndTime; // @synthesize searchLocalSugEndTime=_searchLocalSugEndTime;
@property(nonatomic) unsigned long long searchSugBeginTime; // @synthesize searchSugBeginTime=_searchSugBeginTime;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(retain, nonatomic) NSString *expand; // @synthesize expand=_expand;
@property(retain, nonatomic) NSString *sugId; // @synthesize sugId=_sugId;
@property(retain, nonatomic) NSString *lastQueryForSvrSug; // @synthesize lastQueryForSvrSug=_lastQueryForSvrSug;
@property(retain, nonatomic) NSString *lastQueryForHistory; // @synthesize lastQueryForHistory=_lastQueryForHistory;
@property(retain, nonatomic) NSString *newestQuery; // @synthesize newestQuery=_newestQuery;
@property(retain, nonatomic) NSMutableArray *arrHistoryResult; // @synthesize arrHistoryResult=_arrHistoryResult;
@property(retain, nonatomic) NSMutableArray *arrSvrSugResult; // @synthesize arrSvrSugResult=_arrSvrSugResult;
@property(retain, nonatomic) NSMutableArray *arrMergeResult; // @synthesize arrMergeResult=_arrMergeResult;
@property(retain, nonatomic) NSMutableArray *arrHistorySource; // @synthesize arrHistorySource=_arrHistorySource;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WSHistoryCacheLogic *historyLogic; // @synthesize historyLogic=_historyLogic;
@property(nonatomic) __weak id <WSSuggestionLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(id)arg1;
- (void)parseSvrSug:(id)arg1;
- (id)makeSuggestRequestParams:(id)arg1;
- (void)notifyNativeSugResult;
- (id)getSuggestionId;
- (id)getHistoryResultLimit:(unsigned int)arg1;
- (id)getSuggestionResult;
- (void)mergeResult;
- (void)resetResult;
- (void)asyncSearchSvrSuggestion:(id)arg1;
- (void)asyncSearchHistory:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1;
- (void)queryChanged:(id)arg1;
- (void)reportSug:(id)arg1;
- (void)reportSugClick:(id)arg1 withParams:(id)arg2;
- (void)reportSugFill:(id)arg1 withParams:(id)arg2;
- (void)deleteHistorySuggestion:(id)arg1;
- (void)insertLastHistoryQuery:(id)arg1;
- (void)reloadHistory;
- (void)initHistoryQueryData;
- (void)initWebSearchMgr;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
