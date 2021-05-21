//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface TextStateLikeInfo : MMObject <WCTTableCoding>
{
    _Bool _bDeleted;
    _Bool _bNotify;
    _Bool _bHadRead;
    unsigned int _likeType;
    unsigned int _createTime;
    unsigned int _likeCount;
    unsigned long long _likeId;
    NSString *_statusID;
    NSString *_nikeName;
    NSString *_hashName;
    NSString *_headImageUrl;
    NSString *_extInfo;
}

+ (id)GenerateLikeInfoWithStatusLiked:(id)arg1;
+ (id)GenerateLikeInfoWithExtInfo:(id)arg1 likeXmlInfo:(id)arg2;
+ (void)__wcdb_index_13:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_11:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bHadRead;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bNotify;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeType;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headImageUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hashName;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nikeName;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)statusID;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool bHadRead; // @synthesize bHadRead=_bHadRead;
@property(nonatomic) _Bool bNotify; // @synthesize bNotify=_bNotify;
@property(nonatomic) _Bool bDeleted; // @synthesize bDeleted=_bDeleted;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int likeType; // @synthesize likeType=_likeType;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *hashName; // @synthesize hashName=_hashName;
@property(retain, nonatomic) NSString *nikeName; // @synthesize nikeName=_nikeName;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(nonatomic) unsigned long long likeId; // @synthesize likeId=_likeId;
- (id)description;
- (id)getUserName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

