//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WePkgSingleFileInfo : MMObject <PBCoding>
{
    unsigned int downloadNetworkType;
    unsigned int sizeInBytes;
    NSString *rid;
    NSString *mimeType;
    NSString *md5;
    NSString *downloadUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_sizeInBytes;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_mimeType;
+ (void)PBArrayAdd_rid;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sizeInBytes; // @synthesize sizeInBytes;
@property(nonatomic) unsigned int downloadNetworkType; // @synthesize downloadNetworkType;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType;
@property(retain, nonatomic) NSString *rid; // @synthesize rid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

