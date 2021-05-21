//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, WCPayOfflinePayBlockLayer, WCPayOfflinePayDisableBlockLayer, WCPayOfflinePayGuideBar;

@protocol WCPayOfflinePayViewControllerDelegate <NSObject>
- (void)removeOfflineDisableBloackLayerData;
- (WCPayOfflinePayDisableBlockLayer *)getOfflineDisableBlockLayerData;
- (void)removeOfflineBlockLayerData;
- (WCPayOfflinePayBlockLayer *)getOfflineBloackLayerData;
- (void)removeOfflineGuideBarData;
- (WCPayOfflinePayGuideBar *)getOfflineGuideBarData;
- (_Bool)isPayMoneyLogicInProgress;
- (void)onOfflinePayPatternLockBlockErrorOutOfLimit;
- (void)OnWCPayOfflinePayViewControllerNeedFreshCardListData:(_Bool)arg1 extraInfo:(NSDictionary *)arg2;
- (void)OnWCPayOfflinePayViewControllerClickTransToMixBtn;
- (void)OnWCPayOfflinePayViewControllerClickTransToBankCardBtn;
- (void)onWCpayOfflinePayViewControllerClickF2fHongBaoBtn;
- (void)OnWCPayOfflinePayNoCodeTipsViewEnableRefreshBtnAfterClick;
- (void)OnWCPayOfflinePayNoCodeTipsViewClickRefreshBtn;
- (void)StopOfflineGetMsg;
- (void)StartOfflineGetMsg;
- (void)onWCPayOfflinePayViewControllerClickQRCodeRewardBtn;
- (void)onWCPayOfflinePayViewControllerClickGroupPayBtn;
- (void)OnWCpayOfflinePayViewControllerClickReceiveMoneyBtn;
- (void)OnWCPayOfflinePayViewControllerAddNewCardBtnPress;
- (void)OnWCPayOfflinePayViewControllerCloseAction;
- (void)OnWCPayOfflinePayViewControllerUnfreezeBtnDown;
- (void)OnWCPayOfflinePayViewControllerQuickChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerChangeOfflinePayLimit;
- (void)OnWCPayOfflinePayViewControllerCreateOfflinePay;
- (void)OnWCPayOfflinePayViewControllerBack;
@end

