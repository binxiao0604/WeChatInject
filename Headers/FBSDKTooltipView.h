//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UILabel, UITapGestureRecognizer;

@interface FBSDKTooltipView : UIView
{
    struct CGPoint _positionInView;
    double _displayTime;
    double _minimumDisplayDuration;
    UILabel *_textLabel;
    UITapGestureRecognizer *_insideTapGestureRecognizer;
    double _leftWidth;
    double _rightWidth;
    double _arrowMidpoint;
    _Bool _pointingUp;
    _Bool _isFadingOut;
    UIColor *_innerStrokeColor;
    double _arrowHeight;
    double _textPadding;
    double _maximumTextWidth;
    double _verticalTextOffset;
    double _verticalCrossOffset;
    unsigned long long _colorStyle;
    NSArray *_gradientColors;
    UIColor *_crossCloseGlyphColor;
    double _displayDuration;
    NSString *_message;
    NSString *_tagline;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
- (void)cancelAllScheduledFadeOutMethods;
- (void)scheduleFadeoutRespectingMinimumDisplayDuration;
- (void)scheduleAutomaticFadeout;
- (void)setMessage:(id)arg1 tagline:(id)arg2;
- (struct CGRect)layoutSubviewsAndDetermineFrame;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)onTapInTooltip:(id)arg1;
- (void)animateFadeOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateFadeIn;
@property(nonatomic) unsigned long long colorStyle;
- (void)dismiss;
- (void)presentInView:(id)arg1 withArrowPosition:(struct CGPoint)arg2 direction:(unsigned long long)arg3;
- (void)presentFromView:(id)arg1;
- (void)dealloc;
- (id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned long long)arg3;

@end

