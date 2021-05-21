//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "IWAWebViewPlugin_HTMLWeb-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController;
@protocol IWAHTMLWebVCHelper;

@interface WAWebViewPlugin_HTMLWeb : WAWebViewPlugin_embedView <IWAWebViewPlugin_HTMLWeb>
{
    NSMutableDictionary *_enableScrollDic;
    UIViewController<IWAHTMLWebVCHelper> *_htmlWebVC;
    NSString *_javascriptForDisappear;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *javascriptForDisappear; // @synthesize javascriptForDisappear=_javascriptForDisappear;
@property(retain, nonatomic) UIViewController<IWAHTMLWebVCHelper> *htmlWebVC; // @synthesize htmlWebVC=_htmlWebVC;
@property(readonly, nonatomic) NSMutableDictionary *enableScrollDic; // @synthesize enableScrollDic=_enableScrollDic;
- (id)web_backNavigationGesture;
- (void)web_view_goBack;
- (_Bool)web_view_canGoBack;
- (void)web_view_goToUrl:(id)arg1;
- (id)web_view_getCurrentUrl;
- (void)web_view_handleInsertHTMLDone;
- (void)web_view_configViewFrame:(struct CGRect)arg1;
- (void)web_view_setBackgroundColor:(id)arg1;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (id)web_view;
- (_Bool)web_view_isExist;
- (void)releaseHtmlVC;
- (void)genHtmlVCWithExtInfo:(id)arg1;
- (void)runJavascriptForDisappear;
- (void)onViewWillDisappear;
- (void)onUIApplicationWillResignActiveNotification;
- (void)insertHtmlVCIfNeed;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

