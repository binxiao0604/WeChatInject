//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayConfirmMessageStruct : NSObject
{
    NSString *m_nsMessageUid;
    NSString *m_nsProductName;
    NSString *m_nsProductMoney;
    NSString *m_nsProductOriginalMoney;
    unsigned char _routeInfo;
    unsigned long long _m_confirmType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char routeInfo; // @synthesize routeInfo=_routeInfo;
@property(nonatomic) unsigned long long m_confirmType; // @synthesize m_confirmType=_m_confirmType;
@property(retain, nonatomic) NSString *m_nsProductOriginalMoney; // @synthesize m_nsProductOriginalMoney;
@property(retain, nonatomic) NSString *m_nsProductName; // @synthesize m_nsProductName;
@property(retain, nonatomic) NSString *m_nsProductMoney; // @synthesize m_nsProductMoney;
@property(retain, nonatomic) NSString *m_nsMessageUid; // @synthesize m_nsMessageUid;
- (void)dealloc;

@end

