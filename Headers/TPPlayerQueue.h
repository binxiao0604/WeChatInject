//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TPPlayerQueue : NSObject
{
    void *_playingQueueKey;
    NSObject<OS_dispatch_queue> *_playingQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playingQueue; // @synthesize playingQueue=_playingQueue;
- (void *)playingQueueKey;
- (id)init;
- (id)initWithPlayingQueue:(id)arg1 queueName:(id)arg2;
- (id)initWithPlayingQueue:(id)arg1;

@end

