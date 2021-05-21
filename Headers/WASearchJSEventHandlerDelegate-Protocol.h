//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WASearchJSEventHandlerDelegate <NSObject>

@optional
- (void)onWASJSBridgeCompleted;
- (void)onPreloadSearchWeapp:(NSDictionary *)arg1;
- (NSDictionary *)onUpdateWASearchTemplate:(NSDictionary *)arg1;
- (NSDictionary *)onGetWidgetCaptureImgUrl:(NSDictionary *)arg1;
- (void)onHideSearchLoading:(NSDictionary *)arg1;
- (void)onShowSearchLoading:(NSDictionary *)arg1;
- (void)onShowSearchToast:(NSDictionary *)arg1;
- (void)onWAWidgetReloadData:(NSDictionary *)arg1;
- (void)onOpenSearchCanvas:(NSDictionary *)arg1;
- (void)onGetSearchGuideData:(NSDictionary *)arg1;
- (void)onTapWAWidgetWithParams:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (NSDictionary *)onDoSearchOpLog:(NSDictionary *)arg1;
- (void)onCancelSearchActionSheet:(NSDictionary *)arg1;
- (NSString *)onShowSearchActionSheet:(NSDictionary *)arg1;
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onLaunchBrandProfile:(NSDictionary *)arg1;
- (void)onLaunchWebView:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onRegisterWebViewDidScroll:(NSDictionary *)arg1;
- (void)onPageDoLog:(NSDictionary *)arg1;
- (void)onReportFTSRealTime:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onOpenSearchWebView:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onGetAvatar:(NSDictionary *)arg1;
- (void)onGetImageList:(NSDictionary *)arg1;
- (void)onGetSuggestionData:(NSDictionary *)arg1;
- (void)onGetSearchData:(NSDictionary *)arg1;
@end

