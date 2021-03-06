//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderHeadImageView;

@interface WCFinderLiveListCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_liveStopView;
    UIImageView *_viewIconView;
    UILabel *_viewNumLabel;
    UIView *_avatarBGView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIView *_blurBGView;
    WCFinderFeedContentVM *_dataModel;
    WCFinderFeedMediaWrap *_currentMediaWrap;
    UIView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) WCFinderFeedMediaWrap *currentMediaWrap; // @synthesize currentMediaWrap=_currentMediaWrap;
@property(retain, nonatomic) WCFinderFeedContentVM *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIView *blurBGView; // @synthesize blurBGView=_blurBGView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarBGView; // @synthesize avatarBGView=_avatarBGView;
@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) UIImageView *viewIconView; // @synthesize viewIconView=_viewIconView;
@property(retain, nonatomic) UIView *liveStopView; // @synthesize liveStopView=_liveStopView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateImage:(id)arg1;
- (void)reloadImage;
- (void)updateWith:(id)arg1;
- (void)adjustViewBlurMargin;
- (void)adjustUIMargin;
- (void)initSubView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

