//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UIView;
@protocol FavMultiMenuTableViewCellDelegate;

@interface FavMultiMenuTableViewCell : MMMultiMenuTableViewCell
{
    UIView *coverView;
    _Bool m_selected;
    UIView *_m_bkgCardView;
    id <FavMultiMenuTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavMultiMenuTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *m_bkgCardView; // @synthesize m_bkgCardView=_m_bkgCardView;
- (void)moreAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCoverView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

