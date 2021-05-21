//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PersonalDesigner, UIColor;

@interface EmoticonBoardCrossCollectionEmoticonHeaderModel : NSObject
{
    _Bool _hasReddot;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_designerNameColor;
    UIColor *_arrowColor;
    NSString *_designerUin;
    NSString *_packageId;
    PersonalDesigner *_designer;
    unsigned long long _index;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) _Bool hasReddot; // @synthesize hasReddot=_hasReddot;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) NSString *designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor=_arrowColor;
@property(retain, nonatomic) UIColor *designerNameColor; // @synthesize designerNameColor=_designerNameColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)reportAction:(int)arg1 actionOnNewPid:(id)arg2;
- (_Bool)shouldRequestEmotionDetailForUpdate;
- (_Bool)isSameDesignerUin:(id)arg1;
- (_Bool)isSamePackageId:(id)arg1;
- (_Bool)isSamePackage:(id)arg1;
- (id)description;

@end

