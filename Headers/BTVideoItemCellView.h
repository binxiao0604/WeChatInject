//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellView.h"

@class BTVideoItemCellAutoPlayerView, BTVideoItemCellViewModel, CAGradientLayer, MMUILabel, SightIconView, UIView;

@interface BTVideoItemCellView : BTReaderItemCellView
{
    CAGradientLayer *m_maskLayer;
    UIView *m_playerBtnContainerView;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
    MMUILabel *m_autoPlayVideoTimeLabel;
    CAGradientLayer *m_autoPlayVideoTitleMaskLayer;
    BTVideoItemCellAutoPlayerView *m_lastAddedPlayerView;
}

- (void).cxx_destruct;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)resetLastAddedPlayerView;
- (void)onVideoPlayerPrepareToPlay;
- (void)onVideoPlayerPlay;
- (void)onVideoPlayerBeginBuffering;
- (void)doAnimationFromCoverImageToVideoPlayerView;
- (void)updateViewWhenStatusIsDestory;
- (void)updateViewWhenStatusIsPlay;
- (void)removeVideoPlayTitleCoverMaskLayer;
- (void)setVideoPlayTitleCoverMaskLayer;
- (void)updateVideoTimeLabel;
- (void)initVideoPlayTitleCoverMaskLayer;
- (void)initVideoTimeLabel;
- (void)initVideoPlayerView;
- (void)updateViewByVideoAutoPlayStatus;
- (void)updateTitleView:(_Bool)arg1;
- (void)updateTimeLabel;
- (void)initTimeLabel;
- (void)initPlayIconView;
- (void)onUpdateViewModel;
- (void)initCoverMaskLayer;
- (void)initCoverView;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BTVideoItemCellViewModel *viewModel; // @dynamic viewModel;

@end

