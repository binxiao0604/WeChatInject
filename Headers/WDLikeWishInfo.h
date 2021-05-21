//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface WDLikeWishInfo : NSObject <WCTTableCoding>
{
    _Bool _hasWish;
    NSString *_wishId;
    NSString *_userName;
    NSString *_nickName;
    NSString *_headUrl;
    long long _dateTime;
    long long _type;
    NSString *_ticket;
    NSString *_wishTicket;
    NSData *_liveContact;
    NSString *_wishContent;
    NSString *_likeKey;
}

+ (void)__wcdb_index_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_11:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeKey;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wishContent;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hasWish;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveContact;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wishTicket;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickName;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wishId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *likeKey; // @synthesize likeKey=_likeKey;
@property(copy, nonatomic) NSString *wishContent; // @synthesize wishContent=_wishContent;
@property(nonatomic) _Bool hasWish; // @synthesize hasWish=_hasWish;
@property(copy, nonatomic) NSData *liveContact; // @synthesize liveContact=_liveContact;
@property(copy, nonatomic) NSString *wishTicket; // @synthesize wishTicket=_wishTicket;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long dateTime; // @synthesize dateTime=_dateTime;
@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *wishId; // @synthesize wishId=_wishId;
- (long long)compareLikeMessage:(id)arg1;
- (id)getFinderLiveContact;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
