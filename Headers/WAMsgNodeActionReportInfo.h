//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WAMsgNodeActionReportInfo : MMObject
{
    _Bool _bShouldLogAction;
    _Bool _hasWidgetDataWhenCreate;
    unsigned int _uiDebugMode;
    NSString *_statId;
    NSMutableArray *_actionList;
    long long _serviceType;
    NSMutableDictionary *_apiUsageDict;
    NSMutableArray *_alarmKeys;
    NSString *_cacheKey;
    NSString *_jumpUserName;
    NSString *_srcAppId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *srcAppId; // @synthesize srcAppId=_srcAppId;
@property(nonatomic) _Bool hasWidgetDataWhenCreate; // @synthesize hasWidgetDataWhenCreate=_hasWidgetDataWhenCreate;
@property(retain, nonatomic) NSString *jumpUserName; // @synthesize jumpUserName=_jumpUserName;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSMutableArray *alarmKeys; // @synthesize alarmKeys=_alarmKeys;
@property(retain, nonatomic) NSMutableDictionary *apiUsageDict; // @synthesize apiUsageDict=_apiUsageDict;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) unsigned int uiDebugMode; // @synthesize uiDebugMode=_uiDebugMode;
@property(nonatomic) _Bool bShouldLogAction; // @synthesize bShouldLogAction=_bShouldLogAction;
@property(retain, nonatomic) NSMutableArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSString *statId; // @synthesize statId=_statId;
- (_Bool)shouldForbidLogAlarmKey:(long long)arg1;

@end

