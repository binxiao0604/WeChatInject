//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, YYTextDebugOption, YYTextLayout;

@interface YYTextContainerView : UIView
{
    _Bool _attachmentChanged;
    NSMutableArray *_attachmentViews;
    NSMutableArray *_attachmentLayers;
    UIView *_hostView;
    YYTextDebugOption *_debugOption;
    long long _textVerticalAlignment;
    YYTextLayout *_layout;
    double _contentsFadeDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double contentsFadeDuration; // @synthesize contentsFadeDuration=_contentsFadeDuration;
@property(retain, nonatomic) YYTextLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long textVerticalAlignment; // @synthesize textVerticalAlignment=_textVerticalAlignment;
@property(copy, nonatomic) YYTextDebugOption *debugOption; // @synthesize debugOption=_debugOption;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLayout:(id)arg1 withFadeDuration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

