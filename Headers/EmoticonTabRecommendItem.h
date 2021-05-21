//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmoticonTabRecommendItem : NSObject <PBCoding>
{
    unsigned int m_buttonType;
    NSString *m_name;
    NSString *m_productId;
    NSString *m_iconUrl;
    NSString *m_bigIconUrl;
    NSString *m_recType;
    NSString *m_recWord;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_buttonType;
+ (void)PBArrayAdd_m_recWord;
+ (void)PBArrayAdd_m_recType;
+ (void)PBArrayAdd_m_bigIconUrl;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_name;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_buttonType; // @synthesize m_buttonType;
@property(retain, nonatomic) NSString *m_recWord; // @synthesize m_recWord;
@property(retain, nonatomic) NSString *m_recType; // @synthesize m_recType;
@property(retain, nonatomic) NSString *m_bigIconUrl; // @synthesize m_bigIconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId;
@property(retain, nonatomic) NSString *m_name; // @synthesize m_name;
@property(readonly, copy) NSString *description;
- (void)updateFromItem:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

