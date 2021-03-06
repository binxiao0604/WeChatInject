//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderRouterHelper : NSObject
{
}

+ (void)pushToFinderPOILink:(id)arg1 poiClassifyId:(id)arg2 userName:(id)arg3 currentNavController:(id)arg4 entryScene:(unsigned long long)arg5 reportID:(id)arg6;
+ (void)jumpTo3rdAppWith:(id)arg1;
+ (_Bool)getFinderPostProcess;
+ (void)presentToPostViewControllerWith:(id)arg1 draft:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 fromVC:(id)arg4;
+ (void)jumpToNewTopicFeedListFromVC:(id)arg1 withDataItem:(id)arg2 topicInfo:(id)arg3 topicBuffer:(id)arg4;
+ (void)pushToUploadingProfileVCWithTid:(id)arg1 currentNavController:(id)arg2;
+ (void)jumpToFinderPageFromVC:(id)arg1 shouldReloadTableView:(_Bool)arg2 forceJumpTabType:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5 complete:(CDUnknownBlockType)arg6;
+ (void)jumpToHotTabTimelineFromVC:(id)arg1 lastBuffer:(id)arg2 readDataItems:(id)arg3;
+ (void)pushMentionProfileWithUsername:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 currentViewController:(id)arg4 reportScene:(unsigned long long)arg5;
+ (void)checkDataItemLiveInfo:(id)arg1 liveID:(unsigned long long)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 feedID:(id)arg2 nonceID:(id)arg3 liveID:(unsigned long long)arg4 commentScene:(unsigned long long)arg5;
+ (id)showLongVideo:(id)arg1;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 viewScene:(unsigned long long)arg4 entryScene:(unsigned long long)arg5;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 viewScene:(unsigned long long)arg3;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 scene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 encryptedVideoId:(id)arg3 authorName:(id)arg4 fromUserName:(id)arg5 toUserName:(id)arg6 scene:(unsigned long long)arg7 viewScene:(unsigned long long)arg8 entryScene:(unsigned long long)arg9;
+ (id)showLongVideoWithId:(id)arg1 videoNonceId:(id)arg2 authorName:(id)arg3 fromUserName:(id)arg4 toUserName:(id)arg5 scene:(unsigned long long)arg6 viewScene:(unsigned long long)arg7;
+ (id)showLongVideoWithFeeds:(id)arg1 index:(unsigned long long)arg2 viewScene:(unsigned long long)arg3;
+ (id)showLongVideoWithFeeds:(id)arg1 index:(unsigned long long)arg2 scene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 redPacketMessage:(id)arg2;
+ (void)showLiveRoomFromVC:(id)arg1 selectIndex:(id)arg2 dataItems:(id)arg3 entrySource:(int)arg4 commentScene:(unsigned long long)arg5;
+ (void)showLiveRoomFromFinderVC:(id)arg1 selectIndex:(id)arg2 dataItems:(id)arg3 tabType:(long long)arg4;
+ (void)showLiveRoomFromVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)showLiveRoomFromOtherVC:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3 entryScene:(unsigned long long)arg4 entryCardType:(unsigned long long)arg5;
+ (void)showLiveRoomFromFinderVC:(id)arg1 dataItem:(id)arg2;
+ (void)showLiveRoom2FromFinderVC:(id)arg1 contact:(id)arg2;
+ (void)showLiveRoomFromFinderVC:(id)arg1 contact:(id)arg2;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
+ (_Bool)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)arg1 customParam:(id)arg2;
+ (void)showCacheCommentViewControllerFromVC:(id)arg1 cacheViewController:(id)arg2 shouldEnterKeyBoard:(_Bool)arg3;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 shouldHideLocalCommentList:(_Bool)arg7 statusBarHidden:(_Bool)arg8 showTitle:(_Bool)arg9;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 shouldHideLocalCommentList:(_Bool)arg7;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6 statusBarHidden:(_Bool)arg7;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5 refCommentID:(unsigned long long)arg6;
+ (id)showCommentViewControllerFromVC:(id)arg1 contentVM:(id)arg2 commentAndLikeScene:(unsigned long long)arg3 viewScene:(unsigned long long)arg4 shouldEnterKeyBoard:(_Bool)arg5;
+ (unsigned long long)convertShareSceneToEntryScene:(unsigned long long)arg1;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2 cardType:(unsigned long long)arg3;
+ (void)updateContextIdFrom:(unsigned long long)arg1 to:(id)arg2;
+ (void)pushFinderShareDetailViewControllerWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 notGetReleatedList:(_Bool)arg4 enterScene:(unsigned long long)arg5 cardType:(unsigned long long)arg6 fromSessionId:(id)arg7 requestScene:(unsigned long long)arg8 customParam:(id)arg9 reportModel:(id)arg10 reportExtraInfo:(id)arg11;
+ (_Bool)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 notGetReleatedList:(_Bool)arg4 enterScene:(unsigned long long)arg5 customParam:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
+ (_Bool)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 notGetReleatedList:(_Bool)arg4 enterScene:(unsigned long long)arg5 customParam:(id)arg6 reportModel:(id)arg7;
+ (_Bool)pushFinderShareDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 reportModel:(id)arg6;
+ (_Bool)pushFinderShareSnsAdDetailViewControllerWithFeedID:(id)arg1 nonceID:(id)arg2 encryptedTid:(id)arg3 userName:(id)arg4 currentNavController:(id)arg5 enterScene:(unsigned long long)arg6 customParam:(id)arg7 reportModel:(id)arg8 cardType:(unsigned long long)arg9 adParamInofStr:(id)arg10;
+ (_Bool)getFunctionSpamStatusWith:(long long)arg1;
+ (_Bool)shouldPresentCommentLiseViewController:(id)arg1 isActiveInput:(_Bool)arg2 isCheckClose:(_Bool)arg3 isCommentClose:(_Bool)arg4 commentDetailVM:(id)arg5;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 isFromFriendLikeList:(_Bool)arg4 currentNavController:(id)arg5;
+ (void)pushContactInfoActionFromFriendLikeList:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 currentNavController:(id)arg4;
+ (void)pushContactInfoAction:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 currentNavController:(id)arg4;
+ (void)presentPostFullScreenPreviewVCWithContentVM:(id)arg1 postInfoModel:(id)arg2 hiddenShowHalfMediaButton:(_Bool)arg3 fromVC:(id)arg4 hiddenFullScreenToolbarView:(_Bool)arg5 isAuthorPerspective:(_Bool)arg6 commentScene:(unsigned long long)arg7;
+ (void)pushScrollActionSheetItem:(id)arg1 didSelecteItem:(id)arg2 currentNavController:(id)arg3 commentScene:(unsigned long long)arg4;
+ (void)pushFeedContentFeedback:(id)arg1 currentNavController:(id)arg2;
+ (void)presentRefuseLikeListVC:(id)arg1 currentNavController:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)presentFriendLikeListVC:(id)arg1 fromVC:(id)arg2;
+ (void)pushFriendLikeListVC:(id)arg1 reportScene:(unsigned long long)arg2 currentNavController:(id)arg3;
+ (void)pushProfileReport:(id)arg1 feedID:(id)arg2 reportScene:(unsigned long long)arg3 enterType:(unsigned int)arg4;
+ (void)pushProfileWithFeedID:(id)arg1 nonceID:(id)arg2 username:(id)arg3 currentViewController:(id)arg4 reportScene:(unsigned long long)arg5 enterType:(unsigned int)arg6;
+ (void)pushOhterLikeListForWeixinContactName:(id)arg1 navVC:(id)arg2 commentScene:(unsigned long long)arg3;
+ (void)pushOhterLikeListForWeixinContactName:(id)arg1 navVC:(id)arg2;
+ (void)pushProfileForWeixinContact:(id)arg1 navVC:(id)arg2;
+ (void)pushProfileUserName:(id)arg1 currentNavController:(id)arg2 reportScene:(unsigned long long)arg3 enterType:(unsigned int)arg4 params:(id)arg5;
+ (void)pushAuthorProfileWithContact:(id)arg1 currentNavController:(id)arg2 prepareResponse:(id)arg3 jumpDraftTab:(_Bool)arg4;
+ (void)pushAuthorSelfProfileFromeMineTabEntrance:(id)arg1;
+ (void)pushPOIInfoAction:(id)arg1 userName:(id)arg2 currentNavController:(id)arg3;
+ (void)pushPOIURLAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushPOIAction:(id)arg1 currentNavController:(id)arg2;
+ (void)pushFinderLiveRules:(id)arg1 currentNavController:(id)arg2;
+ (void)pushAuthorDataCenterPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushRecommentPage:(id)arg1 currentNavController:(id)arg2;
+ (void)pushExtReadingAction:(id)arg1 feedID:(id)arg2 currentNavController:(id)arg3 commentScence:(unsigned long long)arg4;
+ (void)pushFinderSupportDebug:(id)arg1 currentNavController:(id)arg2;
+ (void)pushColumnAction:(id)arg1 sharedItem:(id)arg2 columnTitle:(id)arg3 currentNavController:(id)arg4 shareScene:(unsigned long long)arg5;
+ (void)pushTopicWithParams:(id)arg1;
+ (void)pushToMMWeb:(id)arg1 currentNavController:(id)arg2;

@end

