//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface iAPUnVerifyTransaction : NSObject <PBCoding>
{
    unsigned int uiTransactionDate;
    NSString *nsProductIdentifier;
    NSData *dtReceipt;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiTransactionDate;
+ (void)PBArrayAdd_dtReceipt;
+ (void)PBArrayAdd_nsProductIdentifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiTransactionDate; // @synthesize uiTransactionDate;
@property(retain, nonatomic) NSData *dtReceipt; // @synthesize dtReceipt;
@property(retain, nonatomic) NSString *nsProductIdentifier; // @synthesize nsProductIdentifier;
- (void)dealloc;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

