//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FlutterMethodChannel, LiteAppFlutterViewController, NSString, UIView, WxaRouter;
@protocol MMLiteAppViewControllerDelegate, UIGestureRecognizerDelegate;

@interface LiteAppViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id <MMLiteAppViewControllerDelegate> m_delegate;
    struct LVUICallback *lvUICallback;
    int lastFlags;
    _Bool _preGestureRecognizerEnabled;
    NSString *_appId;
    NSString *_path;
    NSString *_signatureKey;
    NSString *_page;
    NSString *_query;
    LiteAppFlutterViewController *_flutterVc;
    FlutterMethodChannel *_channel;
    unsigned long long _lvcppPtr;
    UIView *_showFlutterModeView;
    WxaRouter *_router;
    CDUnknownBlockType _handler;
    id <UIGestureRecognizerDelegate> _preGestureRecognizerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preGestureRecognizerEnabled; // @synthesize preGestureRecognizerEnabled=_preGestureRecognizerEnabled;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> preGestureRecognizerDelegate; // @synthesize preGestureRecognizerDelegate=_preGestureRecognizerDelegate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak WxaRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) UIView *showFlutterModeView; // @synthesize showFlutterModeView=_showFlutterModeView;
@property(nonatomic) unsigned long long lvcppPtr; // @synthesize lvcppPtr=_lvcppPtr;
@property(retain, nonatomic) FlutterMethodChannel *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) LiteAppFlutterViewController *flutterVc; // @synthesize flutterVc=_flutterVc;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)keyboardDidHideShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)bindLVCPP;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)navigateBack:(id)arg1;
- (void)showPage:(const struct PageInfo *)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)setFlags:(int)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

