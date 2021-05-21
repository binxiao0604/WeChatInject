//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface PluginUtilMgr : MMRootService <MMServiceProtocol, IMMLanguageMgrExt>
{
    NSDictionary *m_dicNameToType;
    NSArray *m_arrNames;
    NSArray *m_arrLocalizedNickNames;
    NSArray *m_arrOfficialNames;
    NSArray *m_arrLocalizedOfficialNickNames;
}

- (void).cxx_destruct;
- (void)onLanguageChange;
- (void)refreshLocalizedName;
- (id)getWenxinAliasName;
- (id)getOfficialLocalizedNickNameWithType:(long long)arg1;
- (id)getOfficialUserNameWithType:(long long)arg1;
- (_Bool)hasOfficialExpectWeixinUserNmae:(id)arg1;
- (_Bool)hasOfficialUserName:(id)arg1;
- (id)getPluginLocalizedNickName:(long long)arg1;
- (long long)nameToPluginType:(id)arg1;
- (id)pluginTypeToName:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)initOfficialName;
- (void)initLocalizedOfficialName;
- (void)initLocalizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
