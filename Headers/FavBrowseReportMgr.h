//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"

@class FavBrowseDetailData, NSMutableArray, NSString;

@interface FavBrowseReportMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    _Bool m_needClickStream;
    NSMutableArray *m_arrClickStreamData;
    _Bool m_needAttachBrowseData;
    FavBrowseDetailData *_currentBrowseData;
}

+ (id)findScrollVeiwIn:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FavBrowseDetailData *currentBrowseData; // @synthesize currentBrowseData=_currentBrowseData;
- (void)adaptClickStreamReportForVC:(id)arg1;
- (void)endLogAndReport15508;
- (void)addClickStreamData:(id)arg1;
- (void)startLogFavClickStream;
- (void)adaptBrowseDetailReportForVC:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

