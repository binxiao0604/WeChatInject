//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MailAttachment : NSObject
{
    NSData *m_dtData;
    NSString *m_nsDataID;
    NSString *m_nsName;
    unsigned long long m_uiSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_uiSize; // @synthesize m_uiSize;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
@property(retain, nonatomic) NSString *m_nsDataID; // @synthesize m_nsDataID;
@property(retain, nonatomic) NSData *m_dtData; // @synthesize m_dtData;
- (void)dealloc;
- (id)init;

@end

