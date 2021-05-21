//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKTimerService-Protocol.h"

@class MMTimer, MMVoidCallback, NSString;

@interface KindaTimerService : NSObject <MMKTimerService>
{
    _Bool _needThrottle;
    double _m_interval;
    MMVoidCallback *_m_timeCheckCallback;
    MMTimer *_m_timer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needThrottle; // @synthesize needThrottle=_needThrottle;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer=_m_timer;
@property(retain, nonatomic) MMVoidCallback *m_timeCheckCallback; // @synthesize m_timeCheckCallback=_m_timeCheckCallback;
@property(nonatomic) double m_interval; // @synthesize m_interval=_m_interval;
- (double)now;
- (void)dispatchAfterImpl:(float)arg1 handle:(id)arg2;
- (void)throttleImpl:(float)arg1 handler:(id)arg2;
- (void)timeCheckCallback;
- (void)stopTimeCheck;
- (void)startTimeCheck;
- (void)initIntervalAndCheckedCallbackImpl:(float)arg1 timeCheckCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

