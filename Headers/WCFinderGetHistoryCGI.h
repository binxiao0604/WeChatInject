//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderGetHistoryCGI : WCFinderBaseCgi
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_username;
    long long _tabType;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLastBuff:(id)arg1 clientStatus:(id)arg2 username:(id)arg3 tabType:(long long)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end
