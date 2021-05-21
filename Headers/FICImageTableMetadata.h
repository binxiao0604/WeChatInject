//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMFICImageFormat, MemoryMappedKV, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSString;

@interface FICImageTableMetadata : NSObject <PBCoding>
{
    unsigned int m_entryCount;
    unsigned int m_maxLRUFactor;
    NSString *m_metadataPath;
    MMFICImageFormat *m_imgFormat;
    NSMutableDictionary *m_entries;
    MemoryMappedKV *m_entriesKV;
    NSMutableOrderedSet *m_MRUEntries;
    NSMutableIndexSet *m_unoccupiedIndexes;
    unsigned int imgSizeWidth;
    unsigned int imgSizeHeight;
    unsigned int imgMaxCnt;
    unsigned int cpuzSize;
    unsigned int pageSize;
    unsigned int version;
    unsigned int FICVersion;
    NSString *formatName;
}

+ (void)initialize;
+ (void)PBArrayAdd_FICVersion;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_pageSize;
+ (void)PBArrayAdd_cpuzSize;
+ (void)PBArrayAdd_imgMaxCnt;
+ (void)PBArrayAdd_imgSizeHeight;
+ (void)PBArrayAdd_imgSizeWidth;
+ (void)PBArrayAdd_formatName;
- (void).cxx_destruct;
@property(nonatomic) unsigned int maxLRUFactor; // @synthesize maxLRUFactor=m_maxLRUFactor;
@property(nonatomic) unsigned int entryCount; // @synthesize entryCount=m_entryCount;
@property(readonly, nonatomic) NSMutableDictionary *entries; // @synthesize entries=m_entries;
@property(nonatomic) unsigned int FICVersion; // @synthesize FICVersion;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(nonatomic) unsigned int pageSize; // @synthesize pageSize;
@property(nonatomic) unsigned int cpuzSize; // @synthesize cpuzSize;
@property(nonatomic) unsigned int imgMaxCnt; // @synthesize imgMaxCnt;
@property(nonatomic) unsigned int imgSizeHeight; // @synthesize imgSizeHeight;
@property(nonatomic) unsigned int imgSizeWidth; // @synthesize imgSizeWidth;
@property(retain, nonatomic) NSString *formatName; // @synthesize formatName;
- (_Bool)isAnyEntityInUsed;
- (void)setEntityInUse:(_Bool)arg1 entityUUID:(id)arg2;
- (void)entryWasAccessedWithEntityUUID:(id)arg1;
- (unsigned long long)nextEntryIndex;
- (void)newEntryWithEntityUUID:(id)arg1 entryIndex:(unsigned long long)arg2;
- (void)deleteEntryForEntityUUID:(id)arg1;
- (unsigned long long)indexOfEntryForEntityUUID:(id)arg1;
- (void)reset;
- (_Bool)saveMetadata;
- (_Bool)loadMetadata;
- (id)initWithMetadataPath:(id)arg1 imgFormat:(id)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

