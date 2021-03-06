//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WePkgRegularConfigExt : MMObject <PBCoding, WCTColumnCoding>
{
    unsigned int lastUnusedSeconds;
    unsigned int checkIntervalSeconds;
    unsigned int lastUsedTimestamp;
    unsigned int downloadNetworkType;
    unsigned int pkgSizeInBytes;
    unsigned int checkUpdateSuccessTime;
    NSString *currentEnabledVersion;
    NSString *currentPkgMd5;
    NSString *checkResponseMd5;
    NSString *downloadUrl;
    NSString *charSet;
    NSMutableArray *atomicSingleFileList;
    NSMutableArray *nonAtomicSingleFileList;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_checkUpdateSuccessTime;
+ (void)PBArrayAdd_nonAtomicSingleFileList;
+ (void)PBArrayAdd_atomicSingleFileList;
+ (void)PBArrayAdd_charSet;
+ (void)PBArrayAdd_pkgSizeInBytes;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_checkResponseMd5;
+ (void)PBArrayAdd_lastUsedTimestamp;
+ (void)PBArrayAdd_checkIntervalSeconds;
+ (void)PBArrayAdd_lastUnusedSeconds;
+ (void)PBArrayAdd_currentPkgMd5;
+ (void)PBArrayAdd_currentEnabledVersion;
- (void).cxx_destruct;
@property(nonatomic) unsigned int checkUpdateSuccessTime; // @synthesize checkUpdateSuccessTime;
@property(retain, nonatomic) NSMutableArray *nonAtomicSingleFileList; // @synthesize nonAtomicSingleFileList;
@property(retain, nonatomic) NSMutableArray *atomicSingleFileList; // @synthesize atomicSingleFileList;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet;
@property(nonatomic) unsigned int pkgSizeInBytes; // @synthesize pkgSizeInBytes;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *checkResponseMd5; // @synthesize checkResponseMd5;
@property(nonatomic) unsigned int lastUsedTimestamp; // @synthesize lastUsedTimestamp;
@property(nonatomic) unsigned int checkIntervalSeconds; // @synthesize checkIntervalSeconds;
@property(nonatomic) unsigned int lastUnusedSeconds; // @synthesize lastUnusedSeconds;
@property(retain, nonatomic) NSString *currentPkgMd5; // @synthesize currentPkgMd5;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @synthesize currentEnabledVersion;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

