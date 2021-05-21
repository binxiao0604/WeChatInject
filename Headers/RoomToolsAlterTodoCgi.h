//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class CMessageWrap, ChatRoomToolMessageEventInfo, NSString;
@protocol RoomToolsAlterTodoDelegate;

@interface RoomToolsAlterTodoCgi : WCBaseCgi
{
    id <RoomToolsAlterTodoDelegate> _delegate;
    NSString *_identifier;
    ChatRoomToolMessageEventInfo *_eventInfo;
    CMessageWrap *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *message; // @synthesize message=_message;
@property(retain, nonatomic) ChatRoomToolMessageEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RoomToolsAlterTodoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)cgiRevokeTodo:(id)arg1 chatName:(id)arg2;
- (void)cgiUpdateTodo:(id)arg1 chatName:(id)arg2;
- (id)init;

@end
