//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderLiveClientStatus, NSData, NSMutableArray, NSString;

@interface FinderStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baserequest; // @dynamic baserequest;
@property(retain, nonatomic) NSData *cardBuffer; // @dynamic cardBuffer;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *markUnreadObjectList; // @dynamic markUnreadObjectList;
@property(nonatomic) unsigned long long partialExposedObjectId; // @dynamic partialExposedObjectId;
@property(nonatomic) unsigned int prefetchConsumedFlag; // @dynamic prefetchConsumedFlag;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) NSMutableArray *readStats; // @dynamic readStats;
@property(nonatomic) unsigned int requestSource; // @dynamic requestSource;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int specialRequestScene; // @dynamic specialRequestScene;
@property(retain, nonatomic) NSMutableArray *stats; // @dynamic stats;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(nonatomic) unsigned long long tabTipsObjectId; // @dynamic tabTipsObjectId;
@property(retain, nonatomic) NSString *tabTipsObjectNonceId; // @dynamic tabTipsObjectNonceId;
@property(retain, nonatomic) NSString *tabTipsPath; // @dynamic tabTipsPath;
@property(retain, nonatomic) NSString *tabTipsUsername; // @dynamic tabTipsUsername;

@end

