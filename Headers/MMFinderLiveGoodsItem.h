//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MMFinderLiveGoodsItem : NSObject <NSCopying>
{
    _Bool _isPromoting;
    unsigned int _platformId;
    unsigned int _stock;
    NSString *_platformName;
    unsigned long long _productId;
    NSString *_title;
    NSString *_imgUrl;
    double _minPrice;
    double _maxPrice;
    NSString *_appId;
    NSString *_path;
    NSString *_orderAppId;
    NSString *_orderPath;
    NSString *_extBuff;
    NSString *_productExtData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productExtData; // @synthesize productExtData=_productExtData;
@property(retain, nonatomic) NSString *extBuff; // @synthesize extBuff=_extBuff;
@property(retain, nonatomic) NSString *orderPath; // @synthesize orderPath=_orderPath;
@property(retain, nonatomic) NSString *orderAppId; // @synthesize orderAppId=_orderAppId;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isPromoting; // @synthesize isPromoting=_isPromoting;
@property(nonatomic) double maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) double minPrice; // @synthesize minPrice=_minPrice;
@property(nonatomic) unsigned int stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int platformId; // @synthesize platformId=_platformId;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
- (void)copyFromPBItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBItem:(id)arg1;

@end
