//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, WACommentScoreViewModel;
@protocol WACommentScoreViewDelegate;

@interface WACommentScoreView : MMUIView
{
    id <WACommentScoreViewDelegate> _delegate;
    NSArray *_starViewArray;
    WACommentScoreViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WACommentScoreViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *starViewArray; // @synthesize starViewArray=_starViewArray;
@property(nonatomic) __weak id <WACommentScoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getHalfRankImage;
- (id)getRankImage;
- (id)getHollowImage;
- (void)onClickStarButton:(id)arg1;
- (unsigned int)currentScore;
- (void)showAllStar;
- (void)hideAllStar;
- (void)setHollow:(id)arg1;
- (void)setRank:(id)arg1;
- (void)setHalfRank:(id)arg1;
- (void)setScore:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end

