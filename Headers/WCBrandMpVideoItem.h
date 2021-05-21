//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCContentShareable-Protocol.h"

@class NSString;

@interface WCBrandMpVideoItem : NSObject <WCContentShareable>
{
    NSString *bizUsrName;
    NSString *bizNickName;
    NSString *title;
    NSString *mpUrl;
    NSString *videoVid;
    NSString *videoUrl;
    double videoDuration;
    NSString *thumbUrl;
    double thumbWidth;
    double thumbHeight;
    NSString *url;
}

+ (id)xmlTag;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_bizNickName;
+ (void)PBArrayAdd_bizUsrName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(nonatomic) double videoDuration; // @synthesize videoDuration;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
@property(copy, nonatomic) NSString *videoVid; // @synthesize videoVid;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *bizNickName; // @synthesize bizNickName;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName;
@property(readonly, copy) NSString *description;
- (_Bool)checkData;
- (id)toXML;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

