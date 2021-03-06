//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMTemplateMsgScopeItem, MMUIButton, UILabel;
@protocol MMTemplateMsgAuthScopeCellDelegate;

@interface MMTemplateMsgAuthScopeCell : UITableViewCell
{
    MMTemplateMsgScopeItem *_scopeItem;
    id <MMTemplateMsgAuthScopeCellDelegate> _delegate;
    MMUIButton *_checkBoxButton;
    UILabel *_titleLabel;
    MMUIButton *_infoButton;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(nonatomic) __weak id <MMTemplateMsgAuthScopeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onInfoButtonClicked:(id)arg1;
- (void)onCheckBoxButtonClicked:(id)arg1;
- (void)updateScopeItem:(id)arg1;
- (void)layoutSubviews;
- (void)initInfoButton;
- (void)initTitleLabel;
- (void)initCheckBoxView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

