//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMFinderLiveTaskId, NSArray, NSError, WCFinderLiveInfo;

@protocol MMFinderLiveMessageExt <NSObject>

@optional
- (void)onGetHandledFinderLiveMessage:(NSError *)arg1 taskId:(MMFinderLiveTaskId *)arg2 onlineContacts:(NSArray *)arg3 msgList:(NSArray *)arg4 finderLiveInfo:(WCFinderLiveInfo *)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 onlineViewCount:(unsigned int)arg9;
@end
