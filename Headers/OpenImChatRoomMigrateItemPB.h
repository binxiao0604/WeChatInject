//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface OpenImChatRoomMigrateItemPB : NSObject <PBCoding>
{
    _Bool m_bIsHadMigrated;
    _Bool m_bIsSendInsertWarningSystemMessage;
    NSString *m_nsOpenIMChatRoomUserName;
    NSString *m_nsAssociateChatRoomUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bIsSendInsertWarningSystemMessage;
+ (void)PBArrayAdd_m_bIsHadMigrated;
+ (void)PBArrayAdd_m_nsAssociateChatRoomUserName;
+ (void)PBArrayAdd_m_nsOpenIMChatRoomUserName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsSendInsertWarningSystemMessage; // @synthesize m_bIsSendInsertWarningSystemMessage;
@property(nonatomic) _Bool m_bIsHadMigrated; // @synthesize m_bIsHadMigrated;
@property(retain, nonatomic) NSString *m_nsAssociateChatRoomUserName; // @synthesize m_nsAssociateChatRoomUserName;
@property(retain, nonatomic) NSString *m_nsOpenIMChatRoomUserName; // @synthesize m_nsOpenIMChatRoomUserName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

