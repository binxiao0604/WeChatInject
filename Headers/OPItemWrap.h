//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TemplateAdvertiseOPWrap, TemplateFinderGameLiveOPWrap, TemplateFinderLiveOPWrap, TemplateFooterOPWrap, TemplateScheduleOPWrap, TemplateWeappOPWrap, UIColor;

@interface OPItemWrap : NSObject
{
    _Bool _isRichText;
    unsigned int _opType;
    unsigned int _tag;
    unsigned int _numberOfLines;
    NSString *_word;
    NSString *_detailTitle;
    NSString *_url;
    UIColor *_wordColor;
    NSString *_icon;
    TemplateWeappOPWrap *_weappOpWrap;
    TemplateScheduleOPWrap *_scheduleOpWrap;
    TemplateAdvertiseOPWrap *_advertiseOpWrap;
    TemplateFinderLiveOPWrap *_finderLiveOpWrap;
    TemplateFooterOPWrap *_footerOpWrap;
    TemplateFinderGameLiveOPWrap *_finderGameLiveOpWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TemplateFinderGameLiveOPWrap *finderGameLiveOpWrap; // @synthesize finderGameLiveOpWrap=_finderGameLiveOpWrap;
@property(retain, nonatomic) TemplateFooterOPWrap *footerOpWrap; // @synthesize footerOpWrap=_footerOpWrap;
@property(retain, nonatomic) TemplateFinderLiveOPWrap *finderLiveOpWrap; // @synthesize finderLiveOpWrap=_finderLiveOpWrap;
@property(retain, nonatomic) TemplateAdvertiseOPWrap *advertiseOpWrap; // @synthesize advertiseOpWrap=_advertiseOpWrap;
@property(retain, nonatomic) TemplateScheduleOPWrap *scheduleOpWrap; // @synthesize scheduleOpWrap=_scheduleOpWrap;
@property(retain, nonatomic) TemplateWeappOPWrap *weappOpWrap; // @synthesize weappOpWrap=_weappOpWrap;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *wordColor; // @synthesize wordColor=_wordColor;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;

@end

