//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnComVideoProcessInfo : NSObject
{
    unsigned int m_uiDurationMs;
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    unsigned long long m_uiOffset;
    unsigned long long m_uiLength;
    NSString *m_nsM3u8;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsM3u8; // @synthesize m_nsM3u8;
@property(nonatomic) unsigned int m_uiDurationMs; // @synthesize m_uiDurationMs;
@property(nonatomic) unsigned long long m_uiLength; // @synthesize m_uiLength;
@property(nonatomic) unsigned long long m_uiOffset; // @synthesize m_uiOffset;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

