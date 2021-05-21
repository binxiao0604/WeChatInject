//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoderNSCodingBridge-Protocol.h"
#import "PBCoding-Protocol.h"
#import "WCListDiffable-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, SnsWeAppInfo, WCActionInfo, WCAdvertiseInfo, WCAppInfo, WCContentItem, WCLocationInfo, WCMicroMerchantFeedsGroup, WCMusicInfo, WCObjectOperation, WCRecommendInfo, WCRedEnvelopesInfo, WCRedEnvelopesRewardInfo, WCStreamVideoInfo, WCVideoFlowInfo, WCWeAppInfo;

@interface WCDataItem : NSObject <WCListDiffable, NSCoding, PBCoding, PBCoderNSCodingBridge>
{
    NSString *m_cpKeyForContent;
    NSString *m_cpKeyForLikeUsers;
    _Bool m_isContentUnsafe;
    _Bool m_isLikeUsersUnsafe;
    unsigned int hash;
    _Bool likeFlag;
    _Bool isPrivate;
    _Bool isBidirectionalFan;
    _Bool shouldErrorIgnoreForSpam;
    _Bool isRichText;
    _Bool isWeiShang;
    _Bool noChange;
    _Bool _isHiddenAdvertiseActionFloatTipView;
    _Bool _isEarlierContentTipsItem;
    _Bool _canEditAfterDeleted;
    _Bool _reEditPlaceOnFirst;
    int cid;
    int type;
    int flag;
    unsigned int createtime;
    int likeCount;
    int commentCount;
    int withCount;
    int contentDescShowType;
    int contentDescScene;
    int uploadErrType;
    unsigned int extFlag;
    int realLikeCount;
    int realCommentCount;
    int selfLikeCount;
    int selfCommentCount;
    int sightFolded;
    int showFlag;
    unsigned int contentAttributeBitSetFlag;
    int _sessionActionType;
    NSString *tid;
    NSString *username;
    NSString *nickname;
    NSString *sourceUrl;
    NSString *sourceUrl2;
    NSMutableArray *likeUsers;
    NSMutableArray *commentUsers;
    NSMutableArray *withUsers;
    WCContentItem *contentObj;
    WCAppInfo *appInfo;
    NSString *publicUserName;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSString *contentDesc;
    WCActionInfo *actionInfo;
    WCMusicInfo *musicInfo;
    WCStreamVideoInfo *streamVideoInfo;
    WCRedEnvelopesInfo *redEnvelopesInfo;
    WCRedEnvelopesRewardInfo *redEnvelopesRewardInfo;
    WCWeAppInfo *weappInfo;
    NSMutableArray *sharedGroupIDs;
    NSMutableDictionary *extData;
    NSString *uploadErrMsg;
    NSString *statisticsData;
    WCLocationInfo *locationInfo;
    NSData *advertiseInfoNSCodingData;
    NSData *atFriendAdvertiseInfoNSCodingData;
    WCObjectOperation *objOperation;
    NSString *shareOriginUrl;
    NSString *shareOpenUrl;
    NSString *jsAppId;
    NSMutableDictionary *statParasDic;
    WCRecommendInfo *recommendInfo;
    NSString *statExtStr;
    NSString *canvasInfoXml;
    WCVideoFlowInfo *videoFlowInfo;
    NSArray *blackUsers;
    NSString *contentDescPattern;
    SnsWeAppInfo *snsWeAppInfo;
    NSArray *visibleUsers;
    WCAdvertiseInfo *_advertiseInfo;
    WCAdvertiseInfo *_atFriendAdvertiseInfo;
    NSString *_draftID;
    NSString *_sessionID;
    WCMicroMerchantFeedsGroup *_wsGroup;
}

