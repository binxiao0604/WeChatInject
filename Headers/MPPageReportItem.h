//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MPPageReportItem : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _itemId;
    unsigned int _a8KeyScene;
    unsigned int _enterScene;
    unsigned int _enterSubscene;
    long long _reportTime;
    NSString *_url;
    NSString *_sessionId;
}

+ (void)__wcdb_index_8:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sessionId;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)enterSubscene;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)enterScene;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)a8KeyScene;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)url;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reportTime;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)itemId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int enterSubscene; // @synthesize enterSubscene=_enterSubscene;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int a8KeyScene; // @synthesize a8KeyScene=_a8KeyScene;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
- (id)description;

// Remaining properties
@property(nonatomic) long long lastInsertedRowID;

@end

