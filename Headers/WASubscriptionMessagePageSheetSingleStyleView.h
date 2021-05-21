//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WASubscriptionMessagePageSheetContentViewProtocol-Protocol.h"
#import "WASubscriptionMessagePageSheetFooterViewDelegate-Protocol.h"
#import "WASubscriptionMessagePageSheetHeaderViewDelegate-Protocol.h"

@class NSString, UILabel, WASubscriptionMessagePageSheetFooterView, WASubscriptionMessagePageSheetHeaderView, WASubscriptionMessagePageSheetViewModel;
@protocol WASubscriptionMessagePageSheetContentViewDelegate;

@interface WASubscriptionMessagePageSheetSingleStyleView : MMUIView <WASubscriptionMessagePageSheetHeaderViewDelegate, WASubscriptionMessagePageSheetFooterViewDelegate, WASubscriptionMessagePageSheetContentViewProtocol>
{
    id <WASubscriptionMessagePageSheetContentViewDelegate> contentViewDelegate;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    WASubscriptionMessagePageSheetHeaderView *_headerView;
    WASubscriptionMessagePageSheetFooterView *_footerView;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) WASubscriptionMessagePageSheetFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WASubscriptionMessagePageSheetHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate;
- (void)onFooterViewDeclineButtonClicked:(id)arg1;
- (void)onFooterViewCancelButtonClicked:(id)arg1;
- (void)onFooterViewConfirmButtonClicked:(id)arg1;
- (void)onHeaderViewInfoButtonClicked:(id)arg1;
- (double)calculateDescriptionHeight:(double)arg1;
- (void)addSubViews:(id)arg1;
- (void)loadAllSubviews;
- (void)layoutSubviews;
- (double)calculateHeight:(double)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