+ (id)fromServerRecAdMsg:(id)arg1;
+ (void)addStatExtStr:(id)arg1 source:(unsigned int)arg2;
+ (id)fromServerRecObject:(id)arg1;
+ (id)fromSeverADObject:(id)arg1;
+ (id)fromUploadTask:(id)arg1;
+ (id)fromServerObject:(id)arg1;
+ (id)fromPBCodingBuffer:(id)arg1;
+ (id)fromNSCodingBuffer:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isWeiShang;
+ (void)PBArrayAdd_isRichText;
+ (void)PBArrayAdd_videoFlowInfo;
+ (void)PBArrayAdd_showFlag;
+ (void)PBArrayAdd_sightFolded;
+ (void)PBArrayAdd_canvasInfoXml;
+ (void)PBArrayAdd_statExtStr;
+ (void)PBArrayAdd_recommendInfo;
+ (void)PBArrayAdd_selfCommentCount;
+ (void)PBArrayAdd_selfLikeCount;
+ (void)PBArrayAdd_realCommentCount;
+ (void)PBArrayAdd_realLikeCount;
+ (void)PBArrayAdd_statParasDic;
+ (void)PBArrayAdd_jsAppId;
+ (void)PBArrayAdd_shareOpenUrl;
+ (void)PBArrayAdd_shareOriginUrl;
+ (void)PBArrayAdd_objOperation;
+ (void)PBArrayAdd_extFlag;
+ (void)PBArrayAdd_atFriendAdvertiseInfoNSCodingData;
+ (void)PBArrayAdd_advertiseInfoNSCodingData;
+ (void)PBArrayAdd_locationInfo;
+ (void)PBArrayAdd_statisticsData;
+ (void)PBArrayAdd_shouldErrorIgnoreForSpam;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_sharedGroupIDs;
+ (void)PBArrayAdd_isBidirectionalFan;
+ (void)PBArrayAdd_weappInfo;
+ (void)PBArrayAdd_redEnvelopesRewardInfo;
+ (void)PBArrayAdd_redEnvelopesInfo;
+ (void)PBArrayAdd_streamVideoInfo;
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_actionInfo;
+ (void)PBArrayAdd_contentDescScene;
+ (void)PBArrayAdd_contentDescShowType;
+ (void)PBArrayAdd_contentDesc;
+ (void)PBArrayAdd_sourceNickName;
+ (void)PBArrayAdd_sourceUserName;
+ (void)PBArrayAdd_publicUserName;
+ (void)PBArrayAdd_appInfo;
+ (void)PBArrayAdd_contentObj;
+ (void)PBArrayAdd_withUsers;
+ (void)PBArrayAdd_withCount;
+ (void)PBArrayAdd_commentUsers;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_likeUsers;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_isPrivate;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_sourceUrl2;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_createtime;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_cid;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup; // @synthesize wsGroup=_wsGroup;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int sessionActionType; // @synthesize sessionActionType=_sessionActionType;
@property(copy, nonatomic) NSString *draftID; // @synthesize draftID=_draftID;
@property(nonatomic) _Bool reEditPlaceOnFirst; // @synthesize reEditPlaceOnFirst=_reEditPlaceOnFirst;
@property(nonatomic) _Bool canEditAfterDeleted; // @synthesize canEditAfterDeleted=_canEditAfterDeleted;
@property(nonatomic) _Bool isEarlierContentTipsItem; // @synthesize isEarlierContentTipsItem=_isEarlierContentTipsItem;
@property(nonatomic) _Bool isHiddenAdvertiseActionFloatTipView; // @synthesize isHiddenAdvertiseActionFloatTipView=_isHiddenAdvertiseActionFloatTipView;
@property(retain, nonatomic) WCAdvertiseInfo *atFriendAdvertiseInfo; // @synthesize atFriendAdvertiseInfo=_atFriendAdvertiseInfo;
@property(retain, nonatomic) WCAdvertiseInfo *advertiseInfo; // @synthesize advertiseInfo=_advertiseInfo;
@property(retain, nonatomic) NSArray *visibleUsers; // @synthesize visibleUsers;
@property(retain, nonatomic) SnsWeAppInfo *snsWeAppInfo; // @synthesize snsWeAppInfo;
@property(nonatomic) _Bool isLikeUsersUnsafe; // @synthesize isLikeUsersUnsafe=m_isLikeUsersUnsafe;
@property(nonatomic) _Bool isContentUnsafe; // @synthesize isContentUnsafe=m_isContentUnsafe;
@property(retain, nonatomic) NSString *cpKeyForLikeUsers; // @synthesize cpKeyForLikeUsers=m_cpKeyForLikeUsers;
@property(retain, nonatomic) NSString *cpKeyForContent; // @synthesize cpKeyForContent=m_cpKeyForContent;
@property(nonatomic) _Bool noChange; // @synthesize noChange;
@property(retain, nonatomic) NSString *contentDescPattern; // @synthesize contentDescPattern;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(retain, nonatomic) NSArray *blackUsers; // @synthesize blackUsers;
@property(nonatomic) _Bool isWeiShang; // @synthesize isWeiShang;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText;
@property(retain, nonatomic) WCVideoFlowInfo *videoFlowInfo; // @synthesize videoFlowInfo;
@property(nonatomic) int showFlag; // @synthesize showFlag;
@property(nonatomic) int sightFolded; // @synthesize sightFolded;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr;
@property(retain, nonatomic) WCRecommendInfo *recommendInfo; // @synthesize recommendInfo;
@property(nonatomic) int selfCommentCount; // @synthesize selfCommentCount;
@property(nonatomic) int selfLikeCount; // @synthesize selfLikeCount;
@property(nonatomic) int realCommentCount; // @synthesize realCommentCount;
@property(nonatomic) int realLikeCount; // @synthesize realLikeCount;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl;
@property(retain, nonatomic) WCObjectOperation *objOperation; // @synthesize objOperation;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag;
@property(retain, nonatomic) NSData *atFriendAdvertiseInfoNSCodingData; // @synthesize atFriendAdvertiseInfoNSCodingData;
@property(retain, nonatomic) NSData *advertiseInfoNSCodingData; // @synthesize advertiseInfoNSCodingData;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(nonatomic) _Bool shouldErrorIgnoreForSpam; // @synthesize shouldErrorIgnoreForSpam;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg;
@property(nonatomic) int uploadErrType; // @synthesize uploadErrType;
@property(retain, nonatomic) NSMutableDictionary *extData; // @synthesize extData;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(nonatomic) _Bool isBidirectionalFan; // @synthesize isBidirectionalFan;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo;
@property(retain, nonatomic) WCRedEnvelopesRewardInfo *redEnvelopesRewardInfo; // @synthesize redEnvelopesRewardInfo;
@property(retain, nonatomic) WCRedEnvelopesInfo *redEnvelopesInfo; // @synthesize redEnvelopesInfo;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) NSString *publicUserName; // @synthesize publicUserName;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) WCContentItem *contentObj; // @synthesize contentObj;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers;
@property(nonatomic) int withCount; // @synthesize withCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag;
@property(retain, nonatomic) NSString *sourceUrl2; // @synthesize sourceUrl2;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(nonatomic) int flag; // @synthesize flag;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(nonatomic) int cid; // @synthesize cid;
- (void)prettyLogCommentListWithlogPrefix:(id)arg1;
- (_Bool)commentMayBeDifferentWithOther:(id)arg1;
- (void)clearExpiredDeltedByFeedOwnerComment;
- (void)mergeCommentListWithLocalFeed:(id)arg1;
- (void)mergeWithDeletedComment:(id)arg1 isDeletedByFeedOwner:(_Bool)arg2;
- (id)shortDebugString;
@property(readonly, copy) NSString *debugDescription;
- (id)debugTag;
- (_Bool)containWSGroupItem;
- (_Bool)isValidWsFeed;
- (_Bool)isFold;
- (_Bool)shouldShowSourceForAppID:(id)arg1;
- (_Bool)shouldShowShakeTvSource;
- (unsigned long long)finderShareItem:(id)arg1 dispalySourceContent:(id *)arg2 outputSourceUrl:(id *)arg3;
- (unsigned long long)getDispalySourceContent:(id *)arg1 outputSourceUrl:(id *)arg2 outputSourceBackupUrl:(id *)arg3;
- (_Bool)enableEmptyTextForward;
- (id)findMediaItemById:(id)arg1;
- (id)getNeedBatchDownloadMedias;
- (_Bool)canUseBatchThumbDownload;
- (id)getUnDownloadThumbMedias;
- (void)setAtAdvertsierInfoForUserComment:(id)arg1;
- (void)setAtAdvertsierInfo;
- (_Bool)hasPreloadVideoTask;
- (void)dumpLikeAndCommentInfo;
- (void)dumpAllCommentInDebugMode;
- (void)printSimpleLikeAndCommentInfo;
- (_Bool)isContentOriginal;
- (int)getStatExtAdType;
- (id)genAdWeAppSceneNote;
- (_Bool)isLinkAdForbidFav;
- (id)getAdUserNickName;
- (unsigned int)getAdType;
- (_Bool)isAdvertiseMediaHigherThanNickLabel;
- (_Bool)shouldShowMediaIcon;
- (_Bool)shouldGetSizeForAdvertiseMedia;
- (_Bool)isLinkAd;
- (_Bool)isFinderTopicAd;
- (_Bool)isFinderAd;
- (unsigned int)fetchRealAdCommentCount;
- (_Bool)isTwistCardAd;
- (_Bool)isSphereCardAd;
- (_Bool)hasVoteAdResultInfo;
- (_Bool)isVoteCanvasAd;
- (_Bool)isFullCardAd;
- (_Bool)isSelectCanvasAd;
- (_Bool)isCardAd;
- (_Bool)shouldReportVideoInfo;
- (_Bool)isVideoAd;
- (_Bool)isPhotoAd;
- (_Bool)isAd;
- (_Bool)isAdOrOpenIM;
- (int)getSnsABTestType;
- (void)parseContentForNetWithDataItem:(id)arg1;
- (void)parseContentForUI;
- (_Bool)checkExtDataPatternTopicFuncValid;
- (void)identifyPatternTopicFuncIfNeed;
- (void)parsePattern;
- (void)loadPattern;
- (long long)compareTime:(id)arg1;
- (_Bool)isValid;
- (void)mergeMessage:(id)arg1 needParseContent:(_Bool)arg2;
- (void)mergeMessage:(id)arg1 currentAction:(id)arg2;
- (void)mergeRewardItem:(id)arg1;
- (void)updateBySnsAdNotInterestsMsg:(id)arg1;
- (void)mergeLikeUsers:(id)arg1;
- (id)getMediaWraps;
- (_Bool)isAdvertiserFirstCommentStyle;
- (_Bool)isAtAdvertiserStyle;
- (_Bool)isAtAbleAdvertise;
- (_Bool)isShareDataCompleted;
- (_Bool)isRead;
- (void)setIsUploadFailed:(_Bool)arg1;
- (_Bool)isUploadFailed;
- (_Bool)isLikeForMe;
- (_Bool)isUploading;
- (void)afterPBCoderProcess;
- (void)beforePBCoderProcess;
- (id)toBufferWithABTest:(_Bool)arg1;
- (id)toPBCodingBuffer;
- (id)toNSCodingBuffer;
- (void)setHash:(unsigned long long)arg1;
@property(readonly) unsigned long long hash;
- (void)setSequence:(id)arg1;
- (void)setCreateTime:(unsigned int)arg1;
- (id)getDisplayCity;
- (id)sequence;
- (int)itemType;
- (id)itemID;
@property(readonly, copy) NSString *description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (long long)compareDesc:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (_Bool)hasSharedGroup;
- (id)getPBPropertyTable;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

// Remaining properties
@property(readonly) Class superclass;

@end

