//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;
@protocol FinderStatViewCellDelegate;

@interface FinderStatViewCell : UIView
{
    MMUILabel *_rowCountNumber;
    MMUIButton *_rowTitleArrowButton;
    id <FinderStatViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FinderStatViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *rowTitleArrowButton; // @synthesize rowTitleArrowButton=_rowTitleArrowButton;
@property(retain, nonatomic) MMUILabel *rowCountNumber; // @synthesize rowCountNumber=_rowCountNumber;
- (void)onClickToTotalGiftStats;
- (void)onClickToTotalUserStats;
- (void)updateWithTitle:(id)arg1 countNumber:(id)arg2 withAction:(SEL)arg3;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
