//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray;
@protocol FavTagEditViewDelegate;

@interface FavTagTableView : MMUIView
{
    NSMutableArray *m_arrTagListView;
    NSMutableArray *m_arrHeaders;
    id <FavTagEditViewDelegate> m_delegate;
    _Bool autoAdjustHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autoAdjustHeight; // @synthesize autoAdjustHeight;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)unHighLightAllButtons;
- (void)highLightButtons:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

