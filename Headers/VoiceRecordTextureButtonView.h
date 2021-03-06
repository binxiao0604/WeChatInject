//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CAGradientLayer, CALayer, CAShapeLayer, NSArray, UIColor;

@interface VoiceRecordTextureButtonView : MMUIView
{
    long long _state;
    CALayer *_voiceIconMaskLayer;
    CALayer *_voiceIconContentLayer;
    double _voiceIconCenterY;
    CAShapeLayer *_ovalLayer;
    CAShapeLayer *_maskLayer;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_strokeLayer;
    UIColor *_fillColor;
    UIColor *_unselectedFillColor;
    UIColor *_strokeColor;
    NSArray *_gradientColors;
    struct CGRect _originOvalFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *unselectedFillColor; // @synthesize unselectedFillColor=_unselectedFillColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *ovalLayer; // @synthesize ovalLayer=_ovalLayer;
@property(nonatomic) double voiceIconCenterY; // @synthesize voiceIconCenterY=_voiceIconCenterY;
@property(retain, nonatomic) CALayer *voiceIconContentLayer; // @synthesize voiceIconContentLayer=_voiceIconContentLayer;
@property(retain, nonatomic) CALayer *voiceIconMaskLayer; // @synthesize voiceIconMaskLayer=_voiceIconMaskLayer;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct CGRect originOvalFrame; // @synthesize originOvalFrame=_originOvalFrame;
- (_Bool)isPointInOval:(struct CGPoint)arg1;
- (double)getOvalYFromX:(double)arg1;
- (void)doFadeAnimation;
- (void)doDeselectAnimation:(_Bool)arg1;
- (void)doExpandAnimation;
- (void)layoutAllSublayers;
- (void)createAndAddAllSublayers;
- (void)removeAllSublayers;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

