//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveStarterViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMAcceptAgreementResultViewControllerDelegate-Protocol.h"
#import "MMFinderGameLivePrepareLogicDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCameraViewControllerDelegate-Protocol.h"

@class MMFinderGameLivePrepareLogic, MMFinderGameLiveStarterViewModel, MMFinderLiveGameUserInfo, MMGrowTextView, MMLiveTaskId, MMUIButton, MMWebImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCActionSheet, WCFinderDataItem, WCInputController;
@protocol WCFinderGameLiveStarterPrepareViewControllerDelegate;

@interface WCFinderGameLiveStarterPrepareViewController : MMLiveStarterViewController <ILinkEventExt, InputControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, MMFinderGameLivePrepareLogicDelegate, MMAcceptAgreementResultViewControllerDelegate>
{
    UIView *_backgroundView;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    _Bool _isAgreementChecked;
    NSString *_appId;
    MMFinderLiveGameUserInfo *_gameUserInfo;
    NSString *_downloadUrl;
    NSString *_appName;
    MMFinderGameLiveStarterViewModel *_gameLiveStarterVM;
    WCFinderDataItem *_finderDataItem;
    MMUIButton *_backButton;
    UILabel *_headerTitle;
    UIView *_checkBoxView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementText;
    UIButton *_startGameLiveButton;
    UIView *_separateLineBetweenDescAndPOI;
    UIView *_coverTouchView;
    MMWebImageView *_coverImageView;
    WCActionSheet *_chooseCoverActionSheet;
    WCInputController *_inputController;
    MMGrowTextView *_growTextView;
    UILabel *_wordCountTips;
    double _keyboardHeight;
    long long _viewEntryScene;
    MMFinderGameLivePrepareLogic *_prepareLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderGameLivePrepareLogic *prepareLogic; // @synthesize prepareLogic=_prepareLogic;
@property(nonatomic) long long viewEntryScene; // @synthesize viewEntryScene=_viewEntryScene;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) WCInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) WCActionSheet *chooseCoverActionSheet; // @synthesize chooseCoverActionSheet=_chooseCoverActionSheet;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverTouchView; // @synthesize coverTouchView=_coverTouchView;
@property(retain, nonatomic) UIView *separateLineBetweenDescAndPOI; // @synthesize separateLineBetweenDescAndPOI=_separateLineBetweenDescAndPOI;
@property(retain, nonatomic) UIButton *startGameLiveButton; // @synthesize startGameLiveButton=_startGameLiveButton;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(retain, nonatomic) MMFinderGameLiveStarterViewModel *gameLiveStarterVM; // @synthesize gameLiveStarterVM=_gameLiveStarterVM;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onUpdateGameUserInfo:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onKeyboardHide;
- (void)keyboardWillShow;
- (void)updateCoverImageViewWith:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithDataItem:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showFinderPublishView;
- (void)showFinderCameraViewController;
- (_Bool)isFrontCamera;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setStartGameLiveButtonDisable;
- (void)resignInput;
- (void)updateWordCountTipsLabel:(int)arg1;
- (double)getGrowTextViewLeftRightMargin;
- (id)getDefaultText;
- (_Bool)isLiveCreatedFromGame;
- (void)sendReqLaunchAppMsgWithGameBuffer:(id)arg1;
- (void)onClickStartGameLiveAction:(id)arg1;
- (_Bool)isGameLivePolicyCheckedAlready;
- (void)updateDataItemForLivePrepare;
- (void)onClickBackGroundResignGes;
- (void)dismissStarterLiveViewController;
- (void)onBackButtonClicked;
- (void)onClickCoverImageViewAction;
- (void)onCheckBoxClicked;
- (void)addShakeOnCheckBoxView;
- (void)layoutCheckBoxView;
- (_Bool)shouldAgreementCheckBoxShown;
- (void)initLiveButtons;
- (void)initSeparateLine;
- (void)initBackgroundView;
- (void)initInputToolView;
- (void)initInputController;
- (void)addGrowTextView;
- (void)initCoverImageView;
- (void)initHeadSubViews;
- (void)initSubViews;
- (void)layoutUI;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)viewDidLoad;
- (id)initWithTaskId:(id)arg1 andViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WCFinderGameLiveStarterPrepareViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId;
@property(readonly) Class superclass;

@end

