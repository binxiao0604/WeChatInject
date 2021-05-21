//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSHashTable, NSMutableDictionary, NSString, WePkgMetaInfo, WePkgParser, WePkgRegularConfig;

@interface WePkgPackage : MMObject
{
    NSString *_pkgId;
    NSHashTable *_oUsingWebViews;
    WePkgRegularConfig *_regularConfig;
    WePkgParser *_parser;
    NSMutableDictionary *_dicRid2BigPackageIdx;
    NSMutableDictionary *_dicRid2SingleFileInfo;
    NSMutableDictionary *_dicRid2DataItem;
    NSMutableDictionary *_dicRid2PreloadDataItem;
    WePkgMetaInfo *_metaInfo;
}

+ (void)notifyPackageChanged:(id)arg1;
+ (void)cleanPkgStatus;
+ (id)packageWithPkgId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WePkgMetaInfo *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) NSMutableDictionary *dicRid2PreloadDataItem; // @synthesize dicRid2PreloadDataItem=_dicRid2PreloadDataItem;
@property(retain, nonatomic) NSMutableDictionary *dicRid2DataItem; // @synthesize dicRid2DataItem=_dicRid2DataItem;
@property(retain, nonatomic) NSMutableDictionary *dicRid2SingleFileInfo; // @synthesize dicRid2SingleFileInfo=_dicRid2SingleFileInfo;
@property(retain, nonatomic) NSMutableDictionary *dicRid2BigPackageIdx; // @synthesize dicRid2BigPackageIdx=_dicRid2BigPackageIdx;
@property(retain, nonatomic) WePkgParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) WePkgRegularConfig *regularConfig; // @synthesize regularConfig=_regularConfig;
@property(retain, nonatomic) NSHashTable *oUsingWebViews; // @synthesize oUsingWebViews=_oUsingWebViews;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (_Bool)removeWebView:(id)arg1;
- (void)addWebView:(id)arg1;
- (_Bool)containsWebView:(id)arg1;
@property(readonly, nonatomic) _Bool inUsing;
- (void)releaseData;
- (id)genRidFromUrl:(id)arg1;
- (void)updateLastUsedTime;
- (void)parseBigPackageFile;
- (void)setupSingleFileIndex:(id)arg1;
- (void)setupRid2Index;
- (int)checkOneFileModified:(id)arg1 ExpectFileSize:(unsigned int)arg2 ExpectFileMd5:(id)arg3;
- (int)checkIfPkgFileModified;
- (_Bool)isValid;
- (id)getCurrentPkgKey;
- (void)releasePreloadResources;
- (void)preloadResourceForUrl:(id)arg1;
- (id)getAllCode;
- (id)getCacheDataForRid:(id)arg1;
- (id)getCacheDataForUrl:(id)arg1;
- (_Bool)checkIfInFileIndex:(id)arg1;
- (id)pkgVersion;
- (id)initWithPkgId:(id)arg1 andRegularConfig:(id)arg2;

@end

