//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface OpenSDKOAuthRequest : MMObject
{
    _Bool _isWXLaunchByUniversalLink;
    unsigned int _tokenVerifyResult;
    NSString *_appId;
    NSString *_bundleId;
    NSString *_scope;
    NSString *_state;
    NSString *_universalLink;
    NSString *_sdkVersion;
    NSString *_sdkToken;
    NSString *_sdkBundleID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int tokenVerifyResult; // @synthesize tokenVerifyResult=_tokenVerifyResult;
@property(nonatomic) _Bool isWXLaunchByUniversalLink; // @synthesize isWXLaunchByUniversalLink=_isWXLaunchByUniversalLink;
@property(copy, nonatomic) NSString *sdkBundleID; // @synthesize sdkBundleID=_sdkBundleID;
@property(copy, nonatomic) NSString *sdkToken; // @synthesize sdkToken=_sdkToken;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;

@end

