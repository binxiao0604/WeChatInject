//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t, SmsUpCheckExtInfo;

@interface BindOpMobileRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adjustRet; // @dynamic adjustRet;
@property(retain, nonatomic) NSString *authTicket; // @dynamic authTicket;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientSeqId; // @dynamic clientSeqId;
@property(nonatomic) int dialFlag; // @dynamic dialFlag;
@property(retain, nonatomic) NSString *dialLang; // @dynamic dialLang;
@property(retain, nonatomic) NSString *extRegUrl; // @dynamic extRegUrl;
@property(retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo; // @dynamic extSpamInfo;
@property(nonatomic) unsigned int forceReg; // @dynamic forceReg;
@property(nonatomic) unsigned int inputMobileRetrys; // @dynamic inputMobileRetrys;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(nonatomic) unsigned int mobileCheckType; // @dynamic mobileCheckType;
@property(nonatomic) int opcode; // @dynamic opcode;
@property(retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey; // @dynamic randomEncryKey;
@property(retain, nonatomic) NSString *regSessionId; // @dynamic regSessionId;
@property(retain, nonatomic) NSString *safeDeviceName; // @dynamic safeDeviceName;
@property(retain, nonatomic) NSString *safeDeviceType; // @dynamic safeDeviceType;
@property(retain, nonatomic) SmsUpCheckExtInfo *smsUpCheckExtInfo; // @dynamic smsUpCheckExtInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *spamBuffer; // @dynamic spamBuffer;
@property(retain, nonatomic) NSString *thirdAppAuthTicket; // @dynamic thirdAppAuthTicket;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *verifycode; // @dynamic verifycode;

@end
