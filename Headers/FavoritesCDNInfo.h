//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FavoritesCDNInfo : NSObject <WCTTableCoding>
{
    unsigned int IntRes1;
    unsigned int IntRes2;
    unsigned int _localItemId;
    unsigned int _size;
    int _status;
    int _isThumb;
    int _dataType;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *_localDataID;
    NSString *_cdnUrl;
    NSString *_cdnKey;
    NSString *_md5;
    NSString *_head256Md5;
    NSString *_streamId;
    NSString *_dataFmt;
    NSString *_clientMsgID;
}

+ (void)__wcdb_column_constraint_71:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_70:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_69:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_68:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_67:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_66:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_65:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_64:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_63:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_62:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)__wcdb_synthesize_61:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)__wcdb_synthesize_60:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)__wcdb_synthesize_59:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)__wcdb_synthesize_58:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)clientMsgID;
+ (const struct WCTProperty *)__wcdb_synthesize_57:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dataFmt;
+ (const struct WCTProperty *)__wcdb_synthesize_56:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)streamId;
+ (const struct WCTProperty *)__wcdb_synthesize_55:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)dataType;
+ (const struct WCTProperty *)__wcdb_synthesize_54:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isThumb;
+ (const struct WCTProperty *)__wcdb_synthesize_53:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)head256Md5;
+ (const struct WCTProperty *)__wcdb_synthesize_52:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)__wcdb_synthesize_51:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cdnKey;
+ (const struct WCTProperty *)__wcdb_synthesize_50:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)__wcdb_synthesize_49:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)size;
+ (const struct WCTProperty *)__wcdb_synthesize_48:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cdnUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_47:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localDataID;
+ (const struct WCTProperty *)__wcdb_synthesize_46:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localItemId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientMsgID; // @synthesize clientMsgID=_clientMsgID;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) int isThumb; // @synthesize isThumb=_isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5=_head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId=_localItemId;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
