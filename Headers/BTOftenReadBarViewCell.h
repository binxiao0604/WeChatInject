//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class BTBrandBarScrollView, BTOftenReadHeaderView, BTOftenReadSectionData, NSArray, NSMutableArray, NSString;
@protocol BTOftenReadBarViewCellDelegate;

@interface BTOftenReadBarViewCell : MMTableViewCell <UIScrollViewDelegate>
{
    BTOftenReadSectionData *_sectionData;
    id <BTOftenReadBarViewCellDelegate> _barViewDelegate;
    BTOftenReadHeaderView *_headerView;
    BTBrandBarScrollView *_scrollView;
    NSMutableArray *_itemViewArr;
    unsigned long long _itemNumPerPage;
    unsigned long long _pageIndexBeforeScroll;
}

+ (double)barViewHeight;
+ (double)headerViewHeight;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long pageIndexBeforeScroll; // @synthesize pageIndexBeforeScroll=_pageIndexBeforeScroll;
@property(nonatomic) unsigned long long itemNumPerPage; // @synthesize itemNumPerPage=_itemNumPerPage;
@property(retain, nonatomic) NSMutableArray *itemViewArr; // @synthesize itemViewArr=_itemViewArr;
@property(retain, nonatomic) BTBrandBarScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) BTOftenReadHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <BTOftenReadBarViewCellDelegate> barViewDelegate; // @synthesize barViewDelegate=_barViewDelegate;
@property(retain, nonatomic) BTOftenReadSectionData *sectionData; // @synthesize sectionData=_sectionData;
- (void)updateHeaderViewPosWithContentOffsetX:(double)arg1;
- (void)onClickContact:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setItemViewAlpha:(id)arg1;
- (double)itemViewWidth;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *visibleItemViewArr;
- (void)initSubviews;
- (void)resetPosition;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

