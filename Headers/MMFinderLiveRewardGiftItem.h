//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMFinderLiveRewardGiftItem : MMObject <WCTTableCoding, NSCopying>
{
    unsigned int businessType;
    unsigned int rewardGiftType;
    unsigned int rewardGiftOrder;
    NSString *rewardProductId;
    NSString *thumbnailFileUrl;
    NSString *previewPagFileUrl;
    NSString *animationPagFileUrl;
    NSString *thumbnailFileMd5;
    NSString *previewPagFileMd5;
    NSString *animationPagFileMd5;
    NSString *rewardGiftName;
    double rewardAmountInWecoin;
}

+ (id)tranferToLiveGiftItems:(id)arg1;
+ (void)__wcdb_index_13:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rewardGiftOrder;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rewardGiftType;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rewardAmountInWecoin;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rewardGiftName;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)animationPagFileMd5;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)previewPagFileMd5;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)thumbnailFileMd5;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)animationPagFileUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)previewPagFileUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)thumbnailFileUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)businessType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rewardProductId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int rewardGiftOrder; // @synthesize rewardGiftOrder;
@property(nonatomic) unsigned int rewardGiftType; // @synthesize rewardGiftType;
@property(nonatomic) double rewardAmountInWecoin; // @synthesize rewardAmountInWecoin;
@property(retain, nonatomic) NSString *rewardGiftName; // @synthesize rewardGiftName;
@property(retain, nonatomic) NSString *animationPagFileMd5; // @synthesize animationPagFileMd5;
@property(retain, nonatomic) NSString *previewPagFileMd5; // @synthesize previewPagFileMd5;
@property(retain, nonatomic) NSString *thumbnailFileMd5; // @synthesize thumbnailFileMd5;
@property(retain, nonatomic) NSString *animationPagFileUrl; // @synthesize animationPagFileUrl;
@property(retain, nonatomic) NSString *previewPagFileUrl; // @synthesize previewPagFileUrl;
@property(retain, nonatomic) NSString *thumbnailFileUrl; // @synthesize thumbnailFileUrl;
@property(nonatomic) unsigned int businessType; // @synthesize businessType;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId;
- (id)description;
- (_Bool)isValid;
- (void)copyFromPBGift:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBGift:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

