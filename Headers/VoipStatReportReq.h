//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, VoipStatReportData;

@interface VoipStatReportReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) VoipStatReportData *channelReportData; // @dynamic channelReportData;
@property(retain, nonatomic) VoipStatReportData *dialReportData; // @dynamic dialReportData;
@property(nonatomic) unsigned int directConnCnt; // @dynamic directConnCnt;
@property(retain, nonatomic) NSMutableArray *directConnReports; // @dynamic directConnReports;
@property(retain, nonatomic) VoipStatReportData *engineExtReportData; // @dynamic engineExtReportData;
@property(nonatomic) unsigned int engineMpReportCnt; // @dynamic engineMpReportCnt;
@property(retain, nonatomic) NSMutableArray *engineMpReports; // @dynamic engineMpReports;
@property(retain, nonatomic) VoipStatReportData *engineReportData; // @dynamic engineReportData;
@property(retain, nonatomic) NSMutableArray *natReport; // @dynamic natReport;
@property(nonatomic) unsigned int natReportCnt; // @dynamic natReportCnt;
@property(nonatomic) unsigned int relayConnCnt; // @dynamic relayConnCnt;
@property(retain, nonatomic) NSMutableArray *relayConnReports; // @dynamic relayConnReports;
@property(retain, nonatomic) VoipStatReportData *reportData; // @dynamic reportData;
@property(nonatomic) unsigned long long timestamp64; // @dynamic timestamp64;

@end
