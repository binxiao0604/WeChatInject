//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@protocol SettingModifyAliasLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)OnModifyAliasWithResult:(unsigned int)arg1 errorMsg:(NSString *)arg2;
- (void)OnCheckAliasValidWithResult:(unsigned int)arg1 retCode:(int)arg2 errorMsg:(NSString *)arg3;
- (void)onCheckCanSetAlias:(NSArray *)arg1 verifyType:(unsigned int)arg2 verifyUrl:(NSString *)arg3 ticket:(NSString *)arg4 withResult:(unsigned int)arg5 errorMsg:(NSString *)arg6;
@end

