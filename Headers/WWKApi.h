//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WWKApi : NSObject
{
}

+ (_Bool)sendReq:(id)arg1 appType:(long long)arg2;
+ (_Bool)isAppInstalled:(long long)arg1;
+ (id)p_wxworkGovernmentScheme;
+ (id)p_wxworkEnterpriseScheme;
+ (_Bool)p_isAppInstalledWithScheme:(id)arg1;
+ (_Bool)canOpenURL:(id)arg1;
+ (_Bool)openURL:(id)arg1;
+ (_Bool)sendObj:(id)arg1 scheme:(id)arg2;
+ (_Bool)sendObj:(id)arg1;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)openChatList;
+ (_Bool)openCreateChat;
+ (_Bool)openApp;
+ (long long)displayNameType;
+ (id)getApiVersion;
+ (id)getAppInstallUrl;
+ (_Bool)isAppInstalled;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)registerApp:(id)arg1 corpId:(id)arg2 agentId:(id)arg3;
+ (_Bool)registerApp:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)openURL:(id)arg1;

@end
