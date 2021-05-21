//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIImageView, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderHeadImageView;

@interface WCFinderNeayByFeedSectionCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    WCFinderFeedContentVM *_contentVM;
    UIImageView *_tagImageView;
    WCFinderFeedMediaWrap *_currentMediaWrap;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIView *_avatarContainerView;
    CAGradientLayer *_gradientLayer;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UIView *_authInfoIconBGView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *authInfoIconBGView; // @synthesize authInfoIconBGView=_authInfoIconBGView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCFinderFeedMediaWrap *currentMediaWrap; // @synthesize currentMediaWrap=_currentMediaWrap;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateImage:(id)arg1;
- (void)reloadImage;
- (void)updateContentWith:(id)arg1;
- (void)adjustUIMargin;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

