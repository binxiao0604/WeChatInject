//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWCMyStoryUserStateUtilExt-Protocol.h"

@class MMTimer, NSArray, NSMutableDictionary, NSString;

@interface WCStoryTimelineDataVM : NSObject <IWCMyStoryUserStateUtilExt>
{
    _Bool _hasReloadDataItem;
    NSArray *_allContactArray;
    NSMutableDictionary *_userContactDict;
    NSMutableDictionary *_chatRoomMyContactHasStoryDict;
    NSArray *_unreadContactUserNameArray;
    NSArray *_timestampUnreadNameArray;
    NSArray *_timestampReadNameArray;
    MMTimer *_reloadNotifyThrottle;
    unsigned long long _lastReadMaxTid;
}

+ (id)timelineStoryDataVM;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReadMaxTid; // @synthesize lastReadMaxTid=_lastReadMaxTid;
@property(nonatomic) _Bool hasReloadDataItem; // @synthesize hasReloadDataItem=_hasReloadDataItem;
@property(retain, nonatomic) MMTimer *reloadNotifyThrottle; // @synthesize reloadNotifyThrottle=_reloadNotifyThrottle;
@property(copy, nonatomic) NSArray *timestampReadNameArray; // @synthesize timestampReadNameArray=_timestampReadNameArray;
@property(copy, nonatomic) NSArray *timestampUnreadNameArray; // @synthesize timestampUnreadNameArray=_timestampUnreadNameArray;
@property(retain, nonatomic) NSArray *unreadContactUserNameArray; // @synthesize unreadContactUserNameArray=_unreadContactUserNameArray;
@property(retain, nonatomic) NSMutableDictionary *chatRoomMyContactHasStoryDict; // @synthesize chatRoomMyContactHasStoryDict=_chatRoomMyContactHasStoryDict;
@property(retain, nonatomic) NSMutableDictionary *userContactDict; // @synthesize userContactDict=_userContactDict;
@property(copy, nonatomic) NSArray *allContactArray; // @synthesize allContactArray=_allContactArray;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)reloadDataItem:(id)arg1 unreadMessageUnitArray:(id)arg2;
- (id)getAllUnreadCommentMessage;
- (id)createDataUnitWithContact:(id)arg1;
- (id)createDataUnitWithContact:(id)arg1 dataItemArray:(id)arg2;
- (id)createTimelineShowUnreadUnitArrayWithUserDataDict:(id)arg1;
- (id)getContactStoryDataFromDBWithContactArray:(id)arg1;
- (id)getTimelineShowUnreadStoryUnitArray;
- (id)getTimelineCellModelForUnitArray:(id)arg1;
- (id)getMessageCellModelForUnitArray:(id)arg1;
- (id)getTimelineDataUnit;
- (unsigned long long)getTimeStampUnreadStoryCount;
- (void)dealloc;
- (id)initDataWithContactArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
