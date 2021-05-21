//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMsgExt-Protocol.h"
#import "IUploadVoiceExt-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"

@class CBaseContact, MMTimer, NSString;
@protocol TypingControllerDelgate;

@interface TypingController : NSObject <MessageObserverDelegate, IUploadVoiceExt, IMsgExt>
{
    unsigned int m_uLastSendTypingTime;
    CBaseContact *m_contact;
    NSString *m_nsLastTextViewText;
    id <TypingControllerDelgate> m_delegate;
    MMTimer *m_receiveTypingTimer;
    unsigned int m_uLastReveicedMsgTime;
    unsigned int m_uChatStatus;
    _Bool m_bFirstTyping;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uLastReveicedMsgTime; // @synthesize m_uLastReveicedMsgTime;
@property(retain, nonatomic) MMTimer *m_receiveTypingTimer; // @synthesize m_receiveTypingTimer;
@property(nonatomic) __weak id <TypingControllerDelgate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastTextViewText; // @synthesize m_nsLastTextViewText;
@property(retain, nonatomic) CBaseContact *m_contact; // @synthesize m_contact;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUploadVoiceOK:(id)arg1;
- (void)dealloc;
- (void)Reset;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onReceiveTypingTimer:(id)arg1;
- (void)stopReceiveTypingTimer;
- (void)startReceiveTypingTimer;
- (void)updateTitle:(int)arg1;
- (id)getUsrNameTitle;
- (void)onTextChange:(id)arg1;
- (void)trySendTyping:(int)arg1;
- (void)trySendClearTyping;
- (_Bool)sendChatStatusInternal:(unsigned int)arg1;
- (_Bool)IsNeedTyping;
- (void)UnRegister;
- (void)Register;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

