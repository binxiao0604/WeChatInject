//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ClientStatsInfo, NSData, NSMutableArray, NSString;

@interface FinderTipsShowInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int clearType; // @dynamic clearType;
@property(retain, nonatomic) ClientStatsInfo *clientStatsInfo; // @dynamic clientStatsInfo;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSMutableArray *multiIconUrls; // @dynamic multiIconUrls;
@property(retain, nonatomic) NSString *parent; // @dynamic parent;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSData *showExtInfo; // @dynamic showExtInfo;
@property(nonatomic) unsigned int showExtInfoType; // @dynamic showExtInfoType;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

