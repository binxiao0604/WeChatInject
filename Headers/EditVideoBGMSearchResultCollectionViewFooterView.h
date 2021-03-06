//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "MMRefreshTableFooterDelegate-Protocol.h"

@class NSString, WCTimeLineFooterView;
@protocol EditVideoBGMSearchResultCollectionViewFooterViewDelegate;

@interface EditVideoBGMSearchResultCollectionViewFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>
{
    double _heightLimit;
    id <EditVideoBGMSearchResultCollectionViewFooterViewDelegate> _delegate;
    WCTimeLineFooterView *_footerView;
}

+ (double)getViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <EditVideoBGMSearchResultCollectionViewFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double heightLimit; // @synthesize heightLimit=_heightLimit;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)removeClickAction;
- (void)resetStatus:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

