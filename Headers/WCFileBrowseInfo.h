//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class FavDataItemWrap, NSData, NSString;

@interface WCFileBrowseInfo : NSObject <WCTTableCoding>
{
    _Bool _bUserOpen;
    unsigned int _msgLocalID;
    unsigned int _favID;
    unsigned int _favMsgLocalID;
    unsigned int _typeDownloaded;
    NSString *_desTitle;
    NSString *_fromUserName;
    NSString *_fromUserNickName;
    NSString *_fromChatName;
    NSString *_fromChatNickName;
    NSString *_timeString;
    unsigned long long _msgWrapSvrID;
    unsigned long long _fileTime;
    unsigned long long _fileSize;
    NSString *_fileExt;
    NSString *_fileMD5;
    unsigned long long _enumDataType;
    FavDataItemWrap *_favDataItemWrap;
    NSString *_fileName;
    NSString *_filePath;
    NSData *_fileData;
    NSData *_fileThumb;
}

+ (_Bool)browseInfoIsValid:(id)arg1;
+ (void)__wcdb_index_13:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_12:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bUserOpen;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)typeDownloaded;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fileMD5;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalID;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fileExt;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fileSize;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fileTime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgWrapSvrID;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromChatName;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromUserName;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)desTitle;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool bUserOpen; // @synthesize bUserOpen=_bUserOpen;
@property(nonatomic) unsigned int typeDownloaded; // @synthesize typeDownloaded=_typeDownloaded;
@property(retain, nonatomic) NSData *fileThumb; // @synthesize fileThumb=_fileThumb;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) FavDataItemWrap *favDataItemWrap; // @synthesize favDataItemWrap=_favDataItemWrap;
@property(nonatomic) unsigned int favMsgLocalID; // @synthesize favMsgLocalID=_favMsgLocalID;
@property(nonatomic) unsigned int favID; // @synthesize favID=_favID;
@property(nonatomic) unsigned long long enumDataType; // @synthesize enumDataType=_enumDataType;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) unsigned long long fileTime; // @synthesize fileTime=_fileTime;
@property(nonatomic) unsigned long long msgWrapSvrID; // @synthesize msgWrapSvrID=_msgWrapSvrID;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *fromChatNickName; // @synthesize fromChatNickName=_fromChatNickName;
@property(copy, nonatomic) NSString *fromChatName; // @synthesize fromChatName=_fromChatName;
@property(copy, nonatomic) NSString *fromUserNickName; // @synthesize fromUserNickName=_fromUserNickName;
@property(copy, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(copy, nonatomic) NSString *desTitle; // @synthesize desTitle=_desTitle;
- (_Bool)isSameFavFileBrowseInfo:(id)arg1;
- (_Bool)isSameChatLogFileBrowseInfo:(id)arg1;
- (void)trySetFromChatNickName;
- (void)trySetFromUserNickName;
- (_Bool)isMatchedSearchText:(id)arg1;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

