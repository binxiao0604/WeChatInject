//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class CContact, UIImageView, UILabel;
@protocol TextStateLikeNumViewDelegate;

@interface TextStateLikeNumView : MMUIButton
{
    _Bool _isSelf;
    _Bool _isLiked;
    id <TextStateLikeNumViewDelegate> _delegate;
    UIImageView *_likeIconImageView;
    UILabel *_numLabel;
    CContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *likeIconImageView; // @synthesize likeIconImageView=_likeIconImageView;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) __weak id <TextStateLikeNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLikeButtonSelected:(id)arg1;
- (void)performLikeAnimate;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setupLayout;
- (void)initUI;
- (void)handleLikeFriendAction:(id)arg1;
- (void)updateByContact:(id)arg1;
- (void)setShowBlurView:(_Bool)arg1;
- (void)updateLikeCount:(long long)arg1;
- (void)updateSelfLikeListWithCount:(long long)arg1;
- (void)updateLikeIcon:(id)arg1 likeCount:(long long)arg2;
- (id)defaultLikeIconIsSelf:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

