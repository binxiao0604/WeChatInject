//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCProductBaseInfo, WCProductExtInfo, WCProductOSSInfo, WCProductSellerInfo, WCProductShareInfo;

@interface WCProductInfo : NSObject
{
    unsigned int productType;
    unsigned int productSubType;
    NSString *productID;
    WCProductBaseInfo *baseInfo;
    WCProductSellerInfo *sellerInfo;
    NSArray *skuInfoList;
    WCProductExtInfo *extInfo;
    WCProductShareInfo *shareInfo;
    NSArray *recommendInfoList;
    WCProductOSSInfo *ossInfo;
    NSString *jsonStrForTest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jsonStrForTest; // @synthesize jsonStrForTest;
@property(retain, nonatomic) WCProductOSSInfo *ossInfo; // @synthesize ossInfo;
@property(retain, nonatomic) NSArray *recommendInfoList; // @synthesize recommendInfoList;
@property(retain, nonatomic) WCProductShareInfo *shareInfo; // @synthesize shareInfo;
@property(retain, nonatomic) WCProductExtInfo *extInfo; // @synthesize extInfo;
@property(retain, nonatomic) NSArray *skuInfoList; // @synthesize skuInfoList;
@property(retain, nonatomic) WCProductSellerInfo *sellerInfo; // @synthesize sellerInfo;
@property(retain, nonatomic) WCProductBaseInfo *baseInfo; // @synthesize baseInfo;
@property(nonatomic) unsigned int productSubType; // @synthesize productSubType;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseRecommendInfoFromJSONStr:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
- (void)dealloc;
- (void)fromShareXML:(id)arg1;
- (id)toShareXML;
- (void)loadDataForTest;

@end

