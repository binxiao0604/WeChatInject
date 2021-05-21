//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILinkEventExt-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"

@class NSString, RichTextView, UILabel;
@protocol WCFinderFeedContentTextClickActionDelegate;

@interface WCFinderFeedContentTextView : UIView <ILinkEventExt, RichTextLayoutDelegate>
{
    _Bool _enableTouchExpand;
    _Bool _enableLongPress;
    _Bool _hideFoldButtonWhenForceExpand;
    _Bool _isRichTextLinkClickHandled;
    _Bool _isForceExpand;
    _Bool _isEnableReadMoreAction;
    id <WCFinderFeedContentTextClickActionDelegate> _delegate;
    RichTextView *_contentView;
    NSString *_content;
    UILabel *_actionLabel;
}

+ (unsigned long long)getRichTextViewParserType;
+ (_Bool)isContentLineNumOf:(unsigned long long)arg1 content:(id)arg2 width:(double)arg3 font:(id)arg4 lineSpacing:(double)arg5 rightIconPadding:(double)arg6;
+ (_Bool)isInvisibleLinesAreLinkStyleForContent:(id)arg1 width:(double)arg2 font:(id)arg3 unExpandLineNum:(unsigned long long)arg4 lineSpacing:(double)arg5 rightIconPadding:(double)arg6;
+ (struct CGSize)textSizeForContent:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6 rightIconPadding:(double)arg7;
+ (double)textHeightForContent:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 hideExpandButton:(_Bool)arg6 lineSpacing:(double)arg7 rightIconPadding:(double)arg8;
+ (double)textHeightForContent:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6 rightIconPadding:(double)arg7;
+ (id)contentTextViewWith:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6 truncatedTrailingLinkText:(id)arg7 rightIconPadding:(double)arg8;
+ (id)contentTextViewWith:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6 truncatedTrailingLinkText:(id)arg7 rightIconPadding:(double)arg8 truncatedTrailingLinkColor:(id)arg9;
+ (id)contentTextViewWith:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEnableReadMoreAction; // @synthesize isEnableReadMoreAction=_isEnableReadMoreAction;
@property(nonatomic) _Bool isForceExpand; // @synthesize isForceExpand=_isForceExpand;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) RichTextView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isRichTextLinkClickHandled; // @synthesize isRichTextLinkClickHandled=_isRichTextLinkClickHandled;
@property(nonatomic) _Bool hideFoldButtonWhenForceExpand; // @synthesize hideFoldButtonWhenForceExpand=_hideFoldButtonWhenForceExpand;
@property(nonatomic) _Bool enableLongPress; // @synthesize enableLongPress=_enableLongPress;
@property(nonatomic) _Bool enableTouchExpand; // @synthesize enableTouchExpand=_enableTouchExpand;
@property(nonatomic) __weak id <WCFinderFeedContentTextClickActionDelegate> delegate; // @synthesize delegate=_delegate;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)delayedTouchesEnded;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onTextClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)textExpandAction:(id)arg1;
- (_Bool)isEnableResponseReadMoreAction;
- (void)onExpandAction:(_Bool)arg1;
- (void)enableTextClick;
- (void)dismissHeightText;
- (void)enableHeightText;
- (void)initSubTextViewWithContent:(id)arg1 width:(double)arg2 font:(id)arg3 forceExpand:(_Bool)arg4 unExpandLineNum:(unsigned long long)arg5 lineSpacing:(double)arg6 truncatedTrailingLinkText:(id)arg7 rightIconPadding:(double)arg8 truncatedTrailingLinkColor:(id)arg9;
- (void)changeContent:(id)arg1 forceExpand:(_Bool)arg2 unExpandLineNum:(unsigned long long)arg3 truncatedTrailingLinkText:(id)arg4;
- (void)changeContent:(id)arg1 forceExpand:(_Bool)arg2 unExpandLineNum:(unsigned long long)arg3;
- (void)changeContent:(id)arg1 maxWidth:(double)arg2 forceExpand:(_Bool)arg3 unExpandLineNum:(unsigned long long)arg4 truncatedTrailingLinkText:(id)arg5 rightIconPadding:(double)arg6;
- (void)changeContent:(id)arg1 maxWidth:(double)arg2 forceExpand:(_Bool)arg3 unExpandLineNum:(unsigned long long)arg4 truncatedTrailingLinkText:(id)arg5 rightIconPadding:(double)arg6 truncatedTrailingLinkColor:(id)arg7;
- (void)changeContent:(id)arg1 maxWidth:(double)arg2 forceExpand:(_Bool)arg3 unExpandLineNum:(unsigned long long)arg4;
- (void)setActionLabelTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (_Bool)isActionLabelHidden;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

