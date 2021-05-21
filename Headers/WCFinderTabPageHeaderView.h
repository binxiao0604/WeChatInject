//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "WCFinderTabPageViewBasicProtocol-Protocol.h"
#import "WCFinderTabViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView;
@protocol WCFinderTabPageViewBasicViewDelegate, WCFinderTabViewProtocol;

@interface WCFinderTabPageHeaderView : UIScrollView <WCFinderTabViewDelegate, WCFinderTabPageViewBasicProtocol>
{
    id <WCFinderTabPageViewBasicViewDelegate> delegate;
    long long _alignment;
    double _leftMargin;
    NSMutableArray *_tabViewArray;
    UIView *_lineView;
    UIView<WCFinderTabViewProtocol> *_currentSelectTabView;
    UIView *_tabBGView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *tabBGView; // @synthesize tabBGView=_tabBGView;
@property(retain, nonatomic) UIView<WCFinderTabViewProtocol> *currentSelectTabView; // @synthesize currentSelectTabView=_currentSelectTabView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(copy, nonatomic) NSMutableArray *tabViewArray; // @synthesize tabViewArray=_tabViewArray;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) __weak id <WCFinderTabPageViewBasicViewDelegate> delegate; // @synthesize delegate;
- (void)finderTabPageTabView:(id)arg1 changeToWidth:(double)arg2;
- (void)updateButtonColor;
- (unsigned long long)currentSelectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (void)selectTabView:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)adjustContentOffsetWithTabView:(id)arg1;
- (void)adjustLineViewWithTabView:(id)arg1;
- (void)adjustFrame;
- (void)setUpUI;
- (void)setTabName:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)removeTabAtIndex:(unsigned long long)arg1;
- (void)addTabWithTabView:(id)arg1;
- (void)addTabWithName:(id)arg1;
- (id)genDefaultTabViewArrayWithTabNameArray:(id)arg1;
- (id)initWithTabViewArray:(id)arg1 alignment:(long long)arg2;
- (id)initWithTabViewArray:(id)arg1;
- (id)initWithTabNameArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
