//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface AddMsgWrap : NSObject <PBCoding>
{
    NSString *functionMsgId;
    NSData *addMsgData;
    NSData *businessData;
    unsigned long long businessId;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessId;
+ (void)PBArrayAdd_businessData;
+ (void)PBArrayAdd_addMsgData;
+ (void)PBArrayAdd_functionMsgId;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessId; // @synthesize businessId;
@property(retain, nonatomic) NSData *businessData; // @synthesize businessData;
@property(retain, nonatomic) NSData *addMsgData; // @synthesize addMsgData;
@property(retain, nonatomic) NSString *functionMsgId; // @synthesize functionMsgId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

