//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCUpdateResourceExt-Protocol.h"

@class NSBundle, NSObject, NSString, WCUpdateInfo;
@protocol OS_dispatch_queue;

@interface WCUpdateMgr : MMRootService <MMServiceProtocol, WCUpdateResourceExt, MMKernelExt, IMMLanguageMgrExt>
{
    NSBundle *_resourceBundle;
    NSBundle *_languageBundle;
    WCUpdateInfo *_pInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)cleanOldOne;
- (_Bool)unzipBundleUpdates;
- (_Bool)unzipDownloadUpdates:(id)arg1;
- (_Bool)_loadBundleWithoutCheck:(id)arg1;
- (void)exitForNewUpdateOnEnteringBackground;
- (void)setNewClientVersionInUserDefault:(unsigned int)arg1;
- (void)clearNewClientVersionInUserDefault;
- (unsigned int)newClientVersion;
- (_Bool)loadMainUpdateBundle;
- (void)onLanguageChange;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)onPResDeleteFinish;
- (void)onPResUpdateFinish:(unsigned long long)arg1;
- (void)cleanUpdateHelper;
- (void)forceUpdate:(unsigned int)arg1;
- (void)forceCleanUpdate;
- (_Bool)loadBundle:(id)arg1 withIDKey:(const struct BundleLoadIDKey *)arg2;
- (_Bool)loadBundleWithoutIDKeyReport:(id)arg1;
- (_Bool)loadPluginInBundle:(id)arg1 withIDKey:(const struct BundleLoadIDKey *)arg2;
- (_Bool)loadPluginInBundle:(id)arg1;
- (void)loadAndExecute;
- (void)dealloc;
- (void)registerExtension;
- (void)onServiceInit;
- (id)getPluginPathInBundle:(id)arg1;
- (id)getPluginPathInUpdate:(id)arg1;
- (id)getStringForCurLanguage:(id)arg1 defaultTo:(id)arg2;
- (id)getBundleResource:(id)arg1 ext:(id)arg2;
- (id)svgFileFullPathWithNamed:(id)arg1;
- (id)imageNamed:(id)arg1;
- (_Bool)loadResource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

