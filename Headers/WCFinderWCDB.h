//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;
@protocol OS_dispatch_queue;

@interface WCFinderWCDB : NSObject
{
    WCTDatabase *_dataBase;
    WCTTable *_contactTable;
    WCTTable *_finderTable;
    WCTTable *_userStickyPageTable;
    WCTTable *_mentionTable;
    WCTTable *_streamFirstPageTable;
    WCTTable *_followingTable;
    WCTTable *_likeFirstPageTable;
    WCTTable *_mentionedFirstPageTable;
    WCTTable *_searchHistoryTable;
    WCTTable *_postingCommentTable;
    WCTTable *_dataItemRecommendTable;
    WCTTable *_historyFirstPageTable;
    WCTTable *_contactExtInfoTable;
    WCTTable *_feedPreloadObjectTable;
    WCTTable *_feedSessionTable;
    WCTTable *_refuseLikeListTable;
    WCTTable *_shieldLikeListTable;
    WCTTable *_feedVideoPreloadTable;
    WCTTable *_foldFeedInfoTable;
    WCTTable *_timelineTabFeedInfo;
    WCTTable *_likeBufferInfoTable;
    WCTTable *_finderAttachmentListTable;
    WCTTable *_finderParseContentInfoTable;
    WCTTable *_finderMegaVideoTable;
    WCTTable *_finderMegaVideoFirstPageCacheTable;
    WCTTable *_finderMegaVideoBulletCommentTable;
    WCTTable *_finderEventInfoTable;
    WCTTable *_finderBindEventInfoTable;
    WCTDatabase *_finderAuthorDataBase;
    WCTTable *_blackListTable;
    WCTTable *_fansTable;
    WCTTable *_feedTopicInfoTable;
    WCTTable *_recommendCategoryStringTable;
    WCTTable *_finderAuthorMentionTable;
    WCTTable *_authorFeedLikeList;
    WCTTable *_finderShareLiveInfoTable;
    WCTTable *_finderWechatExtDatasTable;
    WCTTable *_finderFeedDraftTable;
    NSObject<OS_dispatch_queue> *_cleanQueue;
}

