//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameCenterMsgListBaseCell.h"

@class MMUILabel, MMWebImageView, RichTextView;

@interface GameCenterMsgListInteractMsgCell : GameCenterMsgListBaseCell
{
    RichTextView *_commentView;
    MMUILabel *_descLabel;
    MMWebImageView *_descImageView;
    MMUILabel *_countLabel;
}

+ (id)convertRichText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMWebImageView *descImageView; // @synthesize descImageView=_descImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) RichTextView *commentView; // @synthesize commentView=_commentView;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)updateWithCellData:(id)arg1;
- (void)setupGameCenterMsgListInteractMsgCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

