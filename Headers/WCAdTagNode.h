//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, UIImage;

@interface WCAdTagNode : NSObject <NSCoding>
{
    NSString *_tagName;
    NSString *_iconForDarkMode;
    NSString *_iconForLightMode;
    NSString *_tagLightBgColor;
    NSString *_tagLightNameColor;
    NSString *_tagDarkBgColor;
    NSString *_tagDarkNameColor;
    UIImage *_darkIcon;
    UIImage *_lightIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *lightIcon; // @synthesize lightIcon=_lightIcon;
@property(retain, nonatomic) UIImage *darkIcon; // @synthesize darkIcon=_darkIcon;
@property(retain, nonatomic) NSString *tagDarkNameColor; // @synthesize tagDarkNameColor=_tagDarkNameColor;
@property(retain, nonatomic) NSString *tagDarkBgColor; // @synthesize tagDarkBgColor=_tagDarkBgColor;
@property(retain, nonatomic) NSString *tagLightNameColor; // @synthesize tagLightNameColor=_tagLightNameColor;
@property(retain, nonatomic) NSString *tagLightBgColor; // @synthesize tagLightBgColor=_tagLightBgColor;
@property(retain, nonatomic) NSString *iconForLightMode; // @synthesize iconForLightMode=_iconForLightMode;
@property(retain, nonatomic) NSString *iconForDarkMode; // @synthesize iconForDarkMode=_iconForDarkMode;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (_Bool)hasIcon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

