//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCImageViewResuablePool : MMUserService <MMServiceProtocol>
{
    int _poolSize;
    NSMutableDictionary *_resuableImagePool;
}

+ (id)dequeueOrCreateItemView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *resuableImagePool; // @synthesize resuableImagePool=_resuableImagePool;
@property(nonatomic) int poolSize; // @synthesize poolSize=_poolSize;
- (id)dequeueItemView:(id)arg1;
- (void)queueItemView:(id)arg1 kind:(id)arg2;
- (void)onServiceMemoryWarning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

