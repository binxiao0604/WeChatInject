//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMWebImageViewDelegate-Protocol.h"
#import "WCFinderShareLiveCellViewDelegate-Protocol.h"

@class MMWebImageView, NSString, UIImageView, UILabel, UIView, WCFinderLiveNowView, WCFinderShareLiveCellViewModel;

@interface WCFinderShareLiveCellView : CommonMessageCellView <WCFinderShareLiveCellViewDelegate, MMWebImageViewDelegate>
{
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIView *_coverViewContainer;
    MMWebImageView *_contentImageView;
    UIView *_liveMaskView;
    WCFinderLiveNowView *_liveMaskTipsView;
    WCFinderLiveNowView *_liveNowView;
    UILabel *_descLabel;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) WCFinderLiveNowView *liveMaskTipsView; // @synthesize liveMaskTipsView=_liveMaskTipsView;
@property(retain, nonatomic) UIView *liveMaskView; // @synthesize liveMaskView=_liveMaskView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIView *coverViewContainer; // @synthesize coverViewContainer=_coverViewContainer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)onLiveStatusChanged;
- (void)doShareAnimation;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (struct CGRect)transitionImageRectInView:(id)arg1;
- (id)transitionImage;
- (void)refreshLiveMaskEffect;
- (void)layoutDefault;
- (void)layoutFinished;
- (void)layoutInternal;
- (void)prepareForReuse;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) WCFinderShareLiveCellViewModel *viewModel; // @dynamic viewModel;

@end

