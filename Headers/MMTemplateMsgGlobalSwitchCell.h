//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch;
@protocol MMTemplateMsgGlobalSwitchCellDelegate;

@interface MMTemplateMsgGlobalSwitchCell : UITableViewCell
{
    UILabel *_titleLabel;
    UISwitch *_ctrlSwitch;
    id <MMTemplateMsgGlobalSwitchCellDelegate> _delegate;
}

+ (double)cellHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMTemplateMsgGlobalSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateTitle:(id)arg1 ctrlSwitch:(_Bool)arg2;
- (void)layoutSubviews;
- (void)onCtrlSwitchChanged:(id)arg1;
- (void)initCtrlSwitch;
- (void)initTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

