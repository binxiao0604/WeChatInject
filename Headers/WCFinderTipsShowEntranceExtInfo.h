//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface WCFinderTipsShowEntranceExtInfo : NSObject <PBCoding>
{
    unsigned int tabType;
    unsigned long long objectId;
    NSString *objectNonceId;
    NSString *userName;
    NSMutableArray *multiUsernames;
    NSString *reportExtInfo;
    NSData *tabTipsByPassInfo;
    NSString *tipsID;
}

+ (id)extInfoWith:(id)arg1 tipsID:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_tipsID;
+ (void)PBArrayAdd_tabTipsByPassInfo;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_multiUsernames;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_tabType;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @synthesize tabTipsByPassInfo;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo;
@property(copy, nonatomic) NSMutableArray *multiUsernames; // @synthesize multiUsernames;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned int tabType; // @synthesize tabType;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId;
- (_Bool)isSameTipsID:(id)arg1;
- (id)redDotReportExtInfo;
- (_Bool)isVaildExtInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

