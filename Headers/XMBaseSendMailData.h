//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, XMBaseContactData;

@interface XMBaseSendMailData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attlist; // @dynamic attlist;
@property(retain, nonatomic) NSMutableArray *bcclist; // @dynamic bcclist;
@property(retain, nonatomic) NSMutableArray *bigAttlist; // @dynamic bigAttlist;
@property(retain, nonatomic) NSMutableArray *cclist; // @dynamic cclist;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) XMBaseContactData *from; // @dynamic from;
@property(retain, nonatomic) NSString *oldmailid; // @dynamic oldmailid;
@property(nonatomic) _Bool savesent; // @dynamic savesent;
@property(nonatomic) int sendtype; // @dynamic sendtype;
@property(retain, nonatomic) NSString *subject; // @dynamic subject;
@property(retain, nonatomic) NSMutableArray *tolist; // @dynamic tolist;

@end

