//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMEasterEggBaseActivityInfo.h"

@class NSString, UIColor;

@interface MMEasterEggNewYearActivityInfo : MMEasterEggBaseActivityInfo
{
    _Bool _useLightStyle;
    UIColor *_backgroundColor;
    NSString *_backgroundLogoFilePath;
    NSString *_bottomMainTitle;
    UIColor *_bottomMainTitleColor;
    NSString *_bottomSubTitle;
    UIColor *_bottomSubTitleColor;
    NSString *_brandName;
    NSString *_brandLogoFilePath;
    NSString *_transitionLoadingFilePath;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonForegroundColor;
    NSString *_defaultButtonTitle;
    NSString *_defaultCoverFilePath;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
@property(retain, nonatomic) NSString *defaultCoverFilePath; // @synthesize defaultCoverFilePath=_defaultCoverFilePath;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) UIColor *buttonForegroundColor; // @synthesize buttonForegroundColor=_buttonForegroundColor;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) NSString *transitionLoadingFilePath; // @synthesize transitionLoadingFilePath=_transitionLoadingFilePath;
@property(retain, nonatomic) NSString *brandLogoFilePath; // @synthesize brandLogoFilePath=_brandLogoFilePath;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) UIColor *bottomSubTitleColor; // @synthesize bottomSubTitleColor=_bottomSubTitleColor;
@property(retain, nonatomic) NSString *bottomSubTitle; // @synthesize bottomSubTitle=_bottomSubTitle;
@property(retain, nonatomic) UIColor *bottomMainTitleColor; // @synthesize bottomMainTitleColor=_bottomMainTitleColor;
@property(retain, nonatomic) NSString *bottomMainTitle; // @synthesize bottomMainTitle=_bottomMainTitle;
@property(retain, nonatomic) NSString *backgroundLogoFilePath; // @synthesize backgroundLogoFilePath=_backgroundLogoFilePath;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isValid;
- (void)tryParseURLStringFromActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

@end

