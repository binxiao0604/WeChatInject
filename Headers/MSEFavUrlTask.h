//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSEFavUrlTask : NSObject <PBCoding>
{
    NSString *title;
    NSString *contentUrl;
    NSString *taskID;
}

+ (void)initialize;
+ (void)PBArrayAdd_taskID;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

