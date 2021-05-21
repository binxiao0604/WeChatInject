//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUILabel, UIView, WCFinderHeadImageView;

@interface WCFinderCommentIdentityTableViewCell : MMTableViewCell
{
    WCFinderHeadImageView *_avatarImageView;
    MMUILabel *_tipsLabel;
    MMUILabel *_nicknameLabel;
    UIView *_seperateLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)updateWithHeadUrl:(id)arg1 nickname:(id)arg2 isFinder:(_Bool)arg3;
- (void)initNicknameLabel;
- (void)initTipsLabel;
- (void)initAvatarImageView;
- (void)initSeperateLine;
- (void)setUpUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
