//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FavAttributeCPLabel, UILabel, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView, WCFinderLiveNowView, WCFinderSearchInfo;
@protocol WCFinderSearchContactCollectionViewCellDelegate;

@interface WCFinderSearchContactCollectionViewCell : UICollectionViewCell
{
    id <WCFinderSearchContactCollectionViewCellDelegate> _delegate;
    WCFinderHeadImageView *_avatarImageView;
    FavAttributeCPLabel *_nickNameLabel;
    UILabel *_followLabel;
    UILabel *_friendFollowCountLabel;
    WCFinderAuthInfoIconView *_authInfoIconView;
    FavAttributeCPLabel *_authInfoLabel;
    WCFinderLiveNowView *_liveNowView;
    UIView *_separatorLine;
    WCFinderSearchInfo *_searchInfo;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) WCFinderLiveNowView *liveNowView; // @synthesize liveNowView=_liveNowView;
@property(retain, nonatomic) FavAttributeCPLabel *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UILabel *friendFollowCountLabel; // @synthesize friendFollowCountLabel=_friendFollowCountLabel;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) FavAttributeCPLabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <WCFinderSearchContactCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2;
- (void)prepareForReuse;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

