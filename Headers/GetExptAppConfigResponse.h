//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface GetExptAppConfigResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int currSvrSecond; // @dynamic currSvrSecond;
@property(retain, nonatomic) NSMutableArray *deleteExptList; // @dynamic deleteExptList;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSString *globalSequence; // @dynamic globalSequence;
@property(nonatomic) unsigned int intervalSecond; // @dynamic intervalSecond;
@property(nonatomic) unsigned int needLocalExpt; // @dynamic needLocalExpt;
@property(retain, nonatomic) NSMutableArray *replaceExptList; // @dynamic replaceExptList;

@end

