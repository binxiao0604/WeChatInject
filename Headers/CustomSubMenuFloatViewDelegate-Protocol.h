//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CustomMenuButton, NSString;

@protocol CustomSubMenuFloatViewDelegate <NSObject>
- (NSString *)getBrandContactUsername;
- (void)onOpenWeAppWithJSONString:(NSString *)arg1 fromScene:(unsigned int)arg2;
- (void)onJumpToBrandSearchView:(CustomMenuButton *)arg1;
- (void)onJumpToPOIView:(CustomMenuButton *)arg1;
- (void)onJumpToPicView:(CustomMenuButton *)arg1;
- (void)onJumpToScanView:(CustomMenuButton *)arg1;
- (_Bool)onJumpToNativeView:(NSString *)arg1;
- (void)onJumpToWebView:(NSString *)arg1;
- (void)onRecordActionEvent:(CustomMenuButton *)arg1;
- (void)onReportClickEvent:(CustomMenuButton *)arg1;
- (void)onSubMenuDismiss;
- (void)onChangeToMenuMode:(CustomMenuButton *)arg1;
@end

