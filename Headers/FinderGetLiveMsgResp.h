//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveBadgeInfo, FinderLiveInfo, FinderLiveMicInfo, FinderLivePreloadInfo, NSData, NSMutableArray;

@interface FinderGetLiveMsgResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appMsgList; // @dynamic appMsgList;
@property(retain, nonatomic) FinderLiveBadgeInfo *badgeInfo; // @dynamic badgeInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned long long curLikeCnt; // @dynamic curLikeCnt;
@property(nonatomic) unsigned int curOnlineCount; // @dynamic curOnlineCount;
@property(nonatomic) unsigned int curParticipantCount; // @dynamic curParticipantCount;
@property(nonatomic) unsigned int liveCloseFlag; // @dynamic liveCloseFlag;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned int liveExtFlag; // @dynamic liveExtFlag;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(nonatomic) unsigned int liveInfoEnableFlag; // @dynamic liveInfoEnableFlag;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(nonatomic) unsigned int liveMicInfoEnableFlag; // @dynamic liveMicInfoEnableFlag;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
@property(nonatomic) unsigned int nextRetryInterval; // @dynamic nextRetryInterval;
@property(retain, nonatomic) NSMutableArray *onlineContacts; // @dynamic onlineContacts;
@property(nonatomic) unsigned int pkCloseFlag; // @dynamic pkCloseFlag;
@property(retain, nonatomic) NSMutableArray *templateInfoList; // @dynamic templateInfoList;

@end

