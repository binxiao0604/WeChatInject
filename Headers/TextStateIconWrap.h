//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "YYModel-Protocol.h"

@class NSArray, NSDictionary, NSString, UIImage;

@interface TextStateIconWrap : NSObject <YYModel, NSCopying>
{
    _Bool _useOriginalImage;
    _Bool _residentAfterPublish;
    unsigned int _effectTime;
    unsigned int _expireTime;
    NSString *_iconId;
    NSString *_sourcePath;
    NSString *_iconDescription;
    NSDictionary *_localizedDescriptionDict;
    NSArray *_styleArray;
    NSString *_residentCategoryId;
    NSDictionary *_sameFriendsLocalizedTipDict;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *sameFriendsLocalizedTipDict; // @synthesize sameFriendsLocalizedTipDict=_sameFriendsLocalizedTipDict;
@property(retain, nonatomic) NSString *residentCategoryId; // @synthesize residentCategoryId=_residentCategoryId;
@property(nonatomic) _Bool residentAfterPublish; // @synthesize residentAfterPublish=_residentAfterPublish;
@property(retain, nonatomic) NSArray *styleArray; // @synthesize styleArray=_styleArray;
@property(retain, nonatomic) NSDictionary *localizedDescriptionDict; // @synthesize localizedDescriptionDict=_localizedDescriptionDict;
@property(nonatomic) _Bool useOriginalImage; // @synthesize useOriginalImage=_useOriginalImage;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int effectTime; // @synthesize effectTime=_effectTime;
@property(retain, nonatomic) NSString *iconDescription; // @synthesize iconDescription=_iconDescription;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(readonly, nonatomic) NSString *sameFriendsTip;
- (_Bool)isValidForPublish;
- (_Bool)isValidForShow;
- (id)getImageFromPath:(id)arg1 useOriginalImage:(_Bool)arg2;
- (id)activeStyle;
@property(readonly, nonatomic) NSString *filledImageFilePath;
@property(readonly, nonatomic) NSString *outlinedImageFilePath;
@property(readonly, nonatomic) UIImage *outlinedImage;
@property(readonly, nonatomic) UIImage *filledImage;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

