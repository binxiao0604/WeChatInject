//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

@interface SettingDarkModeViewController : MMUIViewController
{
    MMTableViewInfo *_tableViewInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void)onSelectLightMode;
- (void)onSelectDarkMode;
- (void)onFollowSystemSwitch:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadSections;
- (void)viewDidLoad;

@end

