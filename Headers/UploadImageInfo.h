//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap;

@interface UploadImageInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiTotalLen;
    int m_nRetCode;
    _Bool _isParallelUpload;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isParallelUpload; // @synthesize isParallelUpload=_isParallelUpload;
@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (id)GetStatInfo;
- (id)init;

@end
