//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCAppAuthAppMetaInfo : MMObject <PBCoding>
{
    unsigned int appType;
    NSString *appId;
    NSString *appName;
    NSString *appTypeDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_appType;
+ (void)PBArrayAdd_appTypeDesc;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_appId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int appType; // @synthesize appType;
@property(copy, nonatomic) NSString *appTypeDesc; // @synthesize appTypeDesc;
@property(copy, nonatomic) NSString *appName; // @synthesize appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId;
- (void)dealloc;
- (id)init;
- (id)initWithAuthAppPBData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

