//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderHotSpotHistorySectionModel, WCFinderHotSpotTableViewSectionModel;
@protocol WCFinderSearchHotSpotViewModelDelegate;

@interface WCFinderSearchHotSpotViewModel : NSObject
{
    _Bool _hasClickShowMore;
    id <WCFinderSearchHotSpotViewModelDelegate> _delegate;
    WCFinderHotSpotHistorySectionModel *_historySectionModel;
    WCFinderHotSpotTableViewSectionModel *_hotSpotSectionModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClickShowMore; // @synthesize hasClickShowMore=_hasClickShowMore;
@property(retain, nonatomic) WCFinderHotSpotTableViewSectionModel *hotSpotSectionModel; // @synthesize hotSpotSectionModel=_hotSpotSectionModel;
@property(retain, nonatomic) WCFinderHotSpotHistorySectionModel *historySectionModel; // @synthesize historySectionModel=_historySectionModel;
@property(nonatomic) __weak id <WCFinderSearchHotSpotViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickShowMore;
- (_Bool)hasMoreHistoryData;
- (unsigned long long)historySectionDataCount;
- (void)reloadHistoryData;
- (void)loadData;
- (id)init;

@end

