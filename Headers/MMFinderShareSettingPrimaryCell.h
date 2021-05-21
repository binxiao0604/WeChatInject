//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, UILabel;
@protocol MMFinderShareSettingPrimaryCellDelegate;

@interface MMFinderShareSettingPrimaryCell : UIView
{
    _Bool _isCellDisabled;
    _Bool _isCellToggleArrowShown;
    _Bool _isCellArrowChecked;
    id <MMFinderShareSettingPrimaryCellDelegate> _primaryCellDelegate;
    UIView *_itemCell;
    UILabel *_shareSettingTitle;
    UILabel *_shareSettingSubtitle;
    UIView *_separator;
    UIView *_checkIconView;
    long long _visibilityMode;
    MMUIButton *_toggleCellArrow;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isCellArrowChecked; // @synthesize isCellArrowChecked=_isCellArrowChecked;
@property(retain, nonatomic) MMUIButton *toggleCellArrow; // @synthesize toggleCellArrow=_toggleCellArrow;
@property(nonatomic) _Bool isCellToggleArrowShown; // @synthesize isCellToggleArrowShown=_isCellToggleArrowShown;
@property(nonatomic) _Bool isCellDisabled; // @synthesize isCellDisabled=_isCellDisabled;
@property(nonatomic) long long visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) UIView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *shareSettingSubtitle; // @synthesize shareSettingSubtitle=_shareSettingSubtitle;
@property(retain, nonatomic) UILabel *shareSettingTitle; // @synthesize shareSettingTitle=_shareSettingTitle;
@property(retain, nonatomic) UIView *itemCell; // @synthesize itemCell=_itemCell;
@property(nonatomic) __weak id <MMFinderShareSettingPrimaryCellDelegate> primaryCellDelegate; // @synthesize primaryCellDelegate=_primaryCellDelegate;
- (void)onCellArrowToggle;
- (void)onClickVisibilityCell;
- (void)setCellToggleArrowShown;
- (void)setCellDisabled;
- (double)getUpdateCellHeight;
- (void)unToggle;
- (void)toggle;
- (void)updateWithVisibilityMode:(long long)arg1;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andVisibilityMode:(long long)arg2;

@end

