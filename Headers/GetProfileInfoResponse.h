//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetProfileInfoResponse_ServicePreInfo, GetProfileInfoResponse_WxaEvaluateBasicInfo, GetProfileInfoResponse_WxaLikeList, GetProfileInfoResponse_WxaRelateBrandList, GetProfileInfoResponse_WxaRelateWeAppList, NSMutableArray, NSString;

@interface GetProfileInfoResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) GetProfileInfoResponse_WxaEvaluateBasicInfo *evaluateBasicInfo; // @dynamic evaluateBasicInfo;
@property(retain, nonatomic) GetProfileInfoResponse_WxaLikeList *friendLikeList; // @dynamic friendLikeList;
@property(retain, nonatomic) NSString *guarantUrl; // @dynamic guarantUrl;
@property(retain, nonatomic) NSMutableArray *newRelateWeappList; // @dynamic newRelateWeappList;
@property(retain, nonatomic) NSString *officicalUrl; // @dynamic officicalUrl;
@property(retain, nonatomic) GetProfileInfoResponse_WxaRelateBrandList *relateBrandList; // @dynamic relateBrandList;
@property(retain, nonatomic) GetProfileInfoResponse_WxaRelateWeAppList *relateWeappList; // @dynamic relateWeappList;
@property(retain, nonatomic) GetProfileInfoResponse_ServicePreInfo *servicePreInfo; // @dynamic servicePreInfo;

@end

