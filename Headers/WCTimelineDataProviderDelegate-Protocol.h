//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WeiShangInfo;

@protocol WCTimelineDataProviderDelegate <NSObject>
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)onPrePageUpdated:(unsigned long long)arg1 datas:(NSMutableArray *)arg2 adDatas:(NSMutableArray *)arg3 changedTime:(unsigned int)arg4 wsInfos:(WeiShangInfo *)arg5;
- (void)onNextPageUpdated:(unsigned long long)arg1 datas:(NSMutableArray *)arg2 adDatas:(NSMutableArray *)arg3 changedTime:(unsigned int)arg4 wsInfos:(WeiShangInfo *)arg5;
- (void)onFirstPageUpdated:(unsigned long long)arg1 datas:(NSMutableArray *)arg2 adDatas:(NSMutableArray *)arg3 changedTime:(unsigned int)arg4 feedIds:(NSMutableArray *)arg5 feedFlags:(NSMutableArray *)arg6 wsInfos:(WeiShangInfo *)arg7;
@end