+ (void)destoryAllDBFileByReInit;
+ (_Bool)deleteDBFileWithPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cleanQueue; // @synthesize cleanQueue=_cleanQueue;
@property(retain, nonatomic) WCTTable *finderFeedDraftTable; // @synthesize finderFeedDraftTable=_finderFeedDraftTable;
@property(retain, nonatomic) WCTTable *finderWechatExtDatasTable; // @synthesize finderWechatExtDatasTable=_finderWechatExtDatasTable;
@property(retain, nonatomic) WCTTable *finderShareLiveInfoTable; // @synthesize finderShareLiveInfoTable=_finderShareLiveInfoTable;
@property(retain, nonatomic) WCTTable *authorFeedLikeList; // @synthesize authorFeedLikeList=_authorFeedLikeList;
@property(retain, nonatomic) WCTTable *finderAuthorMentionTable; // @synthesize finderAuthorMentionTable=_finderAuthorMentionTable;
@property(retain, nonatomic) WCTTable *recommendCategoryStringTable; // @synthesize recommendCategoryStringTable=_recommendCategoryStringTable;
@property(retain, nonatomic) WCTTable *feedTopicInfoTable; // @synthesize feedTopicInfoTable=_feedTopicInfoTable;
@property(retain, nonatomic) WCTTable *fansTable; // @synthesize fansTable=_fansTable;
@property(retain, nonatomic) WCTTable *blackListTable; // @synthesize blackListTable=_blackListTable;
@property(retain, nonatomic) WCTDatabase *finderAuthorDataBase; // @synthesize finderAuthorDataBase=_finderAuthorDataBase;
@property(retain, nonatomic) WCTTable *finderBindEventInfoTable; // @synthesize finderBindEventInfoTable=_finderBindEventInfoTable;
@property(retain, nonatomic) WCTTable *finderEventInfoTable; // @synthesize finderEventInfoTable=_finderEventInfoTable;
@property(retain, nonatomic) WCTTable *finderMegaVideoBulletCommentTable; // @synthesize finderMegaVideoBulletCommentTable=_finderMegaVideoBulletCommentTable;
@property(retain, nonatomic) WCTTable *finderMegaVideoFirstPageCacheTable; // @synthesize finderMegaVideoFirstPageCacheTable=_finderMegaVideoFirstPageCacheTable;
@property(retain, nonatomic) WCTTable *finderMegaVideoTable; // @synthesize finderMegaVideoTable=_finderMegaVideoTable;
@property(retain, nonatomic) WCTTable *finderParseContentInfoTable; // @synthesize finderParseContentInfoTable=_finderParseContentInfoTable;
@property(retain, nonatomic) WCTTable *finderAttachmentListTable; // @synthesize finderAttachmentListTable=_finderAttachmentListTable;
@property(retain, nonatomic) WCTTable *likeBufferInfoTable; // @synthesize likeBufferInfoTable=_likeBufferInfoTable;
@property(retain, nonatomic) WCTTable *timelineTabFeedInfo; // @synthesize timelineTabFeedInfo=_timelineTabFeedInfo;
@property(retain, nonatomic) WCTTable *foldFeedInfoTable; // @synthesize foldFeedInfoTable=_foldFeedInfoTable;
@property(retain, nonatomic) WCTTable *feedVideoPreloadTable; // @synthesize feedVideoPreloadTable=_feedVideoPreloadTable;
@property(retain, nonatomic) WCTTable *shieldLikeListTable; // @synthesize shieldLikeListTable=_shieldLikeListTable;
@property(retain, nonatomic) WCTTable *refuseLikeListTable; // @synthesize refuseLikeListTable=_refuseLikeListTable;
@property(retain, nonatomic) WCTTable *feedSessionTable; // @synthesize feedSessionTable=_feedSessionTable;
@property(retain, nonatomic) WCTTable *feedPreloadObjectTable; // @synthesize feedPreloadObjectTable=_feedPreloadObjectTable;
@property(retain, nonatomic) WCTTable *contactExtInfoTable; // @synthesize contactExtInfoTable=_contactExtInfoTable;
@property(retain, nonatomic) WCTTable *historyFirstPageTable; // @synthesize historyFirstPageTable=_historyFirstPageTable;
@property(retain, nonatomic) WCTTable *dataItemRecommendTable; // @synthesize dataItemRecommendTable=_dataItemRecommendTable;
@property(retain, nonatomic) WCTTable *postingCommentTable; // @synthesize postingCommentTable=_postingCommentTable;
@property(retain, nonatomic) WCTTable *searchHistoryTable; // @synthesize searchHistoryTable=_searchHistoryTable;
@property(retain, nonatomic) WCTTable *mentionedFirstPageTable; // @synthesize mentionedFirstPageTable=_mentionedFirstPageTable;
@property(retain, nonatomic) WCTTable *likeFirstPageTable; // @synthesize likeFirstPageTable=_likeFirstPageTable;
@property(retain, nonatomic) WCTTable *followingTable; // @synthesize followingTable=_followingTable;
@property(retain, nonatomic) WCTTable *streamFirstPageTable; // @synthesize streamFirstPageTable=_streamFirstPageTable;
@property(retain, nonatomic) WCTTable *mentionTable; // @synthesize mentionTable=_mentionTable;
@property(retain, nonatomic) WCTTable *userStickyPageTable; // @synthesize userStickyPageTable=_userStickyPageTable;
@property(retain, nonatomic) WCTTable *finderTable; // @synthesize finderTable=_finderTable;
@property(retain, nonatomic) WCTTable *contactTable; // @synthesize contactTable=_contactTable;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
- (id)wechatContactExtDataForName:(id)arg1;
- (void)updateWechatContactExtDatasForName:(id)arg1 ensureExists:(_Bool)arg2 traceInfo:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
- (_Bool)feedEventInfoIllegalWithEventID:(unsigned long long)arg1;
- (id)getFeedBindEventInfoWithEventID:(unsigned long long)arg1;
- (_Bool)cleanExpiredBindEventInfo;
- (_Bool)addFeedBindEventInfoWithDataArray:(id)arg1;
- (id)getEventInfoWithUsername:(id)arg1;
- (_Bool)addEventInfoWithModel:(id)arg1;
- (void)mergeDataItemExtraInfoWithDataArray:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)cleanParseContentModelWithDataItems:(id)arg1;
- (id)getParseContentModelWithTid:(id)arg1;
- (_Bool)addParseContentInfoWithTid:(id)arg1 parseContentModel:(id)arg2;
- (id)getShareLiveInfoWithLiveId:(id)arg1;
- (id)getShareLiveInfoWithTid:(id)arg1 liveId:(id)arg2;
- (unsigned long long)getLiveStatusWithTid:(id)arg1 liveId:(unsigned long long)arg2;
- (_Bool)updateShareLiveInfoWithArray:(id)arg1;
- (_Bool)updateShareLiveInfo:(id)arg1;
- (_Bool)updateShareLiveInfoWithDataItemArray:(id)arg1;
- (_Bool)updateShareLiveInfoWithDataItem:(id)arg1;
- (_Bool)updateLiveInfoWithDataItem:(id)arg1;
- (void)mergeAttachmentTableIntoDataItemWithArray:(id)arg1;
- (void)updateFinderMegaVideoBulletCommentCacheTime:(id)arg1;
- (id)getLocalFinderMegaVideoBulletCommentWithVideoId:(id)arg1;
- (_Bool)deleteFinderMegavideoBulletCommentWithVideoId:(id)arg1 commentId:(id)arg2;
- (_Bool)addFinderMegavideoBulletComment:(id)arg1;
- (id)getAllUploadingFinderMegaVideos;
- (void)addFinderMegaVideoContact:(id)arg1;
- (void)updateFinderMegaVideoCacheTime:(id)arg1;
- (id)getLocalFinderMegaVideosWithVideoIds:(id)arg1;
- (id)getLocalFirstPageCacheFinderMegaVideosWithUsername:(id)arg1 pageType:(unsigned long long)arg2;
- (_Bool)updateFinderMegaVideoFirstPageCacheWithUsername:(id)arg1 pageType:(unsigned long long)arg2 megaVideos:(id)arg3;
- (id)getLocalFinderMegaVideoWithDataItemTid:(id)arg1;
- (id)getLocalFinderMegaVideoWithVideoId:(id)arg1;
- (_Bool)updateFinderMegaVideo:(id)arg1 isPrivate:(_Bool)arg2;
- (_Bool)updateFinderMegaVideo:(id)arg1 isFav:(_Bool)arg2;
- (_Bool)updateFinderMegaVideo:(id)arg1 isLike:(_Bool)arg2;
- (_Bool)updateFinderMegaVideo:(id)arg1;
- (_Bool)deleteFinderMegaVideoWithDataItemTid:(id)arg1;
- (_Bool)deleteFinderMegaVideoWithVideoId:(id)arg1;
- (_Bool)addFinderMegaVideo:(id)arg1;
- (_Bool)addFinderMegaVideoWithArray:(id)arg1;
- (_Bool)addFinderMegaVideoWithAttachmentList:(id)arg1;
- (id)getAttachmentListDictWithDataItemArray:(id)arg1;
- (id)attachmentListWithFinderDataItemTid:(id)arg1;
- (void)updateFinderAttachmentListCacheTime:(id)arg1;
- (_Bool)updateFinderAttachmentList:(id)arg1;
- (_Bool)deleteFinderAttachmentListWithVideoId:(id)arg1;
- (_Bool)addFinderAttachmentList:(id)arg1;
- (_Bool)addFinderAttachmentListArray:(id)arg1;
- (void)addFinderAttachmentListWithDataItemArray:(id)arg1;
- (_Bool)cleanLikeBufferWithDataItems:(id)arg1;
- (id)getLikeBufferWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (void)updateLikeBufferIncFriendLikeCount:(long long)arg1 tid:(id)arg2;
- (id)getLikeBufferModelWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)updateLikeBufferWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (id)getHistoryCachePage:(long long)arg1;
- (_Bool)deleteTimelineDataItemWithTabType:(long long)arg1;
- (id)getLocalStreamFirstPage:(long long)arg1 feedType:(unsigned long long)arg2;
- (_Bool)updateTimelineCacheWithTabType:(unsigned long long)arg1 dataArray:(id)arg2 feedType:(unsigned long long)arg3;
- (_Bool)cleanAllFoldInfo;
- (_Bool)cleanFoldInfoWithDataItems:(id)arg1;
- (id)getFeedLayoutWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getFoldInfoWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)updateFinderFoldInfoWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPreloadInfoWithTid:(id)arg1;
- (_Bool)deleteVideoPreloadInfoWithTid:(id)arg1;
- (_Bool)updateVideoPreloadInfoWith:(id)arg1;
- (id)getLikeListObjectWithTid:(id)arg1;
- (_Bool)updateFeedLikeListWithTid:(id)arg1 likeInfoFirstPage:(id)arg2;
- (id)getRecommendCategoryArrayWithLimit:(unsigned long long)arg1;
- (_Bool)cleanRecommendTopicTable;
- (_Bool)insertRecommendCategoryArray:(id)arg1;
- (id)likeInfosReduplictionRemoving:(id)arg1;
- (_Bool)changeFeedFriendsLikeInfoLikeStatusWithTid:(id)arg1 likeID:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
- (_Bool)updateFeedFriendsLikeInfoListWithTid:(id)arg1 likeInfoArray:(id)arg2 isFirstPage:(_Bool)arg3;
- (id)getFeedTopicInfoWithTopicID:(id)arg1;
- (_Bool)changeFeedTopicInfoFollowStatus:(id)arg1 followStatus:(_Bool)arg2;
- (_Bool)addFeedTopicInfo:(id)arg1;
- (_Bool)deleteFeedSessionBufferWithDataItems:(id)arg1;
- (_Bool)addSessionBufferArray:(id)arg1;
- (id)getSessionBufferWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)addSessionBufferWithTid:(id)arg1 scene:(unsigned long long)arg2 sessionString:(id)arg3;
- (_Bool)deleteFeedPreloadInfoWithDataItems:(id)arg1;
- (id)getFeedPreloadObjectInfoWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)addFeedPreloadInfoArray:(id)arg1;
- (_Bool)updateContextExtInfoWithNotifceInfo:(id)arg1 username:(id)arg2;
- (_Bool)updateContactWxAppStore:(id)arg1 username:(id)arg2;
- (_Bool)removeEventInfoFromContactExtInfoWithUsername:(id)arg1;
- (id)updateContactExtInfoForUser:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (_Bool)updateContactExtInfoUsername:(id)arg1 fansCount:(unsigned long long)arg2 friendFollowCount:(unsigned long long)arg3;
- (id)getContactExtInfoWithFinderUsername:(id)arg1;
- (_Bool)addContactExtInfo:(id)arg1;
- (_Bool)deleteHistoryFirstPage;
- (_Bool)refreshHistoryFirstPageObjects:(id)arg1;
- (_Bool)deleteRecommendInfoWithDataItems:(id)arg1;
- (id)getRecommendInfoWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)addRecommendWithDataItemArray:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)addRecommendWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)refreshPostingCommentWithTid:(id)arg1 byFetchComments:(id)arg2;
- (id)getPostingFailCommentWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (id)getPostingCommentFailMergeOfTid;
- (unsigned long long)getPostingCommentsTidCount;
- (unsigned long long)getPostingCommentsCountOfTid:(id)arg1;
- (id)getPostingSubCommentsWithTid:(id)arg1;
- (id)getPostingRootCommentsWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)deleteObjectFailCommentWithTid:(id)arg1;
- (_Bool)markObjectFailSubCommentsReadWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (_Bool)markObjectFailCommentsReadWithTid:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)hasPostingFailComment;
- (id)getPostingFailComment;
- (_Bool)markPostingCommentFail:(id)arg1;
- (_Bool)postingCommentSuccessful:(id)arg1;
- (_Bool)deleteAllPostingSubCommentWithComment:(id)arg1;
- (_Bool)deletePostingComment:(id)arg1;
- (_Bool)addPostingComment:(id)arg1;
- (_Bool)deleteSearchRecord:(id)arg1;
- (_Bool)deleteAllSearchRecord;
- (id)getLocalSearchHistory;
- (_Bool)addSearchContent:(id)arg1;
- (_Bool)deleteStreamFirstPage;
- (void)_cleanExpiredFinderShareLiveInfo;
- (void)cleanExpiredFinderShareLiveInfo;
- (void)_cleanExpiredFinderMegaVideos;
- (void)cleanExpiredFinderMegaVideos;
- (void)_cleanExpiredFinderAttachments;
- (void)cleanExpiredFinderAttachments;
- (void)_cleanExpiredSessionBuffer;
- (void)cleanExpiredSessionBuffer;
- (void)cleanExpiredSearchHistory;
- (void)_cleanExpiredSearchHistory;
- (void)cleanExpiredContacts;
- (void)_cleanExpiredContacts;
- (void)cleanExpiredDataItems;
- (void)_cleanExpiredDataItems;
- (void)updateContactCacheTime:(id)arg1;
- (void)updateDataItemsCacheTime:(id)arg1;
- (_Bool)refreshMentionedFirstpageObjects:(id)arg1;
- (id)getLocalMentionedListWithLastDisplayId:(id)arg1;
- (_Bool)refreshLikeFirstPageObjects:(id)arg1;
- (id)getLocalLikeListWithLastDisplayId:(id)arg1;
- (id)getAllDataItemInUploadQueue;
- (id)getPostUploadingDataItemBeforeCreateTime:(double)arg1 afterCreateTime:(double)arg2;
- (_Bool)makeUploadingFinderDataItemFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)cleanAllMention;
- (unsigned long long)getHalfMentionIDWithType:(unsigned long long)arg1;
- (_Bool)deleteFinderMention:(id)arg1;
- (id)getWechatMentionWithmaxMentionID:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (id)getSystemMentionWithMaxMentionID:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (id)getAuthorNotifyMentionWithSelectType:(unsigned long long)arg1 maxMentionID:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (id)getMentionWithType:(long long)arg1 scene:(unsigned long long)arg2 maxMentionID:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (id)getLastestMentionWithType:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (id)getMentionWithType:(long long)arg1 scene:(unsigned long long)arg2;
- (_Bool)updateFollowApplyMentionWithType:(unsigned long long)arg1 andFollowId:(unsigned long long)arg2;
- (_Bool)deleteFinderMentionsWithMentionType:(unsigned long long)arg1;
- (_Bool)deleteDuplicatedFollowAcceptedMentions:(id)arg1;
- (_Bool)deleteDuplicatedFollowApplyMentions:(id)arg1;
- (_Bool)deleteFinderMentions:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)addFinderMentions:(id)arg1 scene:(unsigned long long)arg2;
- (id)getMentionTableWithScene:(unsigned long long)arg1;
- (id)userPageFromLocalWithUsername:(id)arg1 needMergeUpload:(_Bool)arg2 maxTid:(id)arg3 limit:(unsigned long long)arg4;
- (id)getUserStickFeedsWithUsername:(id)arg1;
- (_Bool)updateUserStickyPage:(id)arg1 firstPageArray:(id)arg2;
- (_Bool)deleteShieldLikeContact:(id)arg1;
- (_Bool)addShieldLikeContact:(id)arg1;
- (id)getShieldLikeContactList;
- (_Bool)updateFirstShieldLikeListContactPage:(id)arg1;
- (_Bool)updateShieldLikeContact:(id)arg1;
- (id)getShieldLikeContactWithUsername:(id)arg1;
- (_Bool)deleteRefuseLikeContact:(id)arg1;
- (_Bool)addRefuseLikeContact:(id)arg1;
- (id)getRefuseLikeContactList;
- (_Bool)updateFirstRefuseLikeListContactPage:(id)arg1;
- (_Bool)updateRefuseLikeContact:(id)arg1;
- (id)getRefuseLikeContactWithUsername:(id)arg1;
- (id)getBlackContactList;
- (_Bool)updateFirstBlackListContactPage:(id)arg1;
- (id)getFansContactList;
- (_Bool)updateFirstFollowedContactPage:(id)arg1;
- (id)contactWithUserNameList:(id)arg1;
- (_Bool)updateContactSpamStatus:(id)arg1;
- (_Bool)changeContactFollowingStatusWithContact:(id)arg1;
- (_Bool)updateContactAuthInfo:(id)arg1 username:(id)arg2;
- (_Bool)addContacts:(id)arg1;
- (_Bool)reloadContactListWithContacts:(id)arg1;
- (_Bool)updateFirstFollowingContactPageWithContacts:(id)arg1;
- (id)getFollowingContactsWithoutUsename:(id)arg1;
- (_Bool)updateContactFollowingWithUsername:(id)arg1 followState:(unsigned long long)arg2;
- (id)contactWithUsername:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)addStrangerContactArray:(id)arg1;
- (_Bool)addStrangerContact:(id)arg1;
- (_Bool)totalReplaceContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)updateDataItemLiveInfoWithTid:(id)arg1 liveInfo:(id)arg2;
- (_Bool)updateDataItemLivingStatusWithTid:(id)arg1 livingStatus:(unsigned long long)arg2;
- (_Bool)modifyCommentWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)changeCommentLikeStatusWithTid:(id)arg1 commentID:(unsigned long long)arg2 likeStatus:(_Bool)arg3 isAuthor:(_Bool)arg4;
- (_Bool)addDataItemPostSubCommentWithCommentFail:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItemTid:(id)arg3;
- (_Bool)addDataItemPostSubCommentWithCommentSuccessful:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItemTid:(id)arg3;
- (_Bool)addDataItemPostSubCommentSuccessWithComment:(id)arg1 dataItemTid:(id)arg2;
- (_Bool)deleteSubCommentWithComment:(id)arg1 rootCommentID:(unsigned long long)arg2 dataItem:(id)arg3;
- (_Bool)mergeDataItemSubCommentPageWithTid:(id)arg1 rootCommentID:(unsigned long long)arg2 subCommentArray:(id)arg3 addToBottom:(_Bool)arg4;
- (_Bool)deleteRootCommentWithComment:(unsigned long long)arg1 dataItemTid:(id)arg2;
- (_Bool)deleteCommentWithComment:(id)arg1 dataItemTid:(id)arg2;
- (_Bool)postDataItemCommentFailWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)updateDataItemHotCommentList:(id)arg1 tid:(id)arg2;
- (_Bool)postDataItemCommentSuccessWithComment:(id)arg1 tid:(id)arg2;
- (_Bool)addDataItemPostCommentWithComment:(id)arg1 dataItemTid:(id)arg2;
- (id)commentReduplictionRemoving:(id)arg1;
- (_Bool)mergeDataItemFirstCommentPageWithTid:(id)arg1 commentArray:(id)arg2 isFirstPage:(_Bool)arg3;
- (_Bool)updateDataItemAllLikeCountWithTid:(id)arg1 likeCount:(long long)arg2;
- (_Bool)changeDataItemCloseCommentFlagWithTid:(id)arg1 closeCommentFlag:(_Bool)arg2;
- (_Bool)markDataItemWasDeletedWithTid:(id)arg1;
- (_Bool)deleteDataItemInTidList:(id)arg1;
- (_Bool)deleteAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (id)getAllDataItemWithUsername:(id)arg1 beforeMaxTid:(id)arg2;
- (_Bool)deleteAllDataItemWithUsername:(id)arg1 betweenMinTid:(id)arg2 andMaxTid:(id)arg3;
- (id)getDataItemsWithUsername:(id)arg1 beforeMinTid:(id)arg2 afterMaxTid:(id)arg3;
- (_Bool)cleanAuthorDataItemStickyStateWithUsername:(id)arg1;
- (id)getLocalDataItemsWithTidArray:(id)arg1;
- (id)getLocalDataItemWtihTid:(id)arg1;
- (_Bool)updateTimelineDataItem:(id)arg1 ifFav:(_Bool)arg2;
- (_Bool)updateDataItemStickyTopFlag:(id)arg1;
- (_Bool)updateDataItemPrivateFlag:(id)arg1;
- (_Bool)updatePrivateFlag:(_Bool)arg1 forDataItemId:(id)arg2;
- (_Bool)updateTimelineDataItem:(id)arg1 likeFlag:(long long)arg2;
- (id)currentMaxTid;
- (_Bool)updateTimelineDataItem:(id)arg1;
- (_Bool)deleteTimelineDataItem:(id)arg1;
- (_Bool)addTimelineDataItemWithDataItemArray:(id)arg1;
- (_Bool)addFinderDataItem:(id)arg1;
- (id)timelineDataItemMaxTid:(unsigned long long)arg1 limitCount:(unsigned long long)arg2 tabType:(long long)arg3;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (id)hashStringWithUsername:(id)arg1;
- (void)createFinderFeedDraftTable;
- (void)createFinderWechatExtDatasTable;
- (_Bool)createFinderShareLiveInfoTable;
- (id)createAuthorTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)createFinderLikeList;
- (_Bool)createFinderMentionTable;
- (_Bool)createBlackListTable;
- (_Bool)createFansListTable;
- (id)createTableWithTableName:(id)arg1 objectClass:(Class)arg2;
- (_Bool)createFeedEventInfoTable;
- (_Bool)createFinderEventInfoTable;
- (_Bool)createFinderFeedParseContentInfoTable;
- (_Bool)createFinderMegaVideoBulletCommentTable;
- (_Bool)createFinderMegaVideoFirstPageCacheTable;
- (_Bool)createFinderMegaVideoTable;
- (_Bool)createFinderAttachmentListTable;
- (_Bool)createLikeBufferTable;
- (_Bool)createTimelineTabFeedInfoTable;
- (_Bool)createFeedFoldInfoTable;
- (_Bool)createFeedPreloadVideoInfoTable;
- (_Bool)createFeedTopicInfoTable;
- (_Bool)createWeChatShieldLikeTable;
- (_Bool)createWeChatRefuseLikeTable;
- (_Bool)createFeedSessionTable;
- (_Bool)createFeedPreloadInfoTable;
- (_Bool)createContactExtInfoTable;
- (_Bool)createFirstHistoryPageTable;
- (_Bool)createFollowingListTable;
- (_Bool)createDataRecommendTable;
- (_Bool)createPostingCommentTable;
- (_Bool)createSearchHistoryTable;
- (_Bool)createrecommendCategoryStringTable;
- (_Bool)createMentionedFirstPageTable;
- (_Bool)createLikeFirstPageTable;
- (_Bool)createStreamFirstPageTable;
- (_Bool)createMentionTable;
- (_Bool)createuserStickyPageTable;
- (_Bool)createFinderTable;
- (_Bool)createFinderContactTable;
- (void)dealloc;
- (void)closeDB;
- (void)createAuthorTable;
- (void)createWechatTable;
- (void)createTable;
- (void)deleteAuthorOldMention;
- (void)setupFinderDataBase;
- (_Bool)setupDataBase;
- (_Bool)setUpFinderAuthorDataBase;
- (_Bool)setupWechatDataBase;
- (_Bool)moveFinderDBFileToWechatPath;
- (id)init;
- (_Bool)deleteDraft:(id)arg1;
- (id)checkExistsDrafts:(id)arg1;
- (id)getFeedDraftForId:(id)arg1;
- (void)saveDraftList:(id)arg1;
- (id)fetchAllDraft;

@end

