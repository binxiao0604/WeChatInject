//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderAttachmentList, FinderContact, FinderFoldedLayout, FinderLiveInfo, FinderObjectDesc, FinderObjectHotTopicList, FinderObjectWebInfo, FinderSnsShareInfo, FinderVideo, NSData, NSMutableArray, NSString;

@interface FinderObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderAttachmentList *attachmentList; // @dynamic attachmentList;
@property(nonatomic) unsigned int commentClose; // @dynamic commentClose;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentList; // @dynamic commentList;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int createtime; // @dynamic createtime;
@property(retain, nonatomic) NSString *debugMessage; // @dynamic debugMessage;
@property(nonatomic) unsigned int deletetime; // @dynamic deletetime;
@property(nonatomic) unsigned long long displayid; // @dynamic displayid;
@property(retain, nonatomic) NSString *eupdOob; // @dynamic eupdOob;
@property(nonatomic) unsigned int eventStatusFlag; // @dynamic eventStatusFlag;
@property(nonatomic) unsigned int favCount; // @dynamic favCount;
@property(nonatomic) unsigned int favFlag; // @dynamic favFlag;
@property(nonatomic) unsigned int foldedFlag; // @dynamic foldedFlag;
@property(retain, nonatomic) FinderFoldedLayout *foldedLayout; // @dynamic foldedLayout;
@property(nonatomic) unsigned int followFeedCount; // @dynamic followFeedCount;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int forwardStyle; // @dynamic forwardStyle;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(retain, nonatomic) FinderObjectHotTopicList *hotTopics; // @dynamic hotTopics;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int incFriendLikeCount; // @dynamic incFriendLikeCount;
@property(nonatomic) unsigned int isPoiSameCity; // @dynamic isPoiSameCity;
@property(retain, nonatomic) NSData *likeBuffer; // @dynamic likeBuffer;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *likeList; // @dynamic likeList;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderVideo *longVideoNoneed; // @dynamic longVideoNoneed;
@property(retain, nonatomic) NSMutableArray *mentionedUserContact; // @dynamic mentionedUserContact;
@property(nonatomic) unsigned int msgEventFlag; // @dynamic msgEventFlag;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int objectStatus; // @dynamic objectStatus;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(nonatomic) unsigned int orgRecommendType; // @dynamic orgRecommendType;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(nonatomic) unsigned int permissionFlag; // @dynamic permissionFlag;
@property(retain, nonatomic) NSString *posTriggerConfig; // @dynamic posTriggerConfig;
@property(nonatomic) unsigned int privateFlag; // @dynamic privateFlag;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int recommendReasonType; // @dynamic recommendReasonType;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) NSMutableArray *recommenderList; // @dynamic recommenderList;
@property(retain, nonatomic) FinderContact *refObjectContact; // @dynamic refObjectContact;
@property(nonatomic) unsigned long long refObjectFlag; // @dynamic refObjectFlag;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(nonatomic) unsigned int secondaryShowFlag; // @dynamic secondaryShowFlag;
@property(retain, nonatomic) NSString *sendShareFavWording; // @dynamic sendShareFavWording;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) FinderSnsShareInfo *snsShareInfo; // @dynamic snsShareInfo;
@property(nonatomic) unsigned int stickyTime; // @dynamic stickyTime;
@property(retain, nonatomic) NSString *tipsWording; // @dynamic tipsWording;
@property(nonatomic) unsigned int urlValidDuration; // @dynamic urlValidDuration;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(nonatomic) unsigned int warnFlag; // @dynamic warnFlag;
@property(retain, nonatomic) NSString *warnWording; // @dynamic warnWording;
@property(retain, nonatomic) FinderObjectWebInfo *webInfo; // @dynamic webInfo;

@end
