//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray;

@interface MMWebOptimizationA8keyLiteTaskResult : MMObject
{
    unsigned int _costTime;
    NSArray *_arrDomainControlData;
    NSArray *_arrUrlResult;
    NSArray *_arrPrefetchDomainInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int costTime; // @synthesize costTime=_costTime;
@property(retain, nonatomic) NSArray *arrPrefetchDomainInfo; // @synthesize arrPrefetchDomainInfo=_arrPrefetchDomainInfo;
@property(retain, nonatomic) NSArray *arrUrlResult; // @synthesize arrUrlResult=_arrUrlResult;
@property(retain, nonatomic) NSArray *arrDomainControlData; // @synthesize arrDomainControlData=_arrDomainControlData;

@end

