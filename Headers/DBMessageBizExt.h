//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBMessageBizExt : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId;
    unsigned int _msgType;
    unsigned int _msgInnerType;
    unsigned int _msgExtColInt1;
    unsigned int _msgExtColInt2;
    NSString *_chatUsername;
    NSString *_bizId;
    NSString *_msgExtColString1;
    NSString *_msgExtColString2;
}

+ (const struct WCTProperty *)__wcdb_synthesize_96:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgExtColString2;
+ (const struct WCTProperty *)__wcdb_synthesize_95:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgExtColString1;
+ (const struct WCTProperty *)__wcdb_synthesize_94:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgExtColInt2;
+ (const struct WCTProperty *)__wcdb_synthesize_93:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgExtColInt1;
+ (const struct WCTProperty *)__wcdb_synthesize_92:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bizId;
+ (const struct WCTProperty *)__wcdb_synthesize_91:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgInnerType;
+ (const struct WCTProperty *)__wcdb_synthesize_90:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgType;
+ (const struct WCTProperty *)__wcdb_synthesize_89:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)__wcdb_synthesize_88:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)chatUsername;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *msgExtColString2; // @synthesize msgExtColString2=_msgExtColString2;
@property(retain, nonatomic) NSString *msgExtColString1; // @synthesize msgExtColString1=_msgExtColString1;
@property(nonatomic) unsigned int msgExtColInt2; // @synthesize msgExtColInt2=_msgExtColInt2;
@property(nonatomic) unsigned int msgExtColInt1; // @synthesize msgExtColInt1=_msgExtColInt1;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) unsigned int msgInnerType; // @synthesize msgInnerType=_msgInnerType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

