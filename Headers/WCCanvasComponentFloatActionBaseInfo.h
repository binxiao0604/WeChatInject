//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentFloatActionBaseInfo : MMObject <NSCoding>
{
    _Bool _backgroundBlurEffect;
    _Bool _isFullClickable;
    NSString *_backgroundImg;
    NSString *_backgroundColor;
    double _backgroundColorAlpha;
    NSString *_backgroundBlurEffectColor;
    double _backgroundBlurEffectColorAlpha;
    NSString *_iconUrl;
    NSString *_title;
    NSString *_titleColor;
    double _titleColorAlpha;
    NSString *_desc;
    NSString *_descColor;
    double _descColorAlpha;
    WCCanvasComponentItem *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCanvasComponentItem *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) _Bool isFullClickable; // @synthesize isFullClickable=_isFullClickable;
@property(nonatomic) double descColorAlpha; // @synthesize descColorAlpha=_descColorAlpha;
@property(retain, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) double titleColorAlpha; // @synthesize titleColorAlpha=_titleColorAlpha;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) double backgroundBlurEffectColorAlpha; // @synthesize backgroundBlurEffectColorAlpha=_backgroundBlurEffectColorAlpha;
@property(retain, nonatomic) NSString *backgroundBlurEffectColor; // @synthesize backgroundBlurEffectColor=_backgroundBlurEffectColor;
@property(nonatomic) _Bool backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(nonatomic) double backgroundColorAlpha; // @synthesize backgroundColorAlpha=_backgroundColorAlpha;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

