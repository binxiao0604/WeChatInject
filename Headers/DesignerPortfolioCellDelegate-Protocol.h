//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmoticonStoreItem, NSString;

@protocol DesignerPortfolioCellDelegate <NSObject>
- (void)OnClearStoreItemReddot:(EmoticonStoreItem *)arg1;
- (void)onDownloadStoreItem:(EmoticonStoreItem *)arg1;
- (void)OnRewardStoreItem:(EmoticonStoreItem *)arg1;
- (void)OnShowAlertWithIKnow:(NSString *)arg1;
- (void)OnShowAlertWithOK:(NSString *)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(NSString *)arg1;
- (void)OnStopLoadingAndShowOK:(NSString *)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(NSString *)arg1;
- (void)OnStartLoadingAndShowString:(NSString *)arg1;
@end
