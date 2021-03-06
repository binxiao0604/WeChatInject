//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMWebViewController, MPLandingVideoDotAdDotScripItem, MPLandingVideoDotAdWebViewPosInfo;

@interface MPLandingVideoDotAdCurrWebViewWrapper : NSObject
{
    _Bool _isReady;
    _Bool _isShowing;
    _Bool _hasSendWebEndEvent;
    _Bool _isInProcess;
    _Bool _isDestroy;
    unsigned long long _clientId;
    MMWebViewController *_webVc;
    MPLandingVideoDotAdWebViewPosInfo *_posInfo;
    MPLandingVideoDotAdDotScripItem *_scripItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDestroy; // @synthesize isDestroy=_isDestroy;
@property(nonatomic) _Bool isInProcess; // @synthesize isInProcess=_isInProcess;
@property(nonatomic) _Bool hasSendWebEndEvent; // @synthesize hasSendWebEndEvent=_hasSendWebEndEvent;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) MPLandingVideoDotAdDotScripItem *scripItem; // @synthesize scripItem=_scripItem;
@property(retain, nonatomic) MPLandingVideoDotAdWebViewPosInfo *posInfo; // @synthesize posInfo=_posInfo;
@property(retain, nonatomic) MMWebViewController *webVc; // @synthesize webVc=_webVc;
@property(nonatomic) unsigned long long clientId; // @synthesize clientId=_clientId;
- (id)description;
@property(readonly, nonatomic) unsigned long long frontendId;
@property(nonatomic) _Bool isHide;

@end

