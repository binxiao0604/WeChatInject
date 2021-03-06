//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGroupMgrExt-Protocol.h"

@class CContact;
@protocol ChatRoomUpgradeOpenIMLogicDelegate;

@interface ChatRoomUpgradeOpenIMLogic : NSObject <IGroupMgrExt>
{
    unsigned int _m_scene;
    id <ChatRoomUpgradeOpenIMLogicDelegate> m_delegate;
    CContact *_m_chatRoomContact;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) __weak id <ChatRoomUpgradeOpenIMLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnGetUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4 withResp:(id)arg5;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)arg1;
- (void)start;
- (void)dealloc;

@end

