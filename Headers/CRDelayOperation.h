//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class CRDelay;

@interface CRDelayOperation : NSBlockOperation
{
    CRDelay *_delay;
}

+ (id)operationWithDelayInSeconds:(double)arg1;
+ (id)operationWithDelay:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CRDelay *delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double seconds;
- (void)cancel;
- (id)initWithDelay:(id)arg1;

@end
