//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface OCRTranslationRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientScanId; // @dynamic clientScanId;
@property(retain, nonatomic) NSString *fromLanguage; // @dynamic fromLanguage;
@property(retain, nonatomic) SKBuiltinBuffer_t *imageBuffer; // @dynamic imageBuffer;
@property(nonatomic) unsigned int imageType; // @dynamic imageType;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;
@property(retain, nonatomic) NSString *toLanguage; // @dynamic toLanguage;

@end

