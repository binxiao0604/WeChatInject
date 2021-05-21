//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMWebViewBackgroundAlbumAudioExtInfo, NSString;

@interface MMWebViewBackgroundAlbumAudioInfo : NSObject <PBCoding>
{
    unsigned int durantion;
    unsigned int offset;
    NSString *albumId;
    NSString *audioId;
    NSString *domain;
    MMWebViewBackgroundAlbumAudioExtInfo *extInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_durantion;
+ (void)PBArrayAdd_audioId;
+ (void)PBArrayAdd_albumId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewBackgroundAlbumAudioExtInfo *extInfo; // @synthesize extInfo;
@property(copy, nonatomic) NSString *domain; // @synthesize domain;
@property(nonatomic) unsigned int offset; // @synthesize offset;
@property(nonatomic) unsigned int durantion; // @synthesize durantion;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

