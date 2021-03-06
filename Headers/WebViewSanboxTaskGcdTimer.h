//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface WebViewSanboxTaskGcdTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    id _userInfo;
}

+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 block:(CDUnknownBlockType)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)dealloc;
- (void)invalidate;

@end

