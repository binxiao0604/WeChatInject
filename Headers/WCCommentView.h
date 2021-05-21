//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"
#import "ITranslateSnsMgrExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"
#import "WCCommentEmotionViewDelegate-Protocol.h"

@class MMHeadImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, UrlLabel, WCCommentEmotionView, WCUserComment;
@protocol ILinkEventExt, WCCommentViewDelegate;

@interface WCCommentView : MMUIView <MMImageLoaderObserver, WCCommentEmotionViewDelegate, ILinkEventExt, ITranslateSnsMgrExt, RichTextLayoutDelegate>
{
    MMHeadImageView *_headImageView;
    UIImageView *_likeImageView;
    RichTextView *_contentView;
    _Bool _isLongPressHandled;
    id <WCCommentViewDelegate> _commentDelegate;
    RichTextView *_translateView;
    UIButton *_translateStatusView;
    UIView *_translateLineView;
    int eTranslateStatus;
    double fTranslateViewHeight;
    UILabel *_timeLabel;
    UrlLabel *_nameLabel;
    id <ILinkEventExt> _urlLabelDelegate;
    WCUserComment *_commentUserInfo;
    double _fMaxWidth;
    NSString *m_dataItemTid;
    CDUnknownBlockType _onHedaImageClick;
    WCCommentEmotionView *_emotionView;
}

+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCommentEmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(copy, nonatomic) CDUnknownBlockType onHedaImageClick; // @synthesize onHedaImageClick=_onHedaImageClick;
@property(retain, nonatomic) NSString *m_dataItemTid; // @synthesize m_dataItemTid;
@property(nonatomic) __weak id <WCCommentViewDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(nonatomic) __weak id <ILinkEventExt> urlLabelDelegate; // @synthesize urlLabelDelegate=_urlLabelDelegate;
@property(nonatomic) double fMaxWidth; // @synthesize fMaxWidth=_fMaxWidth;
- (void)onWCCommentEmotionViewSizeChange;
- (void)onEmotionLongPress:(id)arg1;
- (void)onWCCommentEmotionViewClick:(id)arg1;
- (void)addEmotionView:(id)arg1;
- (_Bool)isDownloadUrlForAdPreferHead:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)showAdPreferUrl;
- (unsigned int)getCommentCreateTime;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (void)makeTranslateShowAnimation;
- (double)initContentTranslateView:(id)arg1;
- (void)onTranslate:(id)arg1;
- (id)GetTranslateSnsKeyID;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetNormal;
- (void)onViewLongPressed;
- (void)onRestore:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(struct CGRect)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isTouchEnable;
- (_Bool)canBecomeFirstResponder;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)reloadTime;
- (void)showWC;
- (double)getVisibleHeight;
- (void)manualLayoutSubViews;
- (void)createSubviews;
- (_Bool)isAdPreferInfo;
- (void)initContentView;
- (void)dealloc;
- (id)initWithCommentUserInfo:(id)arg1 andDataItemTid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

