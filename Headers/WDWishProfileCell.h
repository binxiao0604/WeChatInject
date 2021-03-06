//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class CustomVisualEffectView, MMUIButton, RichTextView, UILabel, WDWishProfileCellModel;
@protocol WDWishProfileCellDelegate;

@interface WDWishProfileCell : MMTableViewCell
{
    WDWishProfileCellModel *_viewModel;
    id <WDWishProfileCellDelegate> _delegate;
    CustomVisualEffectView *_effectView;
    RichTextView *_contentLabel;
    UILabel *_likeNumLabel;
    MMUIButton *_likeBtn;
    MMUIButton *_deleteBtn;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) UILabel *likeNumLabel; // @synthesize likeNumLabel=_likeNumLabel;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) CustomVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) __weak id <WDWishProfileCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WDWishProfileCellModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)onDeleteBtnClick;
- (void)onLikeBtnClick;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithViewModel:(id)arg1;

@end

