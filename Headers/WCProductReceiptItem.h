//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCProductReceiptItem : NSObject <PBCoding>
{
    NSString *sourceText;
    NSString *pingyinText;
    NSString *firstLetterText;
}

+ (void)initialize;
+ (void)PBArrayAdd_firstLetterText;
+ (void)PBArrayAdd_pingyinText;
+ (void)PBArrayAdd_sourceText;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *firstLetterText; // @synthesize firstLetterText;
@property(retain, nonatomic) NSString *pingyinText; // @synthesize pingyinText;
@property(retain, nonatomic) NSString *sourceText; // @synthesize sourceText;
- (void)dealloc;
- (id)initWithText:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

