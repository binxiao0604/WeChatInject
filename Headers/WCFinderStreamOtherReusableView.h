//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ILinkEventExt-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderLiveNoticeViewDelegate-Protocol.h"
#import "WCFinderProfileEventViewDelegate-Protocol.h"

@class MMUILabel, MMWebImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCFinderAnimationLoadingView, WCFinderAuthInfoIconView, WCFinderContact, WCFinderHeadImageView, WCFinderMaskButton, WCFinderProfileCardContainer, WCFinderStreamProfileExtInfo;
@protocol WCFinderStreamHeaderActionProtocol;

@interface WCFinderStreamOtherReusableView : UICollectionReusableView <WCFinderContactExt, WCFinderHeadImageViewDelegate, ILinkEventExt, WCFinderLiveNoticeViewDelegate, WCFinderProfileEventViewDelegate, MMWebImageViewDelegate>
{
    _Bool _isHiddenFollow;
    id <WCFinderStreamHeaderActionProtocol> _delegate;
    MMWebImageView *_brandImageView;
    UIView *_avatarContainerView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UILabel *_genderLabel;
    UILabel *_addressLabel;
    RichTextView *_signatureLabel;
    WCFinderMaskButton *_privateMsgBtn;
    WCFinderMaskButton *_followBtn;
    unsigned long long _followState;
    WCFinderAuthInfoIconView *_authInfoIconView;
    UIView *_authInfoView;
    RichTextView *_authInfoLabel;
    UIImageView *_friendFollowIconImageView;
    MMUILabel *_friendFollowCountLabel;
    UIView *_storeView;
    UIImageView *_storeIconView;
    UILabel *_storeLabel;
    UIView *_poiInfoDetailView;
    UIButton *_poiInfoDetailMoreBtn;
    MMUILabel *_poiInfoDetailLabel;
    UIImageView *_poiInfoIconImageView;
    UIImageView *_blockPosterIconView;
    UIImageView *_mpBrandIconView;
    UILabel *_mpBrandLabel;
    UIImageView *_miniAppIconView;
    UILabel *_miniAppLabel;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderContact *_contact;
    WCFinderStreamProfileExtInfo *_profileExtInfo;
    WCFinderProfileCardContainer *_cardContainer;
}

+ (id)getFollowBtnTitleWithFollowState:(unsigned long long)arg1 isPrivateAcount:(_Bool)arg2;
+ (double)headerHeightWith:(id)arg1 width:(double)arg2 isHiddenFollow:(_Bool)arg3 extInfo:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileCardContainer *cardContainer; // @synthesize cardContainer=_cardContainer;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *profileExtInfo; // @synthesize profileExtInfo=_profileExtInfo;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isHiddenFollow; // @synthesize isHiddenFollow=_isHiddenFollow;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *miniAppLabel; // @synthesize miniAppLabel=_miniAppLabel;
@property(retain, nonatomic) UIImageView *miniAppIconView; // @synthesize miniAppIconView=_miniAppIconView;
@property(retain, nonatomic) UILabel *mpBrandLabel; // @synthesize mpBrandLabel=_mpBrandLabel;
@property(retain, nonatomic) UIImageView *mpBrandIconView; // @synthesize mpBrandIconView=_mpBrandIconView;
@property(retain, nonatomic) UIImageView *blockPosterIconView; // @synthesize blockPosterIconView=_blockPosterIconView;
@property(retain, nonatomic) UIImageView *poiInfoIconImageView; // @synthesize poiInfoIconImageView=_poiInfoIconImageView;
@property(retain, nonatomic) MMUILabel *poiInfoDetailLabel; // @synthesize poiInfoDetailLabel=_poiInfoDetailLabel;
@property(retain, nonatomic) UIButton *poiInfoDetailMoreBtn; // @synthesize poiInfoDetailMoreBtn=_poiInfoDetailMoreBtn;
@property(retain, nonatomic) UIView *poiInfoDetailView; // @synthesize poiInfoDetailView=_poiInfoDetailView;
@property(retain, nonatomic) UILabel *storeLabel; // @synthesize storeLabel=_storeLabel;
@property(retain, nonatomic) UIImageView *storeIconView; // @synthesize storeIconView=_storeIconView;
@property(retain, nonatomic) UIView *storeView; // @synthesize storeView=_storeView;
@property(retain, nonatomic) MMUILabel *friendFollowCountLabel; // @synthesize friendFollowCountLabel=_friendFollowCountLabel;
@property(retain, nonatomic) UIImageView *friendFollowIconImageView; // @synthesize friendFollowIconImageView=_friendFollowIconImageView;
@property(retain, nonatomic) RichTextView *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) UIView *authInfoView; // @synthesize authInfoView=_authInfoView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(nonatomic) unsigned long long followState; // @synthesize followState=_followState;
@property(retain, nonatomic) WCFinderMaskButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) WCFinderMaskButton *privateMsgBtn; // @synthesize privateMsgBtn=_privateMsgBtn;
@property(retain, nonatomic) RichTextView *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) MMWebImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(nonatomic) __weak id <WCFinderStreamHeaderActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageOK:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copyText:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFinderContactShieldFeedChanged;
- (void)onFinderContactFollowUnFollowStart;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onClickPOIDetailMoreBtn:(id)arg1;
- (void)onClickPOIDetailView:(id)arg1;
- (void)tapAuthInfoView:(id)arg1;
- (void)startUnFollowAnimation;
- (void)adjustNickNameFrame;
- (void)updateFollowBtnUI:(id)arg1;
- (void)onTapEventView:(id)arg1;
- (void)onClickMiniApp;
- (void)clickMPBrandView;
- (void)clickStoreView;
- (void)onClickGuarantorView:(id)arg1;
- (void)didClickPrivateMsgBtn:(id)arg1;
- (void)didClickFollowBtn:(id)arg1;
- (void)clickAvatar;
- (id)createTagLabel;
- (id)createTagBackGroundView;
- (void)updateUIWithContact:(id)arg1 isHiddenFollow:(_Bool)arg2 extInfo:(id)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (double)layoutNameLabelTailViews:(id)arg1 secondLineTailViews:(id)arg2 rightViews:(id)arg3 space:(double)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

