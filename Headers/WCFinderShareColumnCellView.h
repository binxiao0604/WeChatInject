//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

@class NSArray, RichTextView, UIImageView, UILabel, WCFinderShareColumnCellViewModel;

@interface WCFinderShareColumnCellView : CommonMessageCellView
{
    RichTextView *_titleRichView;
    RichTextView *_detailRichView;
    UIImageView *_tinyIcon;
    NSArray *_feedCellViewArray;
    UILabel *_finderLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *finderLabel; // @synthesize finderLabel=_finderLabel;
@property(retain, nonatomic) NSArray *feedCellViewArray; // @synthesize feedCellViewArray=_feedCellViewArray;
@property(retain, nonatomic) UIImageView *tinyIcon; // @synthesize tinyIcon=_tinyIcon;
@property(retain, nonatomic) RichTextView *detailRichView; // @synthesize detailRichView=_detailRichView;
@property(retain, nonatomic) RichTextView *titleRichView; // @synthesize titleRichView=_titleRichView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)formFinderTopicShareContentViewCreateFeedView:(struct CGSize)arg1;
- (double)addFeedCellViewsWithOriginYReturnMaxOriginY:(double)arg1;
- (void)addTitleLabel;
- (void)layoutContentView;
- (_Bool)canBeReused;

// Remaining properties
@property(retain, nonatomic) WCFinderShareColumnCellViewModel *viewModel;

@end

