//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

@class NSString, ScanGoodsJSHandler, UIView, WSTemplateLogicController;

@interface ScanGoodsHalfScreenViewController : MMUIHalfScreenViewController
{
    NSString *_reqKey;
    WSTemplateLogicController *m_logicController;
    ScanGoodsJSHandler *m_jsHandler;
    _Bool _hasAddObservers;
    _Bool _isBeDismissed;
    _Bool _bInNodifyViewTopChanging;
    unsigned int _notifyViewTopChangeCount;
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    unsigned int _scanSessionID;
    UIView *_customView;
    UIView *_customViewSuperView;
    unsigned long long _customViewIndex;
    UIView *_customMaskView;
    UIView *_customMaskSuperView;
    unsigned long long _customMaskIndex;
    struct CGPoint _customViewPoint;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long customMaskIndex; // @synthesize customMaskIndex=_customMaskIndex;
@property(nonatomic) __weak UIView *customMaskSuperView; // @synthesize customMaskSuperView=_customMaskSuperView;
@property(nonatomic) __weak UIView *customMaskView; // @synthesize customMaskView=_customMaskView;
@property(nonatomic) unsigned long long customViewIndex; // @synthesize customViewIndex=_customViewIndex;
@property(nonatomic) struct CGPoint customViewPoint; // @synthesize customViewPoint=_customViewPoint;
@property(nonatomic) __weak UIView *customViewSuperView; // @synthesize customViewSuperView=_customViewSuperView;
@property(nonatomic) __weak UIView *customView; // @synthesize customView=_customView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)needCloseOnOrientationChanged;
- (void)notifyContentViewTopChangeEventStartY:(double)arg1 endY:(double)arg2 timeOnce:(double)arg3 repeatCount:(unsigned int)arg4;
- (void)setupAnimateTransitionBlocks;
- (_Bool)hidesStatusBar;
- (void)initView;
- (void)initData;
- (id)pathForTestTemplate;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithReqKey:(id)arg1 enterSessionID:(unsigned int)arg2 tabSessionID:(unsigned int)arg3 scanSessionID:(unsigned int)arg4;

@end

