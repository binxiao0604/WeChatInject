//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleCell.h"

@class RichTextView;

@interface MMFinderLiveNotifyStyleCommentPubbleCell : MMLiveCommentPubbleCell
{
    RichTextView *_nickLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *nickLabel; // @synthesize nickLabel=_nickLabel;
- (id)finderPubbleCellFrame;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (void)layoutCommentLabel;
- (id)initWithCellFrame:(id)arg1;

@end

