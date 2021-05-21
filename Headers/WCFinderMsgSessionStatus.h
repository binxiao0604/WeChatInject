//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCFinderMsgSessionStatus : NSObject <WCTTableCoding>
{
    _Bool _rejectMsgStatus;
    _Bool _isInNormalSession;
    _Bool _canSendAttachment;
    unsigned int _myAccountType;
    NSString *_sessionId;
    NSString *_realChatUserName;
}

+ (void)__wcdb_column_constraint_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)canSendAttachment;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isInNormalSession;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rejectMsgStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)realChatUserName;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)myAccountType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sessionId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool canSendAttachment; // @synthesize canSendAttachment=_canSendAttachment;
@property(nonatomic) _Bool isInNormalSession; // @synthesize isInNormalSession=_isInNormalSession;
@property(nonatomic) _Bool rejectMsgStatus; // @synthesize rejectMsgStatus=_rejectMsgStatus;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName=_realChatUserName;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (_Bool)isValid;
- (id)init;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
