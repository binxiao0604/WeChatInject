//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem18644 : KvReportBaseItem
{
    unsigned int _SessionId_24;
    unsigned int _Pos_25;
    NSString *_BizUserName_21;
    long long _CardID_22;
    NSString *_FbContent_23;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int Pos_25; // @synthesize Pos_25=_Pos_25;
@property(nonatomic) unsigned int SessionId_24; // @synthesize SessionId_24=_SessionId_24;
@property(copy, nonatomic) NSString *FbContent_23; // @synthesize FbContent_23=_FbContent_23;
@property(nonatomic) long long CardID_22; // @synthesize CardID_22=_CardID_22;
@property(copy, nonatomic) NSString *BizUserName_21; // @synthesize BizUserName_21=_BizUserName_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

