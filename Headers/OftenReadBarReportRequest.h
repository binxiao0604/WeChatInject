//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface OftenReadBarReportRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *clickList; // @dynamic clickList;
@property(nonatomic) unsigned int reportType; // @dynamic reportType;
@property(nonatomic) unsigned int sessionid; // @dynamic sessionid;
@property(retain, nonatomic) NSMutableArray *showList; // @dynamic showList;
@property(nonatomic) unsigned int source; // @dynamic source;

@end

