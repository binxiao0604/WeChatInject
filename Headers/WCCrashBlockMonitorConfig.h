//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPluginConfig.h"

@class NSString, WCBlockMonitorConfiguration;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitorConfig : MatrixPluginConfig
{
    _Bool _enableCrash;
    _Bool _enableBlockMonitor;
    NSString *_appVersion;
    NSString *_appShortVersion;
    id <WCCrashBlockMonitorDelegate> _blockMonitorDelegate;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onAppendAdditionalInfoCallBack;
    WCBlockMonitorConfiguration *_blockMonitorConfiguration;
    unsigned long long _reportStrategy;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(retain, nonatomic) WCBlockMonitorConfiguration *blockMonitorConfiguration; // @synthesize blockMonitorConfiguration=_blockMonitorConfiguration;
@property(nonatomic) CDUnknownFunctionPointerType onAppendAdditionalInfoCallBack; // @synthesize onAppendAdditionalInfoCallBack=_onAppendAdditionalInfoCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> blockMonitorDelegate; // @synthesize blockMonitorDelegate=_blockMonitorDelegate;
@property(nonatomic) _Bool enableBlockMonitor; // @synthesize enableBlockMonitor=_enableBlockMonitor;
@property(nonatomic) _Bool enableCrash; // @synthesize enableCrash=_enableCrash;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (id)init;

@end

