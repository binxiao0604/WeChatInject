//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderLiveStartLotteryItemViewDelegate-Protocol.h"

@class MMFinderLiveLotteryCommentInputView, MMFinderLiveLotteryCommentInputViewController, MMFinderLiveTask, MMUILabel, NSString, UIButton, WCFinderLiveStartLotteryItemView;
@protocol WCFinderLiveStartLotteryViewControllerDelegate;

@interface WCFinderLiveStartLotteryViewController : MMUIViewController <WCActionSheetDelegate, WCFinderLiveStartLotteryItemViewDelegate>
{
    _Bool _sOpening;
    _Bool _enterBackground;
    _Bool _isKeyBoardShow;
    id <WCFinderLiveStartLotteryViewControllerDelegate> _delegate;
    MMFinderLiveTask *_liveTask;
    WCFinderLiveStartLotteryItemView *_lotteryMethodSelectItemView;
    WCFinderLiveStartLotteryItemView *_lotteryDurationInputItemView;
    WCFinderLiveStartLotteryItemView *_lotteryWinnerCntInputItemView;
    WCFinderLiveStartLotteryItemView *_lotteryDescriptionInputItemView;
    UIButton *_createLotteryButton;
    MMUILabel *_maxLotteryDurationNoticeLabel;
    MMUILabel *_createLotteryProtocolLabel;
    MMFinderLiveLotteryCommentInputViewController *_commentInputViewController;
    NSString *_commentInput;
    long long _lotteryStartType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isKeyBoardShow; // @synthesize isKeyBoardShow=_isKeyBoardShow;
@property(nonatomic) _Bool enterBackground; // @synthesize enterBackground=_enterBackground;
@property(nonatomic) long long lotteryStartType; // @synthesize lotteryStartType=_lotteryStartType;
@property(retain, nonatomic) NSString *commentInput; // @synthesize commentInput=_commentInput;
@property(nonatomic) _Bool sOpening; // @synthesize sOpening=_sOpening;
@property(retain, nonatomic) MMFinderLiveLotteryCommentInputViewController *commentInputViewController; // @synthesize commentInputViewController=_commentInputViewController;
@property(retain, nonatomic) MMUILabel *createLotteryProtocolLabel; // @synthesize createLotteryProtocolLabel=_createLotteryProtocolLabel;
@property(retain, nonatomic) MMUILabel *maxLotteryDurationNoticeLabel; // @synthesize maxLotteryDurationNoticeLabel=_maxLotteryDurationNoticeLabel;
@property(retain, nonatomic) UIButton *createLotteryButton; // @synthesize createLotteryButton=_createLotteryButton;
@property(retain, nonatomic) WCFinderLiveStartLotteryItemView *lotteryDescriptionInputItemView; // @synthesize lotteryDescriptionInputItemView=_lotteryDescriptionInputItemView;
@property(retain, nonatomic) WCFinderLiveStartLotteryItemView *lotteryWinnerCntInputItemView; // @synthesize lotteryWinnerCntInputItemView=_lotteryWinnerCntInputItemView;
@property(retain, nonatomic) WCFinderLiveStartLotteryItemView *lotteryDurationInputItemView; // @synthesize lotteryDurationInputItemView=_lotteryDurationInputItemView;
@property(retain, nonatomic) WCFinderLiveStartLotteryItemView *lotteryMethodSelectItemView; // @synthesize lotteryMethodSelectItemView=_lotteryMethodSelectItemView;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(nonatomic) __weak id <WCFinderLiveStartLotteryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSubWidgetsFirstResponder;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (_Bool)isCommentEnable;
- (void)showToastForCreateLotteryWithErrorType:(int)arg1 errorPage:(id)arg2;
- (void)onCreateLotteryButtonClicked:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onStartLotteryItemViewTextFieldChanged:(id)arg1;
- (void)onStartLotteryItemViewSelectionTypeOnClicked:(id)arg1;
- (void)commentInputDidChanged:(id)arg1;
- (void)endEditing;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateCreateLotteryButtonEnableStatus;
- (void)layoutUI;
- (void)layoutCreateLotteryButton;
- (void)updateCreateLotteryButtonStyle;
@property(readonly, nonatomic) MMFinderLiveLotteryCommentInputView *commentInputView;
- (void)setupUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)addNotifications;
- (void)dealloc;
- (id)initWithLiveTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
