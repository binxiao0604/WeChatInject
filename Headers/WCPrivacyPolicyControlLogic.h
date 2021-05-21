//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"

@class MMUIViewController, MMUIWindow, MMWebViewController, NSString;
@protocol WCPrivacyPolicyControlLogicDelegate;

@interface WCPrivacyPolicyControlLogic : MMObject <MMWebViewDelegate, MMTipsViewControllerDelegate>
{
    MMUIWindow *_window;
    MMUIViewController *_rootVC;
    MMWebViewController *_webviewVC;
    MMWebViewController *_webviewConfirmVC;
    _Bool _bFromReg;
    _Bool _bShowPrivacy;
    _Bool _bShowBirthday;
    _Bool _bNeedOpenplatform;
    _Bool _bNeedConfirm;
    _Bool _bNotNeedDoublecheck;
    id <WCPrivacyPolicyControlLogicDelegate> _delegate;
    NSString *_privacyUrl;
    NSString *_birthdayUrl;
    NSString *_confirmUrl;
    NSString *_guidanceContent;
    NSString *_doublecheckContent;
    NSString *_doublecheckCancel;
    NSString *_doublecheckOk;
    NSString *_cc;
    NSString *_scene;
    NSString *_userName;
    NSString *_regSessionid;
}

+ (id)rootPath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *regSessionid; // @synthesize regSessionid=_regSessionid;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *cc; // @synthesize cc=_cc;
@property(nonatomic) _Bool bNotNeedDoublecheck; // @synthesize bNotNeedDoublecheck=_bNotNeedDoublecheck;
@property(nonatomic) _Bool bNeedConfirm; // @synthesize bNeedConfirm=_bNeedConfirm;
@property(nonatomic) _Bool bNeedOpenplatform; // @synthesize bNeedOpenplatform=_bNeedOpenplatform;
@property(nonatomic) _Bool bShowBirthday; // @synthesize bShowBirthday=_bShowBirthday;
@property(nonatomic) _Bool bShowPrivacy; // @synthesize bShowPrivacy=_bShowPrivacy;
@property(nonatomic) _Bool bFromReg; // @synthesize bFromReg=_bFromReg;
@property(retain, nonatomic) NSString *doublecheckOk; // @synthesize doublecheckOk=_doublecheckOk;
@property(retain, nonatomic) NSString *doublecheckCancel; // @synthesize doublecheckCancel=_doublecheckCancel;
@property(retain, nonatomic) NSString *doublecheckContent; // @synthesize doublecheckContent=_doublecheckContent;
@property(retain, nonatomic) NSString *guidanceContent; // @synthesize guidanceContent=_guidanceContent;
@property(retain, nonatomic) NSString *confirmUrl; // @synthesize confirmUrl=_confirmUrl;
@property(retain, nonatomic) NSString *birthdayUrl; // @synthesize birthdayUrl=_birthdayUrl;
@property(retain, nonatomic) NSString *privacyUrl; // @synthesize privacyUrl=_privacyUrl;
@property(nonatomic) __weak id <WCPrivacyPolicyControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)onWebViewPassParams:(id)arg1 Webview:(id)arg2;
- (void)onWebViewClickClose;
- (void)onWebViewDisagree;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (id)showPrivacyPolicyView:(id)arg1 animate:(_Bool)arg2 close:(_Bool)arg3;
- (void)startLogic;
- (_Bool)checkData;
- (void)dealloc;
- (id)loadData;
- (void)saveData:(id)arg1;
- (id)birthdayPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
