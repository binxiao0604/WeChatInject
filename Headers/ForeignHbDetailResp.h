//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ForeignHbCurrencyTips, ForeignHbOperationsInfo, NSMutableArray, NSString;

@interface ForeignHbDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *amountDesc; // @dynamic amountDesc;
@property(retain, nonatomic) NSString *amountDescIcon; // @dynamic amountDescIcon;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *changeIconUrl; // @dynamic changeIconUrl;
@property(retain, nonatomic) NSString *changeUrl; // @dynamic changeUrl;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(retain, nonatomic) ForeignHbCurrencyTips *currencyTips; // @dynamic currencyTips;
@property(nonatomic) unsigned int enableAnswerByExpression; // @dynamic enableAnswerByExpression;
@property(nonatomic) unsigned int enableAnswerBySelfie; // @dynamic enableAnswerBySelfie;
@property(nonatomic) unsigned int hbKind; // @dynamic hbKind;
@property(nonatomic) unsigned int hbStatus; // @dynamic hbStatus;
@property(nonatomic) unsigned int hbType; // @dynamic hbType;
@property(retain, nonatomic) NSString *headTitle; // @dynamic headTitle;
@property(nonatomic) unsigned int isContinue; // @dynamic isContinue;
@property(nonatomic) unsigned int isSender; // @dynamic isSender;
@property(nonatomic) unsigned int jumpChange; // @dynamic jumpChange;
@property(nonatomic) unsigned int jumpChangeType; // @dynamic jumpChangeType;
@property(retain, nonatomic) NSMutableArray *operationHeader; // @dynamic operationHeader;
@property(retain, nonatomic) ForeignHbOperationsInfo *operationTail; // @dynamic operationTail;
@property(nonatomic) unsigned long long recAmount; // @dynamic recAmount;
@property(nonatomic) unsigned int recNum; // @dynamic recNum;
@property(retain, nonatomic) NSString *receiveId; // @dynamic receiveId;
@property(nonatomic) unsigned int receiveStatus; // @dynamic receiveStatus;
@property(retain, nonatomic) NSMutableArray *record; // @dynamic record;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;
@property(retain, nonatomic) NSString *statusMess; // @dynamic statusMess;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) unsigned int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end
