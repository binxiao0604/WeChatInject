//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderNewDnsObj : NSObject
{
    _Bool _bUseDCIP;
    unsigned int _lastNewDNSTime;
    NSString *_host;
    NSArray *_iplist;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastNewDNSTime; // @synthesize lastNewDNSTime=_lastNewDNSTime;
@property(nonatomic) _Bool bUseDCIP; // @synthesize bUseDCIP=_bUseDCIP;
@property(retain, nonatomic) NSArray *iplist; // @synthesize iplist=_iplist;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void)doNewDns;
- (_Bool)isNeedUpdateIpList;

@end

