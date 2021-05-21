//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WAContactMgrExtension-Protocol.h"

@class MMWebImageView, NSString, UIImageView, UILabel, UIView, WAAppItemData;

@interface WAMainFrameTaskBarSectionWeAppCell : UICollectionViewCell <WAContactMgrExtension>
{
    _Bool _isShowAsMore;
    _Bool _darkStyle;
    MMWebImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_debugLabel;
    UIView *_highlightMaskView;
    UIImageView *_fromOuterTagView;
    WAAppItemData *_taskItem;
    NSString *_headImageUrl;
}

+ (id)getDisplayName:(id)arg1;
+ (double)getNameLabelToHeadImageMargin;
+ (double)getMoreIconWidth;
+ (double)getHeaderWidth;
+ (double)itemInnerMargin;
+ (double)itemHeight:(id)arg1;
+ (double)itemWidth;
+ (double)itemSizeFactor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) WAAppItemData *taskItem; // @synthesize taskItem=_taskItem;
@property(retain, nonatomic) UIImageView *fromOuterTagView; // @synthesize fromOuterTagView=_fromOuterTagView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool darkStyle; // @synthesize darkStyle=_darkStyle;
@property(nonatomic) _Bool isShowAsMore; // @synthesize isShowAsMore=_isShowAsMore;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onContactUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)initView;
- (id)accessibilityLabel;
- (void)spotlight;
- (void)showHighlight:(_Bool)arg1;
- (id)getCurrentTaskItem;
- (id)getDragView;
- (void)updateTaskItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
