//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportAppTaskVersionFallbackAction : WAReportBaseItem
{
    _Bool _isWeakNet;
    unsigned int _targetAppVersion;
    unsigned int _localAppVersion;
    unsigned int _waitTimeInMs;
    unsigned long long _fallbackScene;
    NSString *_netType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isWeakNet; // @synthesize isWeakNet=_isWeakNet;
@property(copy, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(nonatomic) unsigned int waitTimeInMs; // @synthesize waitTimeInMs=_waitTimeInMs;
@property(nonatomic) unsigned long long fallbackScene; // @synthesize fallbackScene=_fallbackScene;
@property(nonatomic) unsigned int localAppVersion; // @synthesize localAppVersion=_localAppVersion;
@property(nonatomic) unsigned int targetAppVersion; // @synthesize targetAppVersion=_targetAppVersion;
- (id)reportString;
- (int)reportID;

@end

