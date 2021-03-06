//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WACustomKeyboardDelegate-Protocol.h"
#import "WARichTextViewHelperDelegate-Protocol.h"

@class NSMutableArray, NSMutableString, NSString, UIButton, UILabel, WACustomKeyboard;
@protocol IWARichTextViewHelper, WAPhoneVerifyWindowDelegate;

@interface WAPhoneVerifyWindow : UIView <WARichTextViewHelperDelegate, WACustomKeyboardDelegate>
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_countDown;
    UIButton *_closeButton;
    WACustomKeyboard *_keyBoard;
    NSMutableArray *_numLabels;
    NSMutableString *_input;
    int _secCount;
    id <WAPhoneVerifyWindowDelegate> _verifyWindowDelegate;
    long long _inputCount;
    NSString *_phoneNum;
    id <IWARichTextViewHelper> _richTextHelper;
}

+ (id)setupWindow:(id)arg1 phone:(id)arg2 inputCount:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IWARichTextViewHelper> richTextHelper; // @synthesize richTextHelper=_richTextHelper;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(nonatomic) long long inputCount; // @synthesize inputCount=_inputCount;
@property(nonatomic) __weak id <WAPhoneVerifyWindowDelegate> verifyWindowDelegate; // @synthesize verifyWindowDelegate=_verifyWindowDelegate;
- (void)onDelete;
- (void)onChar:(id)arg1;
- (struct CGRect)contentViewFrame;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 linkRect:(struct CGRect)arg2;
- (void)onClose:(id)arg1;
- (void)countDown;
- (void)initView;
- (void)closeWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

