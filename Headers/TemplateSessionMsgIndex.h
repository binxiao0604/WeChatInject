//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@interface TemplateSessionMsgIndex : NSObject <WCTTableCoding>
{
    unsigned int _msgLocalId;
    unsigned int _createTime;
}

+ (void)__wcdb_column_constraint_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_3:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgLocalId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

