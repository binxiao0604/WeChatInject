//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FavSearchItem : NSObject <WCTTableCoding>
{
    unsigned int _localId;
    int _type;
    int _subTypes;
    NSString *StrRes1;
    NSString *_searchStr;
}

+ (void)additionalObjectRelationalMapping:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_79:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_78:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_77:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_76:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)__wcdb_synthesize_75:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)subTypes;
+ (const struct WCTProperty *)__wcdb_synthesize_74:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)__wcdb_synthesize_73:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)searchStr;
+ (const struct WCTProperty *)__wcdb_synthesize_72:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int subTypes; // @synthesize subTypes=_subTypes;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *searchStr; // @synthesize searchStr=_searchStr;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

