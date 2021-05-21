//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class BTBaseItemCellViewModel;
@protocol BTBaseItemCellViewDelegate;

@interface BTBaseItemCellView : MMTableViewCell
{
    BTBaseItemCellViewModel *_viewModel;
    id <BTBaseItemCellViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BTBaseItemCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <BTBaseItemCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCoverImageView;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

@end
