//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAAppTaskLifeCycleRecord : MMObject
{
    NSString *_appid;
    unsigned long long _debugType;
    unsigned long long _launchTimeStampInMs;
    unsigned long long _currentRunningState;
    unsigned long long _currentRunningStateStartTimeStampInMs;
    unsigned int _totalHotLaunchCount;
    unsigned long long _totalLifeTimeInMs;
    unsigned long long _totalForegroundTimeInMs;
    unsigned long long _totalBackgroundTimeInMs;
    unsigned long long _totalSuspendTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int totalHotLaunchCount; // @synthesize totalHotLaunchCount=_totalHotLaunchCount;
@property(nonatomic) unsigned long long totalSuspendTimeInMs; // @synthesize totalSuspendTimeInMs=_totalSuspendTimeInMs;
@property(nonatomic) unsigned long long totalBackgroundTimeInMs; // @synthesize totalBackgroundTimeInMs=_totalBackgroundTimeInMs;
@property(nonatomic) unsigned long long totalForegroundTimeInMs; // @synthesize totalForegroundTimeInMs=_totalForegroundTimeInMs;
@property(nonatomic) unsigned long long totalLifeTimeInMs; // @synthesize totalLifeTimeInMs=_totalLifeTimeInMs;
- (void)calCurrentRunnningStateStayTime;
- (void)onTaskHotLaunch;
- (void)onTaskEnterSuspend;
- (void)onTaskEnterBackground;
- (void)onTaskEnterForeground;
- (void)onTaskDieForReason:(unsigned long long)arg1;
- (id)initWithAppid:(id)arg1 debugType:(unsigned long long)arg2;

@end
