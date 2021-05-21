//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLEXArgumentInputView.h"

#import "FLEXColorComponentInputViewDelegate-Protocol.h"

@class FLEXColorComponentInputView, FLEXColorPreviewBox, NSString, UILabel;

@interface FLEXArgumentInputColorView : FLEXArgumentInputView <FLEXColorComponentInputViewDelegate>
{
    FLEXColorPreviewBox *_colorPreviewBox;
    UILabel *_hexLabel;
    FLEXColorComponentInputView *_alphaInput;
    FLEXColorComponentInputView *_redInput;
    FLEXColorComponentInputView *_greenInput;
    FLEXColorComponentInputView *_blueInput;
}

+ (_Bool)supportsObjCType:(const char *)arg1 withCurrentValue:(id)arg2;
+ (double)colorPreviewBoxHeight;
+ (double)inputViewVerticalPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) FLEXColorComponentInputView *blueInput; // @synthesize blueInput=_blueInput;
@property(retain, nonatomic) FLEXColorComponentInputView *greenInput; // @synthesize greenInput=_greenInput;
@property(retain, nonatomic) FLEXColorComponentInputView *redInput; // @synthesize redInput=_redInput;
@property(retain, nonatomic) FLEXColorComponentInputView *alphaInput; // @synthesize alphaInput=_alphaInput;
@property(retain, nonatomic) UILabel *hexLabel; // @synthesize hexLabel=_hexLabel;
@property(retain, nonatomic) FLEXColorPreviewBox *colorPreviewBox; // @synthesize colorPreviewBox=_colorPreviewBox;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateColorPreview;
- (void)updateWithColor:(id)arg1;
- (void)colorComponentInputViewValueDidChange:(id)arg1;
- (id)inputValue;
- (void)setInputValue:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

