//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJoinLiveResp_PromotingInfo, FinderJoinLiveTips, FinderLiveAdInfo, FinderLiveContact, FinderLiveInfo, FinderLiveMicInfo, FinderLiveShopWindowProductItem, FinderLiveUserInfo, FinderLocation, FinderWxAppInfo, LiveSdkInfo, NSData, NSMutableArray, NSString;

@interface FinderJoinLiveResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *aliasInfo; // @dynamic aliasInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int currentAliasRoleType; // @dynamic currentAliasRoleType;
@property(nonatomic) unsigned int joinLiveFlag; // @dynamic joinLiveFlag;
@property(retain, nonatomic) FinderLiveAdInfo *liveAdInfo; // @dynamic liveAdInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(retain, nonatomic) FinderLiveInfo *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(retain, nonatomic) LiveSdkInfo *liveSdkInfo; // @dynamic liveSdkInfo;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(nonatomic) unsigned long long nextAliasModAvailableTime; // @dynamic nextAliasModAvailableTime;
@property(retain, nonatomic) FinderJoinLiveResp_PromotingInfo *promotingInfo; // @dynamic promotingInfo;
@property(retain, nonatomic) FinderLiveShopWindowProductItem *promotingProduct; // @dynamic promotingProduct;
@property(retain, nonatomic) NSString *redpacketCliBuff; // @dynamic redpacketCliBuff;
@property(retain, nonatomic) NSMutableArray *redpacketReferChatroomIdList; // @dynamic redpacketReferChatroomIdList;
@property(retain, nonatomic) FinderLiveContact *selfContact; // @dynamic selfContact;
@property(retain, nonatomic) NSMutableArray *templateInfoList; // @dynamic templateInfoList;
@property(retain, nonatomic) FinderJoinLiveTips *tips; // @dynamic tips;
@property(retain, nonatomic) FinderLiveUserInfo *userInfo; // @dynamic userInfo;
@property(retain, nonatomic) NSString *verifyInfoBuf; // @dynamic verifyInfoBuf;
@property(retain, nonatomic) FinderWxAppInfo *wxaShopInfo; // @dynamic wxaShopInfo;

@end

