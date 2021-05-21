//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "IWCBusinessJumpExt-Protocol.h"
#import "MMImagePickerControlCenter-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCFinderCreateCoordinatorDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"

@class MMAsset, MMUINavigationController, NSString, OpenApiParameter, WAContactGetter, WCFinderCreateCoordinator;

@interface OpenBusinessViewHandler : MMObject <IPreEnterWechatLogicExt, IWCBusinessJumpExt, PBMessageObserverDelegate, WCFinderPostViewControllerDelegate, WCFinderCreateCoordinatorDelegate, MMImagePickerControlCenter>
{
    _Bool _isBizCompleted;
    _Bool _dismissModalByBiz;
    OpenApiParameter *_parameter;
    WAContactGetter *_contactGetter;
    MMUINavigationController *_navigationController;
    WCFinderCreateCoordinator *_createCoordinator;
    MMAsset *_finderAsset;
}

+ (id)jsonStringWithDict:(id)arg1;
+ (void)navigateBackTo3rdApp:(id)arg1 universalLink:(id)arg2 businessType:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5 extMsg:(id)arg6;
+ (_Bool)isNativeBusinessType:(id)arg1;
+ (unsigned int)genExtKey;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *finderAsset; // @synthesize finderAsset=_finderAsset;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) _Bool dismissModalByBiz; // @synthesize dismissModalByBiz=_dismissModalByBiz;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isBizCompleted; // @synthesize isBizCompleted=_isBizCompleted;
@property(retain, nonatomic) WAContactGetter *contactGetter; // @synthesize contactGetter=_contactGetter;
@property(retain, nonatomic) OpenApiParameter *parameter; // @synthesize parameter=_parameter;
- (void)selectedDataItem:(id)arg1 GPSInfoArrayOfAsset:(id)arg2 dataReportModel:(id)arg3;
- (void)triggerFinderPostActionWith:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)postViewControllerDidCancel:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)postFinderFromVC:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)postViewControllerDidFinish:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)getLocalOpenId:(id *)arg1 thirdAppOpenId:(id *)arg2;
- (void)doOpenWeAppWithResponse:(id)arg1 contact:(id)arg2 context:(id)arg3;
- (void)handleLaunchBusinessWxaResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)requestForLaunchBusinessWxa:(id)arg1 appId:(id)arg2 context:(id)arg3;
- (void)showFinderFailErrWithIumpController:(id)arg1 toastMsg:(id)arg2 errCode:(unsigned int)arg3 errMsg:(id)arg4 appID:(id)arg5 universalLink:(id)arg6 businessType:(id)arg7;
- (void)enterFinderPostProcessWithJumpController:(id)arg1 businessType:(id)arg2 dictTranslateInfo:(id)arg3;
- (void)processTranslateResult:(id)arg1 parentController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4 jumpController:(id)arg5;
- (void)onPreEnterWechatDone;
- (void)checkOpenFakeNativeMiniProgram;
- (void)checkOpenNativeView;
- (void)checkOpenBusinessView;
- (void)clearAllHandle;
- (_Bool)startHandle:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
