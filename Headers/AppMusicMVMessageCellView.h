//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMMusicPlayerContollerDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"

@class AppMusicBlurCoverView, AppMusicMVMessageViewModel, CAShapeLayer, MMMusicPlayerContoller, MMWebImageView, NSString, UIImageView, UILabel;

@interface AppMusicMVMessageCellView : CommonMessageCellView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    UILabel *m_titleLabel;
    UILabel *m_singerLabel;
    UILabel *m_mvLabel;
    UILabel *m_whoseMVlabel;
    MMWebImageView *m_thumbImageView;
    UIImageView *m_blurBgImageView;
    CAShapeLayer *m_blurBgMaskLayer;
    AppMusicBlurCoverView *m_blurCoverImageView;
    MMMusicPlayerContoller *_playButton;
    _Bool _bHasAddBlur;
}

- (void).cxx_destruct;
- (void)onClickAsRefer;
- (_Bool)handleMagicTapAction:(id)arg1;
- (void)addMagicTapActions:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(_Bool)arg3;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (id)viewControllerForPreview:(id)arg1;
- (id)urlForPreView:(id)arg1;
- (_Bool)canPeek;
- (void)onAppear;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)onLoadImageOK:(id)arg1;
- (void)updateThumbImage;
- (void)addMusicPlayView;
- (double)calBlurImageHeight;
- (void)addBlurBgCoverView;
- (id)blurCoverImageView;
- (void)addBlurBgView;
- (void)addBlurEffectAlbumView;
- (void)initWhoseMVLabel;
- (void)initMVLabel;
- (void)initSingerDetailLabel;
- (void)initTitleLabel;
- (void)initThumbImageView;
- (void)layoutContentView;
- (void)updateStatus;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppMusicMVMessageViewModel *viewModel; // @dynamic viewModel;

@end

