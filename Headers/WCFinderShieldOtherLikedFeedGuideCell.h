//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface WCFinderShieldOtherLikedFeedGuideCell : UITableViewCell
{
    UILabel *_tipsLabel;
    UIView *_lineView;
}

+ (double)heightWithInfo:(id)arg1 width:(double)arg2;
+ (id)createLabel;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;

@end
