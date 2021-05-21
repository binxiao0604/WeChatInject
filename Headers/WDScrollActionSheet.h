//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollActionSheet.h"

#import "WDScrollActionSheetHeaderViewDelegate-Protocol.h"

@class NSString, WDScrollActionSheetHeaderView;
@protocol WDScrollActionSheetDelegate;

@interface WDScrollActionSheet : MMScrollActionSheet <WDScrollActionSheetHeaderViewDelegate>
{
    id <WDScrollActionSheetDelegate> _mDelegate;
    WDScrollActionSheetHeaderView *_headerView;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) WDScrollActionSheetHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WDScrollActionSheetDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void)onHeaderViewLinkClick:(id)arg1;
- (void)layoutSubviews;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (id)loadItemArray;
- (void)initHeaderView;
- (void)loadData;
- (id)initWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

