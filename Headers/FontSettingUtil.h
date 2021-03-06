//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMTipsViewControllerDelegate-Protocol.h"

@class MMTipsViewController, NSString;
@protocol FontSettingUtilDelegate;

@interface FontSettingUtil : NSObject <MMTipsViewControllerDelegate>
{
    id <FontSettingUtilDelegate> _delegate;
    MMTipsViewController *_fontSettingTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTipsViewController *fontSettingTipsView; // @synthesize fontSettingTipsView=_fontSettingTipsView;
@property(nonatomic) __weak id <FontSettingUtilDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)checkFontSetting;
- (void)showUserFontSettingTips;
- (_Bool)canShowFontSettingTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

