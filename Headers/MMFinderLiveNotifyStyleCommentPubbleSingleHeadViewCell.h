//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveNotifyStyleCommentPubbleCell.h"

@class MMUILabel, MMUIView;

@interface MMFinderLiveNotifyStyleCommentPubbleSingleHeadViewCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    MMUILabel *_signLabel;
    MMUIView *_signBackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *signBackView; // @synthesize signBackView=_signBackView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
- (void)updateCommentLabelOrigin;
- (void)updateNickLabelOrigin;
- (void)updateSignLabelOrigin;
- (void)layoutNickLabel;
- (void)layoutCommentLabel;
- (void)layoutSignLabel;
- (id)signText;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (id)initWithCellFrame:(id)arg1;

@end

