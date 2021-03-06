//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface ChatRoomUpgradeInfo : NSObject <PBCoding>
{
    unsigned int chatRoomLevel;
    unsigned int maxMemberCount;
    NSString *chatRoomName;
    NSString *desc;
    NSArray *productList;
    NSString *bannerIconUrl;
    NSString *bannerBgUrl;
    NSString *bannerDesc;
    NSString *bannerAction;
    _Bool needVerifyPersonal;
    unsigned int productStatus;
    unsigned int bannerActionType;
}

+ (void)initialize;
+ (void)PBArrayAdd_bannerActionType;
+ (void)PBArrayAdd_productStatus;
+ (void)PBArrayAdd_needVerifyPersonal;
+ (void)PBArrayAdd_bannerAction;
+ (void)PBArrayAdd_bannerDesc;
+ (void)PBArrayAdd_bannerBgUrl;
+ (void)PBArrayAdd_bannerIconUrl;
+ (void)PBArrayAdd_productList;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_chatRoomName;
+ (void)PBArrayAdd_maxMemberCount;
+ (void)PBArrayAdd_chatRoomLevel;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bannerActionType; // @synthesize bannerActionType;
@property(nonatomic) unsigned int productStatus; // @synthesize productStatus;
@property(nonatomic) _Bool needVerifyPersonal; // @synthesize needVerifyPersonal;
@property(retain, nonatomic) NSString *bannerAction; // @synthesize bannerAction;
@property(retain, nonatomic) NSString *bannerDesc; // @synthesize bannerDesc;
@property(retain, nonatomic) NSString *bannerBgUrl; // @synthesize bannerBgUrl;
@property(retain, nonatomic) NSString *bannerIconUrl; // @synthesize bannerIconUrl;
@property(retain, nonatomic) NSArray *productList; // @synthesize productList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned int maxMemberCount; // @synthesize maxMemberCount;
@property(nonatomic) unsigned int chatRoomLevel; // @synthesize chatRoomLevel;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

