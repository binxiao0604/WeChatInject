//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayMessageStruct : NSObject
{
    unsigned int m_uiMessageType;
    unsigned int m_uiCreateTime;
    unsigned int m_uiMsgLocalID;
    NSString *m_nsContent;
    NSString *m_nsAppUserName;
    NSString *m_nsAppNickName;
    NSString *m_nsAppHeaderImg;
    NSString *m_nsStatusType;
    NSString *m_nsStatusDesc;
    unsigned int m_uiReadFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property(nonatomic) unsigned int m_uiReadFlag; // @synthesize m_uiReadFlag;
@property(nonatomic) unsigned int m_uiMsgLocalID; // @synthesize m_uiMsgLocalID;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsStatusType; // @synthesize m_nsStatusType;
@property(retain, nonatomic) NSString *m_nsStatusDesc; // @synthesize m_nsStatusDesc;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsAppUserName; // @synthesize m_nsAppUserName;
@property(retain, nonatomic) NSString *m_nsAppNickName; // @synthesize m_nsAppNickName;
@property(retain, nonatomic) NSString *m_nsAppHeaderImg; // @synthesize m_nsAppHeaderImg;
- (void)dealloc;

@end

