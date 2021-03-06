//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderTableViewCell.h"

#import "WCFinderLiveNoticeCellViewModelDelegate-Protocol.h"

@class MMUIButton, NSString, UIImageView, UILabel, UIView, WCFinderContact, WCFinderLiveNoticeCellViewModel;
@protocol WCFinderLiveNoticeTableViewCellDelegate;

@interface WCFinderLiveNoticeTableViewCell : WCFinderTableViewCell <WCFinderLiveNoticeCellViewModelDelegate>
{
    _Bool _isInDarkMode;
    UIView *_liveNoticeView;
    id <WCFinderLiveNoticeTableViewCellDelegate> _delegate;
    WCFinderContact *_contact;
    UIImageView *_liveIconView;
    UILabel *_noticeInfoLabel;
    UIView *_separatorLineView;
    MMUIButton *_actionButton;
    WCFinderLiveNoticeCellViewModel *_viewModel;
}

+ (double)heightWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(retain, nonatomic) WCFinderLiveNoticeCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UILabel *noticeInfoLabel; // @synthesize noticeInfoLabel=_noticeInfoLabel;
@property(retain, nonatomic) UIImageView *liveIconView; // @synthesize liveIconView=_liveIconView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WCFinderLiveNoticeTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *liveNoticeView; // @synthesize liveNoticeView=_liveNoticeView;
- (void)finderLiveNoticeInfoUpdate;
- (void)finderLiveNoticeStatusChange;
- (id)topViewController:(id)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (void)layoutUI;
- (void)updateButtonWithReserveState:(unsigned long long)arg1;
- (void)switchToDarkMode:(_Bool)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)updateNoticeViewLeft:(double)arg1;
- (void)updateNoticeTipsLabelBackgroundColor:(id)arg1;
- (void)updateNoticeTipsLabelColor:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

