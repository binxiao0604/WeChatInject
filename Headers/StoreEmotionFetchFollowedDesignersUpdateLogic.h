//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class MemoryMappedKV, NSData, NSMutableArray, NSMutableDictionary, StoreEmotionGetDetailCgi;
@protocol OS_dispatch_queue, StoreEmotionFetchFollowedDesignersUpdateLogicDelegate;

@interface StoreEmotionFetchFollowedDesignersUpdateLogic : NSObject <PBMessageObserverDelegate>
{
    _Bool _active;
    int _cgiFreq;
    id <StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> _delegate;
    NSMutableArray *_peddingPackageDesignerInfos;
    NSMutableArray *_peddingDesignerPidRequest;
    NSMutableArray *_currentDesignerPids;
    NSData *_currReqBuf;
    unsigned long long _timeStart;
    NSObject<OS_dispatch_queue> *_worker;
    NSMutableDictionary *_eventIdMap;
    StoreEmotionGetDetailCgi *_getEmotionDetailCgi;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) StoreEmotionGetDetailCgi *getEmotionDetailCgi; // @synthesize getEmotionDetailCgi=_getEmotionDetailCgi;
@property(retain, nonatomic) NSMutableDictionary *eventIdMap; // @synthesize eventIdMap=_eventIdMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *worker; // @synthesize worker=_worker;
@property(nonatomic) unsigned long long timeStart; // @synthesize timeStart=_timeStart;
@property(retain, nonatomic) NSData *currReqBuf; // @synthesize currReqBuf=_currReqBuf;
@property(retain, nonatomic) NSMutableArray *currentDesignerPids; // @synthesize currentDesignerPids=_currentDesignerPids;
@property(retain, nonatomic) NSMutableArray *peddingDesignerPidRequest; // @synthesize peddingDesignerPidRequest=_peddingDesignerPidRequest;
@property(retain, nonatomic) NSMutableArray *peddingPackageDesignerInfos; // @synthesize peddingPackageDesignerInfos=_peddingPackageDesignerInfos;
@property(nonatomic) int cgiFreq; // @synthesize cgiFreq=_cgiFreq;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordLastTimeOnFinish;
- (_Bool)shouldSkipCurrentFetch;
- (unsigned int)getFetchLogicMinTimeInterval;
- (unsigned int)getFetchCgiFreq;
- (_Bool)isFeatureEnable;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onFetchAllDesignerPidsFinish;
- (void)onFetchDesignerPidsFailed;
- (void)onFetchDesignerPidsSuccess:(id)arg1 headUrl:(id)arg2;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (void)onGotPersonalDesignerMessageReturn:(id)arg1;
- (void)tryUpdateNextDesignerPids;
- (void)onUpdateAllUserFollowedDesignerInfoSuccess;
- (void)onStoreEmotionGetDetailCgiFailed:(id)arg1;
- (void)onStoreEmotionGetDetailCgiOK:(id)arg1 designer:(id)arg2;
- (void)tryUpdateNextDesingerInfo;
- (void)startLogic;
- (void)dealloc;
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;

@end

