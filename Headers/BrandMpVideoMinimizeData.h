//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class BrandMpVideoItem, NSString;

@interface BrandMpVideoMinimizeData : NSObject <PBCoding>
{
    NSString *videoTitle;
    NSString *videoThumbUrl;
    NSString *bizUsrName;
    NSString *bizNickName;
    BrandMpVideoItem *videoItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoItem;
+ (void)PBArrayAdd_bizNickName;
+ (void)PBArrayAdd_bizUsrName;
+ (void)PBArrayAdd_videoThumbUrl;
+ (void)PBArrayAdd_videoTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) BrandMpVideoItem *videoItem; // @synthesize videoItem;
@property(retain, nonatomic) NSString *bizNickName; // @synthesize bizNickName;
@property(retain, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName;
@property(retain, nonatomic) NSString *videoThumbUrl; // @synthesize videoThumbUrl;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
