//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class AppDefaultMessageViewModel, UIImageView, UILabel;

@interface AppDefaultMessageCellView : CommonMessageCellView
{
    UIImageView *m_thumbImageView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

- (void).cxx_destruct;
- (void)updateThumbImage;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)addThumbImageView;
- (void)addDescLabel;
- (void)addTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) AppDefaultMessageViewModel *viewModel; // @dynamic viewModel;

@end

