//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleView.h"

@class MMLiveCommentDataItem, MMLiveCommentPubbleCellFrame, RichTextView;

@interface MMLiveCommentPubbleCell : MMLiveCommentPubbleView
{
    MMLiveCommentPubbleCellFrame *_cellFrame;
    RichTextView *_commentLabel;
    MMLiveCommentDataItem *_commentItem;
}

+ (double)liveCommentPubbleCellToCellMargin;
+ (double)standardLiveCommentPubbleCellHeight;
+ (id)createPubbleCellWithCellFrame:(id)arg1 forStyle:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(retain, nonatomic) RichTextView *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MMLiveCommentPubbleCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
- (id)getCommentItem;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)layoutSubviews;
- (_Bool)reuseWithCellFrame:(id)arg1;
- (id)initWithCellFrame:(id)arg1;

@end
