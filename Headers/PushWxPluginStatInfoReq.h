//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PushWxPluginStatInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(nonatomic) unsigned int operation; // @dynamic operation;
@property(retain, nonatomic) NSString *osVer; // @dynamic osVer;
@property(nonatomic) unsigned int platform; // @dynamic platform;
@property(nonatomic) unsigned long long reportTime; // @dynamic reportTime;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int statType; // @dynamic statType;
@property(nonatomic) unsigned long long vid; // @dynamic vid;
@property(nonatomic) unsigned long long wwCorpid; // @dynamic wwCorpid;
@property(nonatomic) unsigned int wxuin; // @dynamic wxuin;

@end

