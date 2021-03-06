//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCNearbyEntryGridItem : MMObject <PBCoding>
{
    int itemType;
    NSString *iconImageFileName;
    NSString *name;
    unsigned int unreadCnt;
    NSString *extImageFileName;
    NSString *itemId;
    NSString *jumpUrl;
    NSString *iconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemId;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_jumpUrl;
+ (void)PBArrayAdd_extImageFileName;
+ (void)PBArrayAdd_unreadCnt;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_iconImageFileName;
+ (void)PBArrayAdd_itemType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *extImageFileName; // @synthesize extImageFileName;
@property(nonatomic) unsigned int unreadCnt; // @synthesize unreadCnt;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *iconImageFileName; // @synthesize iconImageFileName;
@property(nonatomic) int itemType; // @synthesize itemType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

