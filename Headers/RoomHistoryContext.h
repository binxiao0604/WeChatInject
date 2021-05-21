//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface RoomHistoryContext : NSObject
{
    _Bool _revokeAndDeletingMemberFlag;
    _Bool _isExpiredForRevoking;
    CMessageWrap *_historyMessage;
    CMessageWrap *_downloadingHistoryRecordMsg;
    NSString *_nsEventIdForRevokeHistoryRecord;
}

+ (void)StatViewHistory:(id)arg1 HistoryMessage:(id)arg2;
+ (void)StatOperRoom:(id)arg1 HistoryMessage:(id)arg2 ClickType:(unsigned int)arg3 RemovedMembers:(id)arg4 CgiResult:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool isExpiredForRevoking; // @synthesize isExpiredForRevoking=_isExpiredForRevoking;
@property(nonatomic) _Bool revokeAndDeletingMemberFlag; // @synthesize revokeAndDeletingMemberFlag=_revokeAndDeletingMemberFlag;
@property(retain, nonatomic) NSString *nsEventIdForRevokeHistoryRecord; // @synthesize nsEventIdForRevokeHistoryRecord=_nsEventIdForRevokeHistoryRecord;
@property(retain, nonatomic) CMessageWrap *downloadingHistoryRecordMsg; // @synthesize downloadingHistoryRecordMsg=_downloadingHistoryRecordMsg;
@property(retain, nonatomic) CMessageWrap *historyMessage; // @synthesize historyMessage=_historyMessage;
- (void)reset;

@end

