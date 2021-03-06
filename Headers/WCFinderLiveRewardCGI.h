//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSData, NSString, WCFinderDataItem;

@interface WCFinderLiveRewardCGI : WCFinderLiveBaseCgi
{
    _Bool _comboFinished;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    WCFinderDataItem *_dataItem;
    NSString *_rewardRecipientUserName;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    NSString *_requestId;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool comboFinished; // @synthesize comboFinished=_comboFinished;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(copy, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(copy, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(copy, nonatomic) NSString *rewardRecipientUserName; // @synthesize rewardRecipientUserName=_rewardRecipientUserName;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 rewardRecipientUserName:(id)arg3 rewardComboId:(id)arg4 rewardProductId:(id)arg5 rewardProductCount:(unsigned int)arg6 rewardAmountInWecoin:(unsigned int)arg7 requestId:(id)arg8 comboFinished:(_Bool)arg9 successBlock:(CDUnknownBlockType)arg10 failBlock:(CDUnknownBlockType)arg11;

@end

