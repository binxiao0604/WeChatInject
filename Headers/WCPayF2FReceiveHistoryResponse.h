//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayF2FReceiveHistoryResponse : NSObject
{
    _Bool _bIsAllDataLoadEnd;
    unsigned int _svrRetTrynum;
    long long _retCode;
    NSString *_retMsg;
    NSArray *_historyList;
    unsigned long long _chooseFlag;
    unsigned long long _loadMoreDirection;
    unsigned long long _svrFromTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int svrRetTrynum; // @synthesize svrRetTrynum=_svrRetTrynum;
@property(nonatomic) unsigned long long svrFromTimestamp; // @synthesize svrFromTimestamp=_svrFromTimestamp;
@property(nonatomic) _Bool bIsAllDataLoadEnd; // @synthesize bIsAllDataLoadEnd=_bIsAllDataLoadEnd;
@property(nonatomic) unsigned long long loadMoreDirection; // @synthesize loadMoreDirection=_loadMoreDirection;
@property(nonatomic) unsigned long long chooseFlag; // @synthesize chooseFlag=_chooseFlag;
@property(retain, nonatomic) NSArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) long long retCode; // @synthesize retCode=_retCode;

@end

