//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KidsWatchBaseViewController.h"

@class KidsWatchButton, KidsWatchTipsCardView;
@protocol KidsWatchKidsRegisterEntryViewControllerDelegate;

@interface KidsWatchKidsRegisterEntryViewController : KidsWatchBaseViewController
{
    KidsWatchTipsCardView *_tipsCardView;
    KidsWatchButton *_continueButton;
    KidsWatchButton *_backButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KidsWatchButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) KidsWatchButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) KidsWatchTipsCardView *tipsCardView; // @synthesize tipsCardView=_tipsCardView;
- (void)onCloseAndExit;
- (void)onTapContinueButton;
- (void)onTapBackButton;
- (void)onTapCloseBarButtonItem;
- (void)initSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchKidsRegisterEntryViewControllerDelegate> delegate; // @dynamic delegate;

@end

