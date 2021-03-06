//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EmoticonBoardViewDelegate-Protocol.h"
#import "EmoticonInputRecommendMgrExt-Protocol.h"
#import "EmoticonSearchHalfScreenViewControllerDelegate-Protocol.h"
#import "IRecordPermissionCheckExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMInputMsgReferDelegate-Protocol.h"
#import "MMQuickSendEmoticonViewDelegate-Protocol.h"
#import "MMTransparentButtonDelegate-Protocol.h"
#import "RecordViewDelegate-Protocol.h"
#import "RelatedEmoticonHalfScreenViewControllerDelegate-Protocol.h"
#import "SelectAttachmentViewControllerDelegate-Protocol.h"
#import "SolitaireTipsViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "VoiceInputViewDelegate-Protocol.h"
#import "WASendSessionMsgViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCGroupUndoneActionDelegate-Protocol.h"

@class CBaseContact, CMessageWrap, EmoticonBoardView, EmoticonSearchHalfScreenViewController, MMEmoticonView, MMGrowTextView, MMHeadImageView, MMInputMsgReferView, MMQuickSendEmoticonView, MMTransparentButton, MMUIButton, MsgSendOpEntry, NSSet, NSString, NSURL, RecordAdapterView, RelatedEmoticonHalfScreenViewController, SelectAttachmentView, SelectAttachmentViewController, SolitaireTipsView, UIButton, UIImageView, UIImpactFeedbackGenerator, UIView, VoiceInputView, WASendSessionMsgView, WCGroupUndoneActionBar;
@protocol MMInputToolViewCustomizationDelegate, MMInputToolViewDelegate;

