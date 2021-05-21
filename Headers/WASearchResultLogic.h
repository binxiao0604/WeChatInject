//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WALocationGetterDelegate-Protocol.h"
#import "WASearchJSEventHandlerDelegate-Protocol.h"
#import "WAWebSearchMgrDelegate-Protocol.h"
#import "WCCanvasDynamicDataLoaderDelegate-Protocol.h"
#import "WSActionSheetDelegate-Protocol.h"

@class MMLoadingView, NSDictionary, NSMutableDictionary, NSString, WALocationGetter, WAWebSearchJSLogicImpl, WAWebSearchMgr, WCCanvasDynamicDataLoader, WKWebView, WSActionSheet;
@protocol WASearchActionDelegate, YYWebViewInterface;

@interface WASearchResultLogic : MMObject <WAWebSearchMgrDelegate, WASearchJSEventHandlerDelegate, WALocationGetterDelegate, WSActionSheetDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    _Bool _bSkipGenNewSessionId;
    _Bool _bJSBridgeCompleted;
    _Bool _hasPresentedSearch;
    int _searchScene;
    id <WASearchActionDelegate> _actionDelegate;
    WKWebView<YYWebViewInterface> *_resultView;
    WAWebSearchMgr *_webSearchMgr;
    NSString *_lastInputText;
    unsigned long long _lastInputTime;
    WAWebSearchJSLogicImpl *_jsLogic;
    NSString *_sessionId;
    NSString *_subSessionId;
    NSString *_keywordId;
    WALocationGetter *_locationGetter;
    double _locationX;
    double _locationY;
    WSActionSheet *_actionSheet;
    MMLoadingView *_loadingView;
    WCCanvasDynamicDataLoader *_dataLoader;
    NSDictionary *_userInfo;
    NSMutableDictionary *_updateResRecorder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateResRecorder; // @synthesize updateResRecorder=_updateResRecorder;
@property(nonatomic) _Bool hasPresentedSearch; // @synthesize hasPresentedSearch=_hasPresentedSearch;
@property(nonatomic) _Bool bJSBridgeCompleted; // @synthesize bJSBridgeCompleted=_bJSBridgeCompleted;
@property(nonatomic) _Bool bSkipGenNewSessionId; // @synthesize bSkipGenNewSessionId=_bSkipGenNewSessionId;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WSActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) double locationY; // @synthesize locationY=_locationY;
@property(nonatomic) double locationX; // @synthesize locationX=_locationX;
@property(retain, nonatomic) WALocationGetter *locationGetter; // @synthesize locationGetter=_locationGetter;
@property(retain, nonatomic) NSString *keywordId; // @synthesize keywordId=_keywordId;
@property(copy, nonatomic) NSString *subSessionId; // @synthesize subSessionId=_subSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) WAWebSearchJSLogicImpl *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(nonatomic) unsigned long long lastInputTime; // @synthesize lastInputTime=_lastInputTime;
@property(retain, nonatomic) NSString *lastInputText; // @synthesize lastInputText=_lastInputText;
@property(retain, nonatomic) WAWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
@property(nonatomic) __weak id <WASearchActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onRegisterWebViewDidScroll:(id)arg1;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onGetLocationSuccess:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canSendOnBeginWebSearchAnimationEvent;
- (void)onWASJSBridgeCompleted;
- (void)onPreloadSearchWeapp:(id)arg1;
- (void)clearUpdateResRecorder;
- (id)onUpdateWASearchTemplate:(id)arg1;
- (void)onHideSearchLoading:(id)arg1;
- (void)onShowSearchLoading:(id)arg1;
- (void)onShowSearchToast:(id)arg1;
- (void)onOpenSearchCanvas:(id)arg1;
- (void)onGetSearchGuideData:(id)arg1;
- (void)onWAWidgetReloadData:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)onDoSearchOpLog:(id)arg1;
- (void)onCancelSearchActionSheet:(id)arg1;
- (id)onShowSearchActionSheet:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onGetWidgetCaptureImgUrl:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onLaunchBrandProfile:(id)arg1;
- (void)onLaunchWebView:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onPageDoLog:(id)arg1;
- (void)onReportFTSRealTime:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onGetAvatar:(id)arg1;
- (void)onGetImageList:(id)arg1;
- (void)onGetSuggestionData:(id)arg1;
- (void)onGetSearchData:(id)arg1;
- (void)onSearchUxOplogDataReady:(id)arg1;
- (void)onWidgetDataUpdated:(id)arg1;
- (void)onSearchGuideDataUpdated:(id)arg1 withInterval:(unsigned int)arg2;
- (void)onWebSearchWithQuery:(id)arg1;
- (void)onReceiveSuggestionJSON:(id)arg1 query:(id)arg2;
- (void)onUpdateHeadImg:(id)arg1;
- (void)onUpdateCommonImg:(id)arg1;
- (void)onWebSearchDataFail:(_Bool)arg1;
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;
- (void)notifyPageOffsetChanged:(double)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)tryUpdateWASearchWidget;
- (id)getLocalSearchGuideData;
- (void)logForExitSearch:(long long)arg1;
- (void)logForBeginSearch:(long long)arg1;
- (void)genStatKeywordId:(id)arg1;
- (void)genStatSessionId;
- (void)sendonBeginWebSearchAnimationEvent;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (id)urlForDetailPage:(id)arg1;
- (id)urlForVerticalPage:(id)arg1;
- (id)urlForResultPage;
- (void)sendSearchWAWidgetDataPush:(id)arg1;
- (void)sendSearchWAWidgetStateChanged:(id)arg1;
- (void)sendSearchWAWidgetShouldReloadData:(id)arg1;
- (void)sendSearchWAWidgetOpenApp:(id)arg1;
- (void)sendSearchWAWidgetAttrChanged:(id)arg1;
- (void)willBeginVerticalSearchWithParams:(id)arg1;
- (void)willBeginDetailSearchWithParams:(id)arg1;
- (void)clearResultPage;
- (void)trySearchWithParams:(id)arg1;
- (void)trySearch:(id)arg1;
- (void)notifyChanged:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)loadPage;
- (void)didEndSearch;
- (void)willEndSearch;
- (void)willBeginSearch;
- (void)didBeginSearch;
- (int)getSearchScene;
- (id)initWithSessionId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

