//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleCell.h"

@class RichTextView, UIImageView, UIView;

@interface MMLiveCommentPubbleUserMySelfCell : MMLiveCommentPubbleCell
{
    RichTextView *_nickLabel;
    UIView *_nickBackView;
    UIView *_selfLikeTagBackView;
    UIImageView *_selfLikeIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selfLikeIconView; // @synthesize selfLikeIconView=_selfLikeIconView;
@property(retain, nonatomic) UIView *selfLikeTagBackView; // @synthesize selfLikeTagBackView=_selfLikeTagBackView;
@property(retain, nonatomic) UIView *nickBackView; // @synthesize nickBackView=_nickBackView;
@property(retain, nonatomic) RichTextView *nickLabel; // @synthesize nickLabel=_nickLabel;
- (void)layoutSelfLikeIconView;
- (void)layoutSelfLikeTagBackView;
- (void)updateCommentLabelOrigin;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (_Bool)isSelfLike;
- (_Bool)isUITypeValid;
- (void)layoutUI;

@end

