//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class ConsumeWecoinResponse, NSString, PrepareWecoinConsumeResponse;

@interface WCCoinConsumeError : MMObject
{
    int _errorCode;
    unsigned long long _errorType;
    NSString *_errorMessage;
    PrepareWecoinConsumeResponse *_prepareConsumeResponse;
    ConsumeWecoinResponse *_consumeResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ConsumeWecoinResponse *consumeResponse; // @synthesize consumeResponse=_consumeResponse;
@property(retain, nonatomic) PrepareWecoinConsumeResponse *prepareConsumeResponse; // @synthesize prepareConsumeResponse=_prepareConsumeResponse;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (id)init;

@end

