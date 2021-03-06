//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCStoryFacadeExt-Protocol.h"

@class MMUIViewController, NSArray, NSMutableSet, NSString, WCStoryNotifyHandler;

@interface WCMyStoryUserStateUtil : MMUserService <WCStoryFacadeExt, MMServiceProtocol, MMKernelExt>
{
    _Bool _waitingForShowPreview;
    NSString *_selectedMember;
    MMUIViewController *_parentVC;
    NSArray *_currentUnReadStoryArray;
    WCStoryNotifyHandler *_syncNotifyHandler;
    NSMutableSet *_unreadStoryUsers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *unreadStoryUsers; // @synthesize unreadStoryUsers=_unreadStoryUsers;
@property(retain, nonatomic) WCStoryNotifyHandler *syncNotifyHandler; // @synthesize syncNotifyHandler=_syncNotifyHandler;
@property(nonatomic) _Bool waitingForShowPreview; // @synthesize waitingForShowPreview=_waitingForShowPreview;
@property(copy, nonatomic) NSArray *currentUnReadStoryArray; // @synthesize currentUnReadStoryArray=_currentUnReadStoryArray;
@property(nonatomic) __weak MMUIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSString *selectedMember; // @synthesize selectedMember=_selectedMember;
- (int)getTimeZoneHourOffset;
- (void)reloadUnreadCacheForUser:(id)arg1;
- (void)loadUnreadStoryUsersCache;
- (_Bool)isUserNameInBlackList:(id)arg1;
- (_Bool)isContactInBlackList:(id)arg1;
- (void)onCleanUnReadStorys:(id)arg1;
- (void)fetchNewStoryBubble;
- (void)fetchNewStoryComment;
- (void)notifyCheckSelector;
- (void)markUserStoryHasRead:(id)arg1 maxTid:(id)arg2;
- (void)showStoryMovieWithUserName:(id)arg1 previewReportObj:(id)arg2 inViewController:(id)arg3;
- (_Bool)checkUserInUnReadStoryListWithUserNameInCache:(id)arg1;
- (_Bool)checkUserInUnReadStoryListWithUserName:(id)arg1;
- (void)notifyUserDeleteStoryVideoWithUserName:(id)arg1;
- (void)notifyClearSyncWithUserName:(id)arg1;
- (void)notifyRecoverStoryWithUsername:(id)arg1;
- (void)notifyAddSyncWithUsername:(id)arg1;
- (void)refreshUnReadStoryWithAddArray:(id)arg1 deleteArray:(id)arg2;
- (void)onServiceTerminate;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

