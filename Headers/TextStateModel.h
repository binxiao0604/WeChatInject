//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class ClusterShowInfo, NSArray, NSString, TextStatePublishReportObject, TextStatusEmojiInfo;

@interface TextStateModel : MMObject <PBCoding>
{
    unsigned int mediaType;
    unsigned int visibility;
    unsigned int createTime;
    unsigned int expireTime;
    unsigned int textStatePublishType;
    unsigned int retryCount;
    int mediaWidth;
    int mediaHeight;
    NSString *stateID;
    NSString *positionName;
    NSString *positionId;
    NSString *mediaURL;
    NSString *mediaAESKey;
    NSString *mediaThumbURL;
    NSString *mediaThumbAESKey;
    NSString *topicId;
    NSArray *topicList;
    NSString *sourceId;
    NSString *sourceActivityId;
    NSString *sourceName;
    NSString *sourceIconURL;
    NSString *iconId;
    NSString *textStateDescription;
    NSArray *privacyContactBlackList;
    NSString *tid;
    unsigned long long option;
    NSString *verifyInfo;
    NSString *backgroundId;
    NSString *publishErrorMessage;
    TextStatePublishReportObject *publishReportObject;
    NSArray *jumpInfos;
    NSString *customIconDescription;
    TextStatusEmojiInfo *emojiInfo;
    ClusterShowInfo *_clusterShowInfo;
    struct CGPoint positionCoordinate;
}

+ (id)genTextStateID:(id)arg1 createTime:(unsigned int)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_emojiInfo;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_jumpInfos;
+ (void)PBArrayAdd_publishReportObject;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_publishErrorMessage;
+ (void)PBArrayAdd_backgroundId;
+ (void)PBArrayAdd_verifyInfo;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_textStatePublishType;
+ (void)PBArrayAdd_privacyContactBlackList;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_textStateDescription;
+ (void)PBArrayAdd_iconId;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_topicList;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_visibility;
+ (void)PBArrayAdd_mediaThumbAESKey;
+ (void)PBArrayAdd_mediaThumbURL;
+ (void)PBArrayAdd_mediaAESKey;
+ (void)PBArrayAdd_mediaURL;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_positionId;
+ (void)PBArrayAdd_positionName;
+ (void)PBArrayAdd_positionCoordinate;
+ (void)PBArrayAdd_stateID;
- (void).cxx_destruct;
@property(retain, nonatomic) ClusterShowInfo *clusterShowInfo; // @synthesize clusterShowInfo=_clusterShowInfo;
@property(retain, nonatomic) TextStatusEmojiInfo *emojiInfo; // @synthesize emojiInfo;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription;
@property(nonatomic) int mediaHeight; // @synthesize mediaHeight;
@property(nonatomic) int mediaWidth; // @synthesize mediaWidth;
@property(retain, nonatomic) NSArray *jumpInfos; // @synthesize jumpInfos;
@property(retain, nonatomic) TextStatePublishReportObject *publishReportObject; // @synthesize publishReportObject;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount;
@property(retain, nonatomic) NSString *publishErrorMessage; // @synthesize publishErrorMessage;
@property(retain, nonatomic) NSString *backgroundId; // @synthesize backgroundId;
@property(retain, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo;
@property(nonatomic) unsigned long long option; // @synthesize option;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(nonatomic) unsigned int textStatePublishType; // @synthesize textStatePublishType;
@property(retain, nonatomic) NSArray *privacyContactBlackList; // @synthesize privacyContactBlackList;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *textStateDescription; // @synthesize textStateDescription;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName;
@property(retain, nonatomic) NSString *sourceActivityId; // @synthesize sourceActivityId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId;
@property(retain, nonatomic) NSArray *topicList; // @synthesize topicList;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId;
@property(nonatomic) unsigned int visibility; // @synthesize visibility;
@property(retain, nonatomic) NSString *mediaThumbAESKey; // @synthesize mediaThumbAESKey;
@property(retain, nonatomic) NSString *mediaThumbURL; // @synthesize mediaThumbURL;
@property(retain, nonatomic) NSString *mediaAESKey; // @synthesize mediaAESKey;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType;
@property(retain, nonatomic) NSString *positionId; // @synthesize positionId;
@property(retain, nonatomic) NSString *positionName; // @synthesize positionName;
@property(nonatomic) struct CGPoint positionCoordinate; // @synthesize positionCoordinate;
@property(retain, nonatomic) NSString *stateID; // @synthesize stateID;
@property(readonly, copy) NSString *description;
- (_Bool)isLocalCacheTextState;
- (void)setIconWrap:(id)arg1;
- (id)getTextStateIcon;
- (_Bool)isRead;
- (_Bool)isValid;
- (id)extInfo;
- (id)initWithBase64String:(id)arg1;
- (id)initWithExtInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

