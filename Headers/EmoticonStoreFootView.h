//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRefreshTableFooterView.h"

@class MMUIActivityIndicatorView, UILabel;

@interface EmoticonStoreFootView : MMRefreshTableFooterView
{
    unsigned int m_lineViewWidth;
    MMUIActivityIndicatorView *m_activityIndicatorView;
    UILabel *m_label;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_lineViewWidth; // @synthesize m_lineViewWidth;
@property(retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView; // @synthesize m_activityIndicatorView;
- (void)onStateOfNoData:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)layoutSubviews;
- (void)dealloc;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

