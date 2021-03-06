//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCAddressBaseAddress;

@interface WCProductOrderInfo : NSObject
{
    unsigned int count;
    float unitPrice;
    float totalPrice;
    float expressPrice;
    unsigned int expressID;
    unsigned int flag;
    unsigned int productSubType;
    unsigned int productType;
    float discountPrice;
    NSString *productID;
    NSString *skuID;
    NSString *skuInfo;
    NSString *productName;
    NSString *feeType;
    NSString *imageUrl;
    NSString *stockID;
    NSArray *expressList;
    NSString *sourceUrl;
    WCAddressBaseAddress *addressInfo;
    NSArray *skuItemList;
    NSString *thumbUrl;
    NSString *sellerID;
    NSString *receiptStr;
    NSArray *discountInfoList;
    NSString *userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) float discountPrice; // @synthesize discountPrice;
@property(retain, nonatomic) NSArray *discountInfoList; // @synthesize discountInfoList;
@property(retain, nonatomic) NSString *receiptStr; // @synthesize receiptStr;
@property(retain, nonatomic) NSString *sellerID; // @synthesize sellerID;
@property(nonatomic) unsigned int productType; // @synthesize productType;
@property(nonatomic) unsigned int productSubType; // @synthesize productSubType;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSArray *skuItemList; // @synthesize skuItemList;
@property(retain, nonatomic) WCAddressBaseAddress *addressInfo; // @synthesize addressInfo;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(retain, nonatomic) NSArray *expressList; // @synthesize expressList;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(nonatomic) unsigned int expressID; // @synthesize expressID;
@property(retain, nonatomic) NSString *stockID; // @synthesize stockID;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(nonatomic) float expressPrice; // @synthesize expressPrice;
@property(nonatomic) float totalPrice; // @synthesize totalPrice;
@property(nonatomic) float unitPrice; // @synthesize unitPrice;
@property(retain, nonatomic) NSString *feeType; // @synthesize feeType;
@property(retain, nonatomic) NSString *productName; // @synthesize productName;
@property(nonatomic) unsigned int count; // @synthesize count;
@property(retain, nonatomic) NSString *skuInfo; // @synthesize skuInfo;
@property(retain, nonatomic) NSString *skuID; // @synthesize skuID;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
- (void)dealloc;

@end

