//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface BizProfileV2Req : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int bizSessionId; // @dynamic bizSessionId;
@property(retain, nonatomic) NSString *bizUserName; // @dynamic bizUserName;
@property(retain, nonatomic) NSData *offset; // @dynamic offset;
@property(nonatomic) unsigned int pageSize; // @dynamic pageSize;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned long long tmplControlFlag; // @dynamic tmplControlFlag;

@end

