//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface LbsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int contactCount; // @dynamic contactCount;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(nonatomic) unsigned int flushTime; // @dynamic flushTime;
@property(nonatomic) unsigned int isShowRoom; // @dynamic isShowRoom;
@property(nonatomic) unsigned int roomMemberCount; // @dynamic roomMemberCount;
@property(nonatomic) unsigned int state; // @dynamic state;

@end

