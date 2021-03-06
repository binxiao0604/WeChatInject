//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMUILabel, RichTextView, UIButton, UIImageView, UIView, WDCommonHeadImageView, WDGradientView, WDLikeWishInfo;
@protocol WDLikeCellDelegate;

@interface WDLikeCell : MMTableViewCell
{
    WDLikeWishInfo *_likeInfo;
    id <WDLikeCellDelegate> _delegate;
    WDCommonHeadImageView *_headImage;
    UIButton *_headImgBtn;
    UIImageView *_bgColor;
    WDGradientView *_blinkView;
    MMUILabel *_name;
    MMUILabel *_friendTag;
    MMUILabel *_time;
    UIView *_container;
    RichTextView *_content;
    UIView *_footLine;
    UIImageView *_star;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *star; // @synthesize star=_star;
@property(retain, nonatomic) UIView *footLine; // @synthesize footLine=_footLine;
@property(retain, nonatomic) RichTextView *content; // @synthesize content=_content;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) MMUILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) MMUILabel *friendTag; // @synthesize friendTag=_friendTag;
@property(retain, nonatomic) MMUILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) WDGradientView *blinkView; // @synthesize blinkView=_blinkView;
@property(retain, nonatomic) UIImageView *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIButton *headImgBtn; // @synthesize headImgBtn=_headImgBtn;
@property(retain, nonatomic) WDCommonHeadImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) __weak id <WDLikeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDLikeWishInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
- (void)onHeadImageClick;
- (void)updateLike:(id)arg1 headLine:(_Bool)arg2 footLine:(_Bool)arg3;
- (void)initializeSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

