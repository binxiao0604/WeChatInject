//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CMessageWrap, NSDictionary, NSString;

@interface MagicEmojiReportObject : MMObject
{
    CMessageWrap *_msgWrap;
    NSString *_sessionID;
    NSString *_messageTimestamp;
    NSDictionary *_reportDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *reportDic; // @synthesize reportDic=_reportDic;
@property(retain, nonatomic) NSString *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (id)init;

@end
