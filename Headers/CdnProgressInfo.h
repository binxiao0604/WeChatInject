//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CdnProgressInfo : NSObject
{
    _Bool m_nTryShow;
    int m_nStatus;
    NSString *m_nsClientMsgID;
    unsigned long long m_nTotalLength;
    unsigned long long m_nFinishedLegth;
    struct C2CDownloadResult m_result;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct C2CDownloadResult m_result; // @synthesize m_result;
@property(nonatomic) _Bool m_nTryShow; // @synthesize m_nTryShow;
@property(nonatomic) int m_nStatus; // @synthesize m_nStatus;
@property(nonatomic) unsigned long long m_nFinishedLegth; // @synthesize m_nFinishedLegth;
@property(nonatomic) unsigned long long m_nTotalLength; // @synthesize m_nTotalLength;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;

@end

