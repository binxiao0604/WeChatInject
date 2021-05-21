//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CMMotionManager, HighpassFilter, NSOperationQueue;
@protocol ShakeCheckerDelegate;

@interface CShakeChecker : MMObject
{
    id <ShakeCheckerDelegate> m_delegate;
    CMMotionManager *m_motionMgr;
    HighpassFilter *m_filter;
    NSOperationQueue *m_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopCheck;
- (void)startCheck;
- (id)init;
- (void)setM_Delegate:(id)arg1;

@end

