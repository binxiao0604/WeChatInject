//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCCardDetailTable : MMObject <PBCoding>
{
    unsigned int showNum;
    NSString *title;
    NSString *subtitle;
    NSArray *rows;
}

+ (void)initialize;
+ (void)PBArrayAdd_rows;
+ (void)PBArrayAdd_showNum;
+ (void)PBArrayAdd_subtitle;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows;
@property(nonatomic) unsigned int showNum; // @synthesize showNum;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

