//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol WCFinderRecommendTabsViewDelegate;

@interface WCFinderRecommendTabsView : UIView
{
    id <WCFinderRecommendTabsViewDelegate> _delegate;
    UIView *_tabUnderLine;
    NSMutableArray *_tabButtons;
    NSArray *_tabListData;
    unsigned long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *tabListData; // @synthesize tabListData=_tabListData;
@property(retain, nonatomic) NSMutableArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIView *tabUnderLine; // @synthesize tabUnderLine=_tabUnderLine;
@property(nonatomic) __weak id <WCFinderRecommendTabsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTabButtonWithScrollPrecent:(double)arg1 fromTabType:(unsigned int)arg2;
- (void)updateTabUnderLineWithScrollPrecent:(double)arg1;
- (void)updateRecommendTabsViewWithScrollPrecent:(double)arg1 fromTabType:(unsigned int)arg2;
- (unsigned long long)getCurrentButtonIndex;
- (void)configRedDotUIWithCategory:(long long)arg1 path:(id)arg2;
- (void)tabButtonSelected:(id)arg1 index:(long long)arg2 manualyTappedType:(unsigned long long)arg3;
- (void)tabButtonClicked:(id)arg1;
- (void)revertButtonSelectedState:(unsigned long long)arg1;
- (void)setButtonSelectedState:(unsigned long long)arg1;
- (void)updateButtonSelectedStateInFullScreenMode:(unsigned long long)arg1;
- (void)updateButtonSelectedStateInNormalMode:(unsigned long long)arg1;
- (void)updateButtonSelectedState:(unsigned long long)arg1;
- (void)updateTabButtonState:(long long)arg1 needAnim:(_Bool)arg2;
- (void)selectTabAtIndex:(long long)arg1 manualyTappedType:(unsigned long long)arg2;
- (double)getCenterButtonWidth;
- (void)adjustTabButtonToRightSpace:(double)arg1;
- (void)adjustTabButtonToLeftSpace:(double)arg1;
- (double)getUILabelWidthWithTips:(id)arg1;
- (double)getTabsButtonMinButtonFontMinification;
- (void)adjustTabButtonToSameFont;
- (void)adjustTabButtonToCenterLayout:(double)arg1;
- (void)judgeShouldUseLeftAlignmentLayoutStyle:(double)arg1;
- (void)updateTabButtonsLayout;
- (_Bool)configTabList:(id)arg1;
- (void)refreshTabLanguage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

