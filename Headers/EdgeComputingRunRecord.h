//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface EdgeComputingRunRecord : MMObject
{
    NSMutableDictionary *runRecords;
}

- (void).cxx_destruct;
- (unsigned long long)getLastRecord:(id)arg1;
- (void)removeRecord:(id)arg1;
- (void)addRecord:(id)arg1 withTime:(unsigned long long)arg2;
- (void)saveRecord;
- (void)initRecord;
- (id)init;

@end

