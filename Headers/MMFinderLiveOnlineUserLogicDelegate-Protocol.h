//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveOnlineUserLogicDelegate-Protocol.h"

@class MMFinderLiveUserStateItem, NSError, NSMutableArray;

@protocol MMFinderLiveOnlineUserLogicDelegate <MMLiveOnlineUserLogicDelegate>
- (void)onFetchFinderOnlineUserListWithError:(NSError *)arg1 onlineUserStateItems:(NSMutableArray *)arg2 rewardTotalAmountInHeat:(unsigned long long)arg3 onlineMemberCount:(unsigned int)arg4 myLiveUserStateItem:(MMFinderLiveUserStateItem *)arg5;
@end

