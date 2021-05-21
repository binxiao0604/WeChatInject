//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ILinkEventExt-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderFeedContentTextClickActionDelegate-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class MMUIButton, NSString, UIButton, UILabel, UITapGestureRecognizer, UIView, WCFinderComment, WCFinderFeedContentTextView, WCFinderHeadImageView;
@protocol WCFinderFeedDetailRootCommentCellDelegate;

@interface WCFinderFeedDetailRootCommentCell : UITableViewCell <WCFinderFeedContentTextClickActionDelegate, ILinkEventExt, WCFinderHeadImageViewDelegate, WCFinderContactExt>
{
    _Bool _profileSwitch;
    _Bool _isFriendIdentity;
    _Bool _isFinderIdentity;
    _Bool _enableShowFinder;
    _Bool _isSelfPost;
    id <WCFinderFeedDetailRootCommentCellDelegate> _delegate;
    long long _section;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    UILabel *_authorBadgeLabel;
    WCFinderFeedContentTextView *_textView;
    WCFinderComment *_comment;
    UILabel *_likeNumLabel;
    MMUIButton *_likeBtn;
    UITapGestureRecognizer *_replayTapGestureRecognizer;
    UILabel *_authorLikeLabel;
    UIButton *_failCommentTips;
    UIView *_refContentBackgroundView;
    WCFinderFeedContentTextView *_refContentTextView;
    UIView *_refContentLineView;
    MMUIButton *_moreActionButton;
}

+ (id)getReplyContentWithComment:(id)arg1 isAuthorView:(_Bool)arg2;
+ (double)sectionHeightWith:(id)arg1 width:(double)arg2 forceExpand:(_Bool)arg3 isAuthorView:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelfPost; // @synthesize isSelfPost=_isSelfPost;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(nonatomic) _Bool enableShowFinder; // @synthesize enableShowFinder=_enableShowFinder;
@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) _Bool isFriendIdentity; // @synthesize isFriendIdentity=_isFriendIdentity;
@property(nonatomic) _Bool profileSwitch; // @synthesize profileSwitch=_profileSwitch;
@property(nonatomic) __weak UIView *refContentLineView; // @synthesize refContentLineView=_refContentLineView;
@property(retain, nonatomic) WCFinderFeedContentTextView *refContentTextView; // @synthesize refContentTextView=_refContentTextView;
@property(retain, nonatomic) UIView *refContentBackgroundView; // @synthesize refContentBackgroundView=_refContentBackgroundView;
@property(retain, nonatomic) UIButton *failCommentTips; // @synthesize failCommentTips=_failCommentTips;
@property(retain, nonatomic) UILabel *authorLikeLabel; // @synthesize authorLikeLabel=_authorLikeLabel;
@property(retain, nonatomic) UITapGestureRecognizer *replayTapGestureRecognizer; // @synthesize replayTapGestureRecognizer=_replayTapGestureRecognizer;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) WCFinderComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WCFinderFeedContentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *authorBadgeLabel; // @synthesize authorBadgeLabel=_authorBadgeLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <WCFinderFeedDetailRootCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (void)onFeedContentTextView:(id)arg1 clickReplyUsername:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubCommentWeChat:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickSubComment:(id)arg2 withRect:(struct CGRect)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFeedContentTextClick:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)showCommentMenuView;
- (void)longPress:(id)arg1;
- (void)clickRetryCommentAction;
- (void)clickAvatar;
- (void)onClickMoreAction;
- (void)onClickLikeComment;
- (void)onFinderContactUpdate:(id)arg1;
- (void)showViewHighLightByRefComment;
- (void)prepareForReuse;
- (void)updateAvatarCornerWithAuthorFlag:(_Bool)arg1;
- (void)adjustUILayout;
- (void)adjustNickNameLabelWidth;
- (void)updateWithModel:(id)arg1 width:(double)arg2 isAuthorView:(_Bool)arg3 isCommentClose:(_Bool)arg4 enableShowFinder:(_Bool)arg5 isSelfPost:(_Bool)arg6;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpRefContentView;
- (void)setUpUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
