//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseRecommendMsgCellView.h"

@class BTReaderStyleRecommendMsgShowAllCellViewModel, MMUILabel, UIImageView;

@interface BTReaderStyleRecommendMsgShowAllCellView : BTBaseRecommendMsgCellView
{
    MMUILabel *m_titleLabel;
    UIImageView *m_arrowView;
}

- (void).cxx_destruct;
- (void)initArrowView;
- (void)initTitleLabel;
- (void)layoutSubviews;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTReaderStyleRecommendMsgShowAllCellViewModel *viewModel;

@end

