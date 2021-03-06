//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol StoreEmotionBaseCgiDelegate;

@interface StoreEmotionBaseCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_eventID;
    _Bool _holdSelfWhenRequesting;
    unsigned int _uiCgi;
    double _totalTimeout;
    id <StoreEmotionBaseCgiDelegate> _baseDelegate;
    NSString *_nsCgiName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool holdSelfWhenRequesting; // @synthesize holdSelfWhenRequesting=_holdSelfWhenRequesting;
@property(nonatomic) unsigned int uiCgi; // @synthesize uiCgi=_uiCgi;
@property(retain, nonatomic) NSString *nsCgiName; // @synthesize nsCgiName=_nsCgiName;
@property(nonatomic) __weak id <StoreEmotionBaseCgiDelegate> baseDelegate; // @synthesize baseDelegate=_baseDelegate;
@property(nonatomic) double totalTimeout; // @synthesize totalTimeout=_totalTimeout;
- (void)onReturnError;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)stopRequest;
- (_Bool)startRequestWithRequest:(id)arg1;
@property(readonly, nonatomic) _Bool isRequesting;
- (id)init;

@end

