//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WeAPPItemData : NSObject
{
    unsigned int _debugMode;
    unsigned int _version;
    NSString *_title;
    NSString *_iconImageUrl;
    NSString *_username;
    NSString *_appid;
    UIImage *_iconImage;
    NSString *_pagePath;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

