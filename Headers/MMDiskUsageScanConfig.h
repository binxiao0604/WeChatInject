//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMDiskUsageScanConfig : NSObject
{
    _Bool _m_isDelete;
    _Bool _m_isDeleteUnknow;
    _Bool _m_isReportDelUnknow;
    _Bool _m_isQuickScan;
    _Bool _m_bUseCacheSize;
    _Bool _m_bSaveScanData;
    _Bool _m_bShouldPrintDetail;
    unsigned int _m_urgentLevel;
}

@property(nonatomic) _Bool m_bShouldPrintDetail; // @synthesize m_bShouldPrintDetail=_m_bShouldPrintDetail;
@property(nonatomic) unsigned int m_urgentLevel; // @synthesize m_urgentLevel=_m_urgentLevel;
@property(nonatomic) _Bool m_bSaveScanData; // @synthesize m_bSaveScanData=_m_bSaveScanData;
@property(nonatomic) _Bool m_bUseCacheSize; // @synthesize m_bUseCacheSize=_m_bUseCacheSize;
@property(nonatomic) _Bool m_isQuickScan; // @synthesize m_isQuickScan=_m_isQuickScan;
@property(nonatomic) _Bool m_isReportDelUnknow; // @synthesize m_isReportDelUnknow=_m_isReportDelUnknow;
@property(nonatomic) _Bool m_isDeleteUnknow; // @synthesize m_isDeleteUnknow=_m_isDeleteUnknow;
@property(nonatomic) _Bool m_isDelete; // @synthesize m_isDelete=_m_isDelete;
- (id)description;
- (id)init;

@end

