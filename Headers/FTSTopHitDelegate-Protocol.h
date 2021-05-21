//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FTSFeatureItem, NSMutableArray, NSMutableDictionary, NSString;

@protocol FTSTopHitDelegate <NSObject>

@optional
- (NSMutableDictionary *)tophit_getWeAppDictionary;
- (_Bool)isToHitWeAppReady;
- (_Bool)isTopHitFeatureReady;
- (void)sortFeatures:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getFeatureDictionary;
- (_Bool)isTopHitFeatureShouldFilterOut:(FTSFeatureItem *)arg1;
- (_Bool)isTopHitContactActive:(NSString *)arg1;
- (_Bool)isTopHitAddressBookReady;
- (_Bool)isTopHitContactReady;
- (void)sortAddressBookFriends:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (void)sortContacts:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getNickNameToFriendsDictionary;
- (NSMutableDictionary *)getAddressBookDictionary;
- (NSMutableDictionary *)getContactDictionary;
- (NSMutableDictionary *)getChinesePinyin;
- (unsigned int)getCreateTimeForUser:(NSString *)arg1;
@end

