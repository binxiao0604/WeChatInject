//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WADynamicBackgroundGLViewControllerDelegate-Protocol.h"
#import "WCMainWindowExt-Protocol.h"

@class CADisplayLink, CAGradientLayer, DynamicBackgroundSystemConfig, NSString, WADynamicBackgroundGLViewController;

@interface MiniTaskDynamicBgView : UIView <WADynamicBackgroundGLViewControllerDelegate, WCMainWindowExt>
{
    _Bool _canUseDynamicBackground;
    _Bool _isInDarkMode;
    UIView *_backgroundView;
    CAGradientLayer *_backgroundLayer;
    WADynamicBackgroundGLViewController *_dynamicBGVC;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    CADisplayLink *_displayLink;
    double _manualColorRatio;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool canUseDynamicBackground; // @synthesize canUseDynamicBackground=_canUseDynamicBackground;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(retain, nonatomic) WADynamicBackgroundGLViewController *dynamicBGVC; // @synthesize dynamicBGVC=_dynamicBGVC;
@property(retain, nonatomic) CAGradientLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)mm_onColorAppearanceDidChange;
- (void)detectDarkMode;
- (union _GLKVector4)mixColorWithA:(union _GLKVector4)arg1 b:(union _GLKVector4)arg2 portion:(double)arg3;
- (union _GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (void)backgroundDisplayLink:(id)arg1;
- (void)updateBackgroundColorWithColor1:(union _GLKVector4)arg1 color2:(union _GLKVector4)arg2;
- (void)pauseDynamicBgView;
- (void)showDynamicBgView;
- (void)layoutSubviews;
- (void)buildManualBackgroundDisplayLink;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackground;
- (void)buildGLLayer;
- (void)buildBackgroundLayer;
- (void)buildDynamicBackground;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

