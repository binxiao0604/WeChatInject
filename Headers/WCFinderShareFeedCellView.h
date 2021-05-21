//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMImageLoaderObserver-Protocol.h"
#import "WCFinderShareAbstractCell-Protocol.h"

@class MMWebImageView, NSString, SightIconView, UIImage, UIImageView, UILabel, UIView, WCFinderLiveNowView, WCFinderShareFeedCellViewModel;

@interface WCFinderShareFeedCellView : CommonMessageCellView <MMImageLoaderObserver, WCFinderShareAbstractCell>
{
    MMWebImageView *_avatarImageView;
    UILabel *_nameLabel;
    WCFinderLiveNowView *_liveNowView;
    MMWebImageView *_contentImageView;
    UILabel *_descLabel;
    UIView *_separator;
    UIImageView *_tinyIcon;
    UILabel *_finderLabel;
    SightIconView *_playIconView;
    UIView *_photoCountDotView;
    UIImage *_fullScreenImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIView *photoCountDotView; // @synthesize photoCountDotView=_photoCountDotView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)onAppear;
- (void)doShareAnimation;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)operationMenuItems;
- (void)willOpenShareViewController;
- (struct CGRect)transitionImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionImage;
- (void)layoutPureText;
- (void)layoutDefault;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WCFinderShareFeedCellViewModel *viewModel; // @dynamic viewModel;

@end
