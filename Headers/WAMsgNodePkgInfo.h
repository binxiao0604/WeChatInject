//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAMsgNodePkgInfo : NSObject <PBCoding>
{
    unsigned int debugMode;
    unsigned int scene;
    NSString *appId;
    unsigned long long version;
    NSString *checksum;
    NSString *debugPkgUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_debugPkgUrl;
+ (void)PBArrayAdd_checksum;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_appId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *debugPkgUrl; // @synthesize debugPkgUrl;
@property(retain, nonatomic) NSString *checksum; // @synthesize checksum;
@property(nonatomic) unsigned long long version; // @synthesize version;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

