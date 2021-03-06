//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCShareCardBaseHeaderView.h"

@class NSString, WCShareCardMemberHeaderCardImageView, WCShareCardMemberHeaderGiftInfo;
@protocol WCShareCardMemberCustomImgHeaderDelegate;

@interface WCShareCardMemberCustomImgHeaderView : WCShareCardBaseHeaderView
{
    _Bool _hasDetailView;
    _Bool _acceptAble;
    id <WCShareCardMemberCustomImgHeaderDelegate> _delegate;
    NSString *_title;
    WCShareCardMemberHeaderGiftInfo *_giftInfo;
    WCShareCardMemberHeaderCardImageView *_cardImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool acceptAble; // @synthesize acceptAble=_acceptAble;
@property(retain, nonatomic) WCShareCardMemberHeaderCardImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) WCShareCardMemberHeaderGiftInfo *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool hasDetailView; // @synthesize hasDetailView=_hasDetailView;
@property(nonatomic) __weak id <WCShareCardMemberCustomImgHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBannerTap:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (void)onInfoBtnClick:(id)arg1;
- (void)fieldClicked:(id)arg1;
- (_Bool)hasReceive;
- (id)getBrandColor;
- (id)insertSpaceChar:(id)arg1 hasTransline:(_Bool)arg2;
- (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7 needShadow:(_Bool)arg8;
- (void)setFrame:(struct CGRect)arg1;
- (id)createSecondaryFieldView;
- (id)createCardImgView;
- (id)createBannerView;
- (id)createGiftInfoView;
- (void)getInvalidStatusTitle;
- (void)setupView;
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShareCard:(_Bool)arg3 acceptAble:(_Bool)arg4 cardStatus:(int)arg5 isNeedHideAcceptBtn:(_Bool)arg6 delegate:(id)arg7 isHasDetailView:(_Bool)arg8 giftInfo:(id)arg9 cardImgView:(id)arg10;

@end

