//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CustomVisualEffectView, MMUIButton, RichTextView, UIImageView, UILabel, WDCommonWishInfo, WDGradientView;
@protocol WDCommonWishCardViewDelegate;

@interface WDCommonWishCardView : UIView
{
    _Bool _isLike;
    _Bool _canLike;
    _Bool _disbaleLayout;
    unsigned int _type;
    id <WDCommonWishCardViewDelegate> _delegate;
    WDCommonWishInfo *_wishInfo;
    CustomVisualEffectView *_effectView;
    WDGradientView *_headGradientView;
    UIView *_headImgView;
    MMUIButton *_headBtn;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    RichTextView *_contentLabel;
    MMUIButton *_likeBtn;
    MMUIButton *_moreBtn;
    UIView *_leftLine;
    UIView *_rightLine;
    UIImageView *_startImgView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disbaleLayout; // @synthesize disbaleLayout=_disbaleLayout;
@property(nonatomic) _Bool canLike; // @synthesize canLike=_canLike;
@property(retain, nonatomic) UIImageView *startImgView; // @synthesize startImgView=_startImgView;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *headBtn; // @synthesize headBtn=_headBtn;
@property(retain, nonatomic) UIView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) WDGradientView *headGradientView; // @synthesize headGradientView=_headGradientView;
@property(retain, nonatomic) CustomVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) WDCommonWishInfo *wishInfo; // @synthesize wishInfo=_wishInfo;
@property(nonatomic) __weak id <WDCommonWishCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
- (void)onMoreBtnClick;
- (void)onProfile;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initBottomArea;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initTopArea;
- (void)initContainerView;
- (void)initSubviews;
- (void)setLayoutDisable;
- (id)initWithWishInfo:(id)arg1 type:(unsigned int)arg2;

@end

