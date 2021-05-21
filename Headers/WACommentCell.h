//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, MMWebImageView, NSDateFormatter, WACommentScoreView, WACommentScoreViewModel, WeAppComment;

@interface WACommentCell : UITableViewCell
{
    MMWebImageView *_headImgView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_postTimeLabel;
    MMUILabel *_msgLabel;
    WACommentScoreView *_scoreView;
    WACommentScoreViewModel *_scoreViewModel;
    WeAppComment *_comment;
    NSDateFormatter *_dateFormatter;
}

+ (double)calcHeightForComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) WeAppComment *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) WACommentScoreViewModel *scoreViewModel; // @synthesize scoreViewModel=_scoreViewModel;
@property(retain, nonatomic) WACommentScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) MMUILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) MMUILabel *postTimeLabel; // @synthesize postTimeLabel=_postTimeLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
- (_Bool)isCommentNeedShowFriendTip:(id)arg1;
- (void)configureWithComment:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
