//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsAdExpInfo;

@interface SnsTimeLineRequest : WXPBGeneratedMessage
{
    int realFeedExposureIdsMemoizedSerializedSize;
}

+ (void)initialize;
- (id)shortDebugString;

// Remaining properties
@property(retain, nonatomic) SnsAdExpInfo *adexpinfo; // @dynamic adexpinfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long clientLatestId; // @dynamic clientLatestId;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int foldSectionSize; // @dynamic foldSectionSize;
@property(nonatomic) unsigned long long getTimeLineIdxMinId; // @dynamic getTimeLineIdxMinId;
@property(nonatomic) unsigned int lastRequestTime; // @dynamic lastRequestTime;
@property(nonatomic) unsigned long long maxId; // @dynamic maxId;
@property(nonatomic) unsigned long long minFilterId; // @dynamic minFilterId;
@property(nonatomic) unsigned long long minIdForCheckUnread; // @dynamic minIdForCheckUnread;
@property(nonatomic) unsigned long long minIdForGetPrePage; // @dynamic minIdForGetPrePage;
@property(nonatomic) unsigned long long nearbyFoldId; // @dynamic nearbyFoldId;
@property(nonatomic) unsigned int networkType; // @dynamic networkType;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *realFeedExposureIds; // @dynamic realFeedExposureIds;
@property(nonatomic) unsigned int realFeedExposureIdsCount; // @dynamic realFeedExposureIdsCount;
@property(retain, nonatomic) SKBuiltinBuffer_t *session; // @dynamic session;
@property(nonatomic) unsigned int updateTimelineScene; // @dynamic updateTimelineScene;

@end

