//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameHaowanQueryPostInfo.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface GameHaowanPostInfoPbObj : GameHaowanQueryPostInfo <PBCoding>
{
    _Bool isBroken;
    NSString *postId;
    long long postType;
    NSArray *mediaList;
    NSString *extra;
    long long source;
    NSData *continueData;
}

+ (void)initialize;
+ (void)PBArrayAdd_isBroken;
+ (void)PBArrayAdd_continueData;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_extra;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_postType;
+ (void)PBArrayAdd_postId;
- (void).cxx_destruct;
- (void)setIsBroken:(_Bool)arg1;
- (_Bool)isBroken;
@property(retain, nonatomic) NSData *continueData; // @synthesize continueData;
- (void)setSource:(long long)arg1;
- (long long)source;
- (void)setExtra:(id)arg1;
- (id)extra;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList;
- (void)setPostType:(long long)arg1;
- (long long)postType;
- (void)setPostId:(id)arg1;
- (id)postId;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

