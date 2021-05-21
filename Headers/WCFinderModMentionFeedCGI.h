//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSMutableArray, NSString;

@interface WCFinderModMentionFeedCGI : WCFinderBaseCgi
{
    unsigned long long _opType;
    NSString *_userName;
    NSMutableArray *_dataItems;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUserName:(id)arg1 actiontype:(unsigned long long)arg2 dataItems:(id)arg3 successful:(CDUnknownBlockType)arg4 failed:(CDUnknownBlockType)arg5;

@end

