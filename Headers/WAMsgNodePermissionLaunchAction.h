//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAMsgNodePermissionLaunchAction : NSObject <PBCoding>
{
    unsigned int actionCode;
    NSString *alertMsg;
}

+ (void)initialize;
+ (void)PBArrayAdd_alertMsg;
+ (void)PBArrayAdd_actionCode;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

