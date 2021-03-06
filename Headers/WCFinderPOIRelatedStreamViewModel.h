//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, POIInfo, SnsPoiDetail, WCFinderContact;
@protocol WCFinderPOIRelatedStreamViewModelDelegate;

@interface WCFinderPOIRelatedStreamViewModel : NSObject
{
    _Bool _stopFetchNextPage;
    id <WCFinderPOIRelatedStreamViewModelDelegate> _delegate;
    NSMutableArray *_allDataItems;
    unsigned long long _preFetchNextPageIndex;
    unsigned long long _refreshTime;
    double _cacheHeaderHight;
    POIInfo *_poiInfo;
    NSString *_poiClassifyId;
    NSData *_lastBuffer;
    SnsPoiDetail *_poiDetail;
    NSMutableSet *_tidContainSet;
    NSString *_chatName;
    WCFinderContact *_bindContact;
    NSString *_reportID;
    NSString *_noticeWording;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *noticeWording; // @synthesize noticeWording=_noticeWording;
@property(copy, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) WCFinderContact *bindContact; // @synthesize bindContact=_bindContact;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) SnsPoiDetail *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *poiClassifyId; // @synthesize poiClassifyId=_poiClassifyId;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) double cacheHeaderHight; // @synthesize cacheHeaderHight=_cacheHeaderHight;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long preFetchNextPageIndex; // @synthesize preFetchNextPageIndex=_preFetchNextPageIndex;
@property(nonatomic) _Bool stopFetchNextPage; // @synthesize stopFetchNextPage=_stopFetchNextPage;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(nonatomic) __weak id <WCFinderPOIRelatedStreamViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)poiIDReport;
- (id)finderUsernameReport;
- (id)poiDetailReport;
- (id)shareItem;
- (id)getCurBindContact;
- (id)getNoticeWording;
- (id)getChatName;
- (id)getPoiInfo;
- (id)poiName;
- (_Bool)isSnSPoiDetailVaild;
- (id)getHeaderSnsPoiDetail;
- (_Bool)isDataEmpty;
- (id)transformDataItems:(id)arg1;
- (void)appendFinderContentVM:(id)arg1;
- (void)requestNextPageData;
- (void)fetchLastestData;
- (long long)contentIndexOfTid:(id)arg1;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (id)enterReportID;
- (unsigned long long)sectionNums;
- (id)initWithPoiInfo:(id)arg1 poiClassifyId:(id)arg2 chatName:(id)arg3 reportID:(id)arg4;

@end