@interface MMInputToolView : MMUIView <MMQuickSendEmoticonViewDelegate, WASendSessionMsgViewDelegate, RecordViewDelegate, SolitaireTipsViewDelegate, MMInputMsgReferDelegate, EmoticonInputRecommendMgrExt, WCGroupUndoneActionDelegate, UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, MMGrowTextViewDelegate, MMTransparentButtonDelegate, SelectAttachmentViewControllerDelegate, VoiceInputViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, IRecordPermissionCheckExt, RelatedEmoticonHalfScreenViewControllerDelegate, EmoticonSearchHalfScreenViewControllerDelegate>
{
    MMUIButton *_inputModeChangeButton;
    UIView *_toolView;
    VoiceInputView *_voiceInputView;
    SelectAttachmentView *_attachmentView;
    EmoticonBoardView *_expressionView;
    RelatedEmoticonHalfScreenViewController *_relatedEmoticonViewController;
    MMGrowTextView *_textView;
    MMUIButton *_attachmentButton;
    UIButton *_expressionDoneButton;
    UIView *_recordingTipsView;
    MMTransparentButton *_recordButton;
    MMUIButton *_expressionButton;
    UIButton *_sendCaptrueView;
    WASendSessionMsgView *_sendWeAppSessionMsgView;
    UIButton *m_quickSendEmoticonBackView;
    UIView *m_quickSendEmoticonView;
    MMEmoticonView *m_emoticonView;
    double _keyboardHeight;
    int _inputMode;
    int _positionMode;
    int _contentMode;
    _Bool _reqRemoteEmotionRecommendation;
    id <MMInputToolViewDelegate> _delegate;
    SelectAttachmentViewController *m_selectAttachmentViewController;
    long long iMuteCount;
    int _recordStatus;
    id <MMInputToolViewCustomizationDelegate> _uiDelegate;
    UIView *_parentView;
    NSURL *_nsLastCaptrueAssetURL;
    _Bool m_bPositioning;
    int _preSightInputMode;
    int _preSightPositionMode;
    int _preSightContentMode;
    double _bizInputBtnWidth;
    _Bool _showToolViewAfterAnimation;
    double _keyboardTop;
    _Bool _isWeAppSessionMsgBtnHidding;
    _Bool _hasReceiveTextBeginEditing;
    _Bool _isDetectingExternalKeyboard;
    UIView *m_keyboardBackgroundView;
    UIImpactFeedbackGenerator *m_impactFeedbackGenerator;
    _Bool m_hadAttachmentRedDot;
    _Bool _weappSessionMsgBtnIgnoreFirstTextEdit;
    _Bool _bNewTextInputHadShowSolitaireTips;
    _Bool _hasShownVideoView;
    _Bool _bEnableTopicSearchInteraction;
    SEL mRecordSelector;
    UIView *_toolPanelView;
    EmoticonSearchHalfScreenViewController *_searchEmoticonViewController;
    CBaseContact *_contact;
    NSString *_lastPastedText;
    RecordAdapterView *_recordAdapterView;
    unsigned long long _fMaxLength;
    MMInputMsgReferView *_msgRefView;
    MMQuickSendEmoticonView *_quickSendEmoticonView;
    SolitaireTipsView *_solitaireTipsView;
    MMHeadImageView *_headImageView;
    UIView *_fakeTextBackgroundView;
    CMessageWrap *_replyingMessage;
    UIImageView *_attachmentRedDotImageView;
    NSString *_lastRequestEmoticonDesc;
    NSSet *_originTouches;
    WCGroupUndoneActionBar *_undoneBar;
    MsgSendOpEntry *_entrys;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgSendOpEntry *entrys; // @synthesize entrys=_entrys;
@property(nonatomic) _Bool bEnableTopicSearchInteraction; // @synthesize bEnableTopicSearchInteraction=_bEnableTopicSearchInteraction;
@property(retain, nonatomic) WCGroupUndoneActionBar *undoneBar; // @synthesize undoneBar=_undoneBar;
@property(retain, nonatomic) NSSet *originTouches; // @synthesize originTouches=_originTouches;
@property(retain, nonatomic) NSString *lastRequestEmoticonDesc; // @synthesize lastRequestEmoticonDesc=_lastRequestEmoticonDesc;
@property(retain, nonatomic) UIImageView *attachmentRedDotImageView; // @synthesize attachmentRedDotImageView=_attachmentRedDotImageView;
@property(retain, nonatomic) CMessageWrap *replyingMessage; // @synthesize replyingMessage=_replyingMessage;
@property(retain, nonatomic) UIView *fakeTextBackgroundView; // @synthesize fakeTextBackgroundView=_fakeTextBackgroundView;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) SolitaireTipsView *solitaireTipsView; // @synthesize solitaireTipsView=_solitaireTipsView;
@property(nonatomic) _Bool hasShownVideoView; // @synthesize hasShownVideoView=_hasShownVideoView;
@property(retain, nonatomic) MMQuickSendEmoticonView *quickSendEmoticonView; // @synthesize quickSendEmoticonView=_quickSendEmoticonView;
@property(retain, nonatomic) MMInputMsgReferView *msgRefView; // @synthesize msgRefView=_msgRefView;
@property(nonatomic) _Bool bNewTextInputHadShowSolitaireTips; // @synthesize bNewTextInputHadShowSolitaireTips=_bNewTextInputHadShowSolitaireTips;
@property(nonatomic) _Bool weappSessionMsgBtnIgnoreFirstTextEdit; // @synthesize weappSessionMsgBtnIgnoreFirstTextEdit=_weappSessionMsgBtnIgnoreFirstTextEdit;
@property(nonatomic) unsigned long long fMaxLength; // @synthesize fMaxLength=_fMaxLength;
@property(retain, nonatomic) RecordAdapterView *recordAdapterView; // @synthesize recordAdapterView=_recordAdapterView;
@property(retain, nonatomic) NSString *lastPastedText; // @synthesize lastPastedText=_lastPastedText;
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) EmoticonSearchHalfScreenViewController *searchEmoticonViewController; // @synthesize searchEmoticonViewController=_searchEmoticonViewController;
@property(retain, nonatomic) UIView *toolPanelView; // @synthesize toolPanelView=_toolPanelView;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic) __weak id <MMInputToolViewCustomizationDelegate> _uiDelegate; // @synthesize _uiDelegate;
@property(nonatomic) _Bool m_bPositioning; // @synthesize m_bPositioning;
@property(nonatomic) int contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) int positionMode; // @synthesize positionMode=_positionMode;
@property(nonatomic) int inputMode; // @synthesize inputMode=_inputMode;
@property(nonatomic) __weak id <MMInputToolViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) MMTransparentButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIView *recordingTipsView; // @synthesize recordingTipsView=_recordingTipsView;
@property(retain, nonatomic) UIButton *expressionDoneButton; // @synthesize expressionDoneButton=_expressionDoneButton;
@property(retain, nonatomic) MMUIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) MMUIButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) MMGrowTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) RelatedEmoticonHalfScreenViewController *relatedEmoticonViewController; // @synthesize relatedEmoticonViewController=_relatedEmoticonViewController;
@property(retain, nonatomic) EmoticonBoardView *expressionView; // @synthesize expressionView=_expressionView;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) MMUIButton *inputModeChangeButton; // @synthesize inputModeChangeButton=_inputModeChangeButton;
- (void)onBecomeActive:(id)arg1;
- (void)onRevokeGroupUndoneItem:(id)arg1;
- (void)onCompleteGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)onCloseGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)onClickGroupUndoneItem:(id)arg1 isLastItem:(_Bool)arg2;
- (void)hideUndoneBarAnimated:(_Bool)arg1;
- (void)showUndoneBarAnimated:(_Bool)arg1;
- (void)removeUndoneItem:(id)arg1;
- (void)updateUndoneItem:(id)arg1;
- (void)updateGroupUndoneList:(id)arg1 animated:(_Bool)arg2;
- (void)hideLastUndoneView;
- (double)getGroupUndoneBarHeight;
- (_Bool)hasUndoneItems;
- (void)initGroupUndoneView;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 abTestItem:(id)arg3 sessionId:(id)arg4 recSessionId:(id)arg5 remoteWordListMeta:(id)arg6;
- (void)onTapSolitaireTipsView:(id)arg1;
- (id)getMsgTableView;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (_Bool)shouldInterceptHideExpressionPanelOnKeyboardChanged;
- (void)onEmoticonRecommendHalfScreenViewControllerUpdateHeight;
- (void)showSearchEmoticonViewController;
- (void)showRelativeEmoticonViewControllerWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
- (void)onRelatedEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)getRecommendMessageContexts;
- (id)getChatUsername;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)onClearInputMsgRefer;
- (void)setReplyingString:(id)arg1;
- (void)resetReplyMessage;
- (void)onDeleteMsgReplyView:(id)arg1;
- (double)getMsgReplyViewHeight;
- (void)replyMessage:(id)arg1;
- (void)toRecordStautsIdle;
- (void)sendMsgWithText:(id)arg1;
- (void)onClickSendSessionMsgBtn;
- (void)layoutWeAppSessionMsgBtn;
- (void)initWeAppSessionMsgBtn;
- (void)hideWeAppSessionMsgBtn;
- (void)showWeAppSessionMsgBtn;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onOpenTopicSearch;
- (void)dealloc;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (_Bool)CheckVoiceBtnState;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)InputIsAvailableChanged:(_Bool)arg1;
- (void)resetText;
- (void)resetSelectAttachmentView;
- (void)resetGrowTextView;
- (void)updateGrowTextViewProperty;
- (void)deleteBackward;
- (void)insertString:(id)arg1;
- (void)backSetRecordTransMsg:(id)arg1;
- (_Bool)isTracking;
- (void)setVoiceEnabled:(_Bool)arg1;
- (void)resetRecordView;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (_Bool)VoiceRecordNeedPopUpViewController;
- (void)HideRecordTips;
- (void)ShowTooShortTips;
- (void)ShowTooLongTips;
- (void)ShowRecording;
- (void)ShowPreparing;
- (void)showRecord:(id)arg1;
- (void)showCancel:(id)arg1;
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (double)getRecordButtonResponseY;
- (id)getChatCellWithMsg:(id)arg1;
- (id)cancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (void)cancelRecording;
- (void)stopRecording;
- (void)realStartRecordingAfterImpactOccurred;
- (void)realStartRecording;
- (void)startRecording:(id)arg1;
- (void)setContentMode:(int)arg1 animated:(_Bool)arg2;
- (void)NotifyViewControllerPostionChanged:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)disvisibleContentTool;
- (void)setPoisitionMode:(int)arg1 animated:(_Bool)arg2 fromShake:(_Bool)arg3;
- (void)setPoisitionMode:(int)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (float)getContentViewHeight:(int)arg1;
- (void)onPositionAnimationEnd;
- (void)setInputMode:(int)arg1 animated:(_Bool)arg2;
- (void)onShowAttachViewWithPageIndex:(unsigned long long)arg1 items:(id)arg2;
- (void)onShowLiveEntrance;
- (void)liveButtonRealClicked;
- (void)onLiveButtonClicked:(id)arg1;
- (void)onChatRoomToolButtonClick:(id)arg1;
- (void)onShowInputToolWeAppAr:(id)arg1;
- (void)onInputToolWeAppButtonClicked:(id)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)onRedEnvelopesClicked:(id)arg1;
- (void)onTransferButtonClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)logSightCameraEntranceWithCameraButton:(_Bool)arg1;
- (void)onCameraControllerClicked:(id)arg1;
- (void)onFileBrowserClicked:(id)arg1;
- (void)onSolitaireButtonClicked:(id)arg1;
- (void)onMediaBrowserClicked:(id)arg1;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)onMultiTalkButtonClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onLocationButtonClicked:(id)arg1;
- (void)videoVoipBtnRealClicked;
- (_Bool)isEnableVoiceVoipFromPlugin;
- (void)onVideoVoipButtonClicked:(id)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (id)getInputToolWeAppOpEntryAr;
- (id)getMsgSendOpEntry;
- (id)getServiceAppList;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (void)voiceInputBtnRealClicked;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)voiceVoipBtnRealClicked;
- (void)onVoiceVoipButtonClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)showCaptrueButton;
- (void)tryShowCaptrueButton;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)setTextKeyboardHeight:(double)arg1;
- (void)notifyToolViewDisappear;
- (void)notifyToolViewAppear;
- (void)onViewDidBePoped;
- (void)onViewWillDisappear;
- (void)onViewDidInit;
- (void)onWillAppear;
- (void)onWillDisappear;
@property(nonatomic) __weak NSString *text;
- (void)hideToolView:(_Bool)arg1;
- (void)Reset;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2;
- (void)layoutSubviews;
- (id)createRecordView;
- (id)createRecordAdapterView;
- (void)initSubView;
- (void)showSolirateTipsWithObj:(id)arg1;
- (void)onInputTextChange:(id)arg1;
- (void)analysisSolitaireWithContent:(id)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)MMGrowTextView:(id)arg1 didPastedText:(id)arg2;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (_Bool)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (_Bool)isViewControllerTop;
- (void)updateCustomToolView;
- (void)UpdateTabBarSendButtonState;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidDeleteToNil;
- (_Bool)TextViewDidDelete;
- (void)deleteEmoticon;
- (id)GetCurrentViewController;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)changeTextViewColorForEmoticonState:(_Bool)arg1;
- (void)OnEmoticonStateDidChanged:(_Bool)arg1;
- (void)onSendButtonClicked;
- (void)updateHeadImageRelatedViews;
- (void)updateRecordButtonDisabled;
- (void)updateToolViewHeight:(_Bool)arg1 withAnimationBlock:(CDUnknownBlockType)arg2;
- (void)updateToolViewHeight:(_Bool)arg1;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)showSendCaptrueViewAnimated:(_Bool)arg1;
- (void)hideSendCaptrueView;
- (void)hideSendCaptrueViewAnimated:(_Bool)arg1;
- (void)OnClearText;
- (void)OnTextRecoged:(id)arg1;
- (id)GetCurrentText;
- (void)initAttachmentView;
- (void)updateAttachmentView;
- (id)configEmoticonView;
@property(nonatomic) long long iKeyboardAnimationCurve;
@property(nonatomic) double fKeyboardAnimationDuration;
- (void)fixBtnY;
- (double)getDefaultTextViewHeight;
- (double)parentViewWidth;
- (id)hlSvgName:(id)arg1 Size:(struct CGSize)arg2;
- (id)svgName:(id)arg1 Size:(struct CGSize)arg2;
- (id)createSolitaireTipsView;
- (void)initHeadImageRelatedViews;
- (void)initInputModeChangeButton;
- (void)initQuickSendEmoticonView;
- (void)initSendCaptrueView;
- (void)initExpressionButton;
- (void)resetAttachmentButtonRedDot;
- (void)initAttachmentButton;
- (void)initRecordButton;
- (void)initTextView;
- (void)initToolPanelView;
- (void)initToolView;
- (void)combineToolView;
- (_Bool)checkRemoteRecommendEmoticonCanSend:(id)arg1;
- (_Bool)checkEmoticonCanSend:(id *)arg1;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsRecording;
- (void)toRecordStautsPerparing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

