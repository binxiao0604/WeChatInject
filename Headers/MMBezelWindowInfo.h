//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface MMBezelWindowInfo : NSObject
{
    _Bool _enableAvatarAnimation;
    unsigned long long _type;
    NSString *_identifier;
    NSString *_userName;
    NSString *_titleLabelString;
    NSString *_descriptionLabelString;
    UIImage *_avatarImage;
    unsigned long long _actionStyle;
    unsigned long long _avatarStyle;
    NSString *_actionTitle;
    unsigned long long _count;
    double _actionButtonHeight;
    double _avatarViewMarginTop;
    double _titleFontSize;
    UIColor *_titleLabelTextColor;
    double _descriptionFontSize;
    UIColor *_descriptionLabelTextColor;
    double _descriptionLabelMarginTop;
    CDUnknownBlockType _willShowWindowBlock;
    CDUnknownBlockType _didTapActionButtonBlock;
    struct CGSize _bezelSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didTapActionButtonBlock; // @synthesize didTapActionButtonBlock=_didTapActionButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType willShowWindowBlock; // @synthesize willShowWindowBlock=_willShowWindowBlock;
@property(nonatomic) double descriptionLabelMarginTop; // @synthesize descriptionLabelMarginTop=_descriptionLabelMarginTop;
@property(retain, nonatomic) UIColor *descriptionLabelTextColor; // @synthesize descriptionLabelTextColor=_descriptionLabelTextColor;
@property(nonatomic) double descriptionFontSize; // @synthesize descriptionFontSize=_descriptionFontSize;
@property(retain, nonatomic) UIColor *titleLabelTextColor; // @synthesize titleLabelTextColor=_titleLabelTextColor;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) double avatarViewMarginTop; // @synthesize avatarViewMarginTop=_avatarViewMarginTop;
@property(nonatomic) double actionButtonHeight; // @synthesize actionButtonHeight=_actionButtonHeight;
@property(nonatomic) struct CGSize bezelSize; // @synthesize bezelSize=_bezelSize;
@property(nonatomic) _Bool enableAvatarAnimation; // @synthesize enableAvatarAnimation=_enableAvatarAnimation;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) unsigned long long avatarStyle; // @synthesize avatarStyle=_avatarStyle;
@property(nonatomic) unsigned long long actionStyle; // @synthesize actionStyle=_actionStyle;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) NSString *descriptionLabelString; // @synthesize descriptionLabelString=_descriptionLabelString;
@property(retain, nonatomic) NSString *titleLabelString; // @synthesize titleLabelString=_titleLabelString;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *infoID;
- (id)init;

@end

