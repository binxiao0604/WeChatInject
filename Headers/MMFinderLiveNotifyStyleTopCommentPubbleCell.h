//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveNotifyStyleCommentPubbleCell.h"

@class UIView;

@interface MMFinderLiveNotifyStyleTopCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void)updateLineView;
- (void)layoutLineView;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)layoutSubviews;
- (id)initWithCellFrame:(id)arg1;

@end

