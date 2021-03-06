//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EdgeComputingCacheDataModel, MemoryMappedKV, NSArray, NSString;

@protocol EdgeComputingDataCache <NSObject>
- (unsigned int)getTyoe;
- (MemoryMappedKV *)getMMKV;
- (unsigned long long)size;
- (void)clearInvalidCache:(NSArray *)arg1;
- (void)clear:(NSString *)arg1;
- (NSArray *)read:(NSString *)arg1;
- (void)save:(EdgeComputingCacheDataModel *)arg1;
@end

