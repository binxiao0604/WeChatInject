//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ClientContextInfo, NSData;

@interface FinderBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ClientContextInfo *ctxInfo; // @dynamic ctxInfo;
@property(nonatomic) unsigned int exptFlag; // @dynamic exptFlag;
@property(retain, nonatomic) NSData *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) unsigned int liveIdentity; // @dynamic liveIdentity;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int userver; // @dynamic userver;

@end

