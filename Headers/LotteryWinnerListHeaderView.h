//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMFinderLiveLotteryInfo, MMUILabel, UIImageView;

@interface LotteryWinnerListHeaderView : UIView
{
    UIView *_lotteryIconView;
    UIImageView *_lotteryIconImg;
    MMUILabel *_lotteryDescriptionTitleLabel;
    MMUILabel *_lotteryActionTitleLabel;
    MMUILabel *_lotteryWinTimeTitleLabel;
    UIView *_sepelateLine;
    MMFinderLiveLotteryInfo *_lotteryInfo;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryInfo *lotteryInfo; // @synthesize lotteryInfo=_lotteryInfo;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUILabel *lotteryWinTimeTitleLabel; // @synthesize lotteryWinTimeTitleLabel=_lotteryWinTimeTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryActionTitleLabel; // @synthesize lotteryActionTitleLabel=_lotteryActionTitleLabel;
@property(retain, nonatomic) MMUILabel *lotteryDescriptionTitleLabel; // @synthesize lotteryDescriptionTitleLabel=_lotteryDescriptionTitleLabel;
@property(retain, nonatomic) UIImageView *lotteryIconImg; // @synthesize lotteryIconImg=_lotteryIconImg;
@property(retain, nonatomic) UIView *lotteryIconView; // @synthesize lotteryIconView=_lotteryIconView;
- (id)innerGetLotteryAttendTypeStr;
- (void)updateLotteryInfo:(id)arg1;
- (void)layoutSepelateLine;
- (void)layoutLotteryWinTimeTitleLabel;
- (void)layoutLotteryActionTitleLabel;
- (void)layoutLotteryDescriptionTitleLabel;
- (void)layoutLotteryIcon;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

