//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CgiScanRewardQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *extendStr1; // @dynamic extendStr1;
@property(retain, nonatomic) NSString *extendStr2; // @dynamic extendStr2;
@property(nonatomic) unsigned int maxAmt; // @dynamic maxAmt;
@property(retain, nonatomic) NSString *phoneUrl; // @dynamic phoneUrl;
@property(retain, nonatomic) NSString *receiverName; // @dynamic receiverName;
@property(retain, nonatomic) NSString *receiverNickname; // @dynamic receiverNickname;
@property(retain, nonatomic) NSString *receiverOpenId; // @dynamic receiverOpenId;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;
@property(retain, nonatomic) NSString *upperRightStr; // @dynamic upperRightStr;

@end
