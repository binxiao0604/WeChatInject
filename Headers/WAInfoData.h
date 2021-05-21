//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSArray, NSString;

@interface WAInfoData : MMObject <WCTTableCoding>
{
    _Bool _autoUpdateForPlugin;
    _Bool _ignorePackageCheckSumOnDebugType;
    _Bool _hasDownloadPatchData;
    _Bool _isDownloadUrlFromConcurrentPrefetch;
    unsigned int _updateTime;
    unsigned int _packageSize;
    unsigned int _versionStatus;
    unsigned int _appServiceType;
    unsigned int _debugModeType;
    unsigned int _oldExistVersion;
    unsigned int _downloadDataSize;
    unsigned int _debugDevKey;
    unsigned int _fromScene;
    unsigned int _parentDebugModeType;
    unsigned int _parentAppServiceType;
    NSString *_appID;
    NSString *_username;
    unsigned long long _version;
    NSString *_packageCheckSum;
    NSString *_realAppId;
    NSString *_moduleName;
    unsigned long long _packageType;
    unsigned long long _encryptType;
    NSString *_withoutLibMd5;
    NSArray *_arrPluginCodeInfo;
    NSString *_prefixPathForPluginCode;
    NSArray *_arrWidgetInfo;
    NSString *_customVersion;
    NSString *_withoutLibUrl;
    NSString *_downloadUrl;
    NSString *_debugDownloadUrl;
    unsigned long long _startDownloadTimeStampInMs;
    unsigned long long _endDownloadTimeStampInMs;
    unsigned long long _rawDownloadSize;
    NSString *_parentAppid;
    unsigned long long _parentVersion;
}

+ (_Bool)isPackageTypeWithoutPluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypePluginPkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeModulePkg:(unsigned long long)arg1;
+ (_Bool)isPackageTypeFullPkg:(unsigned long long)arg1;
+ (unsigned long long)transferServerPackageTypeToLocal:(int)arg1;
+ (id)getEncryptTypeString:(unsigned long long)arg1;
+ (void)__wcdb_index_19:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)customVersion;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)autoUpdateForPlugin;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)arrWidgetInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)prefixPathForPluginCode;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)arrPluginCodeInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)withoutLibMd5;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)encryptType;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appServiceType;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)packageType;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)moduleName;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)realAppId;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)versionStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)packageCheckSum;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)packageSize;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)version;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appID;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int parentAppServiceType; // @synthesize parentAppServiceType=_parentAppServiceType;
@property(nonatomic) unsigned int parentDebugModeType; // @synthesize parentDebugModeType=_parentDebugModeType;
@property(nonatomic) unsigned long long parentVersion; // @synthesize parentVersion=_parentVersion;
@property(retain, nonatomic) NSString *parentAppid; // @synthesize parentAppid=_parentAppid;
@property(nonatomic) unsigned long long rawDownloadSize; // @synthesize rawDownloadSize=_rawDownloadSize;
@property(nonatomic) unsigned long long endDownloadTimeStampInMs; // @synthesize endDownloadTimeStampInMs=_endDownloadTimeStampInMs;
@property(nonatomic) unsigned long long startDownloadTimeStampInMs; // @synthesize startDownloadTimeStampInMs=_startDownloadTimeStampInMs;
@property(nonatomic) _Bool isDownloadUrlFromConcurrentPrefetch; // @synthesize isDownloadUrlFromConcurrentPrefetch=_isDownloadUrlFromConcurrentPrefetch;
@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) NSString *debugDownloadUrl; // @synthesize debugDownloadUrl=_debugDownloadUrl;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) _Bool hasDownloadPatchData; // @synthesize hasDownloadPatchData=_hasDownloadPatchData;
@property(nonatomic) unsigned int downloadDataSize; // @synthesize downloadDataSize=_downloadDataSize;
@property(nonatomic) _Bool ignorePackageCheckSumOnDebugType; // @synthesize ignorePackageCheckSumOnDebugType=_ignorePackageCheckSumOnDebugType;
@property(nonatomic) unsigned int oldExistVersion; // @synthesize oldExistVersion=_oldExistVersion;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(retain, nonatomic) NSString *withoutLibUrl; // @synthesize withoutLibUrl=_withoutLibUrl;
@property(retain, nonatomic) NSString *customVersion; // @synthesize customVersion=_customVersion;
@property(nonatomic) _Bool autoUpdateForPlugin; // @synthesize autoUpdateForPlugin=_autoUpdateForPlugin;
@property(retain, nonatomic) NSArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSString *prefixPathForPluginCode; // @synthesize prefixPathForPluginCode=_prefixPathForPluginCode;
@property(retain, nonatomic) NSArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(nonatomic) unsigned long long encryptType; // @synthesize encryptType=_encryptType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(nonatomic) unsigned long long packageType; // @synthesize packageType=_packageType;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain, nonatomic) NSString *realAppId; // @synthesize realAppId=_realAppId;
@property(nonatomic) unsigned int versionStatus; // @synthesize versionStatus=_versionStatus;
@property(retain, nonatomic) NSString *packageCheckSum; // @synthesize packageCheckSum=_packageCheckSum;
@property(nonatomic) unsigned int packageSize; // @synthesize packageSize=_packageSize;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (_Bool)isWithoutPluginPkg;
- (_Bool)isPluginPkgCode;
- (_Bool)isModulePkgCode;
- (_Bool)isFullPkgCode;
- (_Bool)isPluginCode:(id)arg1;
- (_Bool)isEqualToInfoData:(id)arg1;
- (id)initModuleInfoData:(id)arg1;
- (id)initDefaultInfoData;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

