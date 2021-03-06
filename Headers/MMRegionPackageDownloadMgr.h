//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSString, Package;

@interface MMRegionPackageDownloadMgr : MMRootService <MMResourceMgrExt, MMServiceProtocol>
{
    Package *_cachedPackage;
    unsigned int uiInterval;
}

- (void).cxx_destruct;
- (void)updateVersion:(id)arg1;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)getVersionFilePath;
- (id)getRegionFilePathForLang:(id)arg1;
- (id)getTmpRegionFilePathForLang:(id)arg1;
- (id)getRegionFilePath;
- (id)getRegionRootPath;
- (void)checkResouce;
- (_Bool)shoulCheckUpadte;
- (void)checkUpdate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

