//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSessionInfo.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface EnterpriseSessionInfo : MMBaseSessionInfo <WCTTableCoding>
{
    unsigned int atMeCount;
    unsigned int newUnreadCount;
    unsigned int newAtMeCount;
    unsigned int sessionTopTime;
    unsigned int lastExposeTime;
    unsigned int chatType;
    unsigned int _atAllCount;
    unsigned int _newAtAllCount;
    NSString *_brandUserName;
}

+ (id)sessionInfoWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;
+ (void)__wcdb_column_constraint_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)newAtAllCount;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)atAllCount;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastExposeTime;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sessionTopTime;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)newAtMeCount;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)newUnreadCount;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)atMeCount;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)unreadCount;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sessionId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(nonatomic) unsigned int newAtAllCount; // @synthesize newAtAllCount=_newAtAllCount;
@property(nonatomic) unsigned int atAllCount; // @synthesize atAllCount=_atAllCount;
@property(nonatomic) unsigned int chatType; // @synthesize chatType;
@property(nonatomic) unsigned int lastExposeTime; // @synthesize lastExposeTime;
- (void)setSessionTopTime:(unsigned int)arg1;
- (unsigned int)sessionTopTime;
@property(nonatomic) unsigned int newAtMeCount; // @synthesize newAtMeCount;
@property(nonatomic) unsigned int newUnreadCount; // @synthesize newUnreadCount;
@property(nonatomic) unsigned int atMeCount; // @synthesize atMeCount;
- (void)clearNewAtAllCount;
- (void)incNewAtAllCount;
- (void)clearAtAllCount;
- (void)incAtAllCount;
- (void)clearNewAtMeCount;
- (void)incNewAtMeCount;
- (void)clearAtMeCount;
- (void)incAtMeCount;
- (void)clearNewUnreadCount;
- (void)incNewUnreadCount;
- (void)clearUnreadCount;
- (void)incUnreadCount;
- (_Bool)isSessionTop;
- (unsigned int)GetUnReadCount:(id)arg1;
- (id)genLastMessage;
- (id)genContact;
- (void)fixCount;
- (void)checkExposeTime:(unsigned int)arg1;
- (void)updateNewUnreadCount;
- (void)updateExposeTime;
- (void)updateUnreadCount;
- (void)updateLastMessage;
- (_Bool)updateContactAndTopTime;
- (void)updateContactAndDraft;
- (void)updateContact;
- (id)contact;
- (id)lastMessage;
- (id)initWithContact:(id)arg1 lastMessage:(id)arg2 Brand:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

