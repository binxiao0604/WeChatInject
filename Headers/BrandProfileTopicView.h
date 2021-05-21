//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class BrandProfileTopicViewModel, CAGradientLayer, MMUIButton, NSMutableArray;
@protocol BrandProfileTopicViewDelegate;

@interface BrandProfileTopicView : MMUIView
{
    id <BrandProfileTopicViewDelegate> _delegate;
    BrandProfileTopicViewModel *_viewModel;
    MMUIButton *_unfoldButton;
    CAGradientLayer *_unfoldGradientLayer;
    NSMutableArray *_topicButtonList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *topicButtonList; // @synthesize topicButtonList=_topicButtonList;
@property(retain, nonatomic) CAGradientLayer *unfoldGradientLayer; // @synthesize unfoldGradientLayer=_unfoldGradientLayer;
@property(retain, nonatomic) MMUIButton *unfoldButton; // @synthesize unfoldButton=_unfoldButton;
@property(retain, nonatomic) BrandProfileTopicViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BrandProfileTopicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onUnfoldButtonClicked:(id)arg1;
- (void)onTopicButtonClicked:(id)arg1;
- (void)updateSubviewsUseViewModel;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)setupSubviews;
- (id)initWithViewModel:(id)arg1;

@end

