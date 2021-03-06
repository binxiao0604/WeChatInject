//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor, UIView;

@interface MMUnderlineTabsView : UIControl
{
    UIColor *_underlineDefaultColor;
    unsigned long long _selectedTabIndex;
    UIView *_contentView;
    UIView *_underlineView;
    NSMutableArray *_itemInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
@property(retain, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(retain, nonatomic) UIColor *underlineDefaultColor; // @synthesize underlineDefaultColor=_underlineDefaultColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setSelectedTabIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutUnderlineViewWithTabInfo:(id)arg1;
- (void)layoutTabViewWithTabInfo:(id)arg1;
- (void)updateWithTabItems:(id)arg1;
- (id)tabItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) double preferWidth;
@property(readonly, nonatomic) unsigned long long numberOfTabItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

