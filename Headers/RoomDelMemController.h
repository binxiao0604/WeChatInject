//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ChatroomMemberRemoveViewControllerDelegate-Protocol.h"
#import "IOplogExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, MMUIViewController, NSString, RoomHistoryContext;
@protocol RoomDelMemControllDelegate;

@interface RoomDelMemController : NSObject <WCActionSheetDelegate, ChatroomMemberRemoveViewControllerDelegate, IOplogExt>
{
    CContact *_contact;
    MMUIViewController *_weakViewController;
    id <RoomDelMemControllDelegate> _delegate;
    RoomHistoryContext *_historyContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RoomHistoryContext *historyContext; // @synthesize historyContext=_historyContext;
@property(nonatomic) __weak id <RoomDelMemControllDelegate> delegate; // @synthesize delegate=_delegate;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)onChatroomMemberRemoveViewCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)showLoadingWithText:(id)arg1;
- (void)onDelUsrs:(id)arg1 success:(_Bool)arg2;
- (void)handleRevokeHistorySuccessForUsr:(id)arg1;
- (void)handleRevokeHistoryFail:(id)arg1 failMsg:(id)arg2 operUsr:(id)arg3;
- (void)handleRevokeHistoryRecord:(id)arg1 usrname:(id)arg2;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned long long)arg2;
- (void)callRevokeHistoryThenRemoveMember:(id)arg1 message:(id)arg2;
- (void)deleteSingleUsr:(id)arg1 message:(id)arg2 revokeHistory:(_Bool)arg3;
- (void)handleRevokeInvitation:(id)arg1 revokeHistory:(_Bool)arg2;
- (void)delChatRoomMemberFromInvitation:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 roomContact:(id)arg2 historyContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
