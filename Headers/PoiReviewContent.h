//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface PoiReviewContent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) int goodCount; // @dynamic goodCount;
@property(nonatomic) int isHighQuality; // @dynamic isHighQuality;
@property(retain, nonatomic) NSMutableArray *photos; // @dynamic photos;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *user; // @dynamic user;
@property(retain, nonatomic) NSString *userFace; // @dynamic userFace;

@end
