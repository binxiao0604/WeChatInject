//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"
#import "YYModel-Protocol.h"

@class NSArray, NSString, WCFinderShareAttachInfo;

@interface WCFinderShareToMomentsItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    NSString *objectId;
    NSString *localId;
    NSString *timeLineThumbName;
    NSString *objectNonceId;
    NSString *feedType;
    NSString *nickname;
    NSString *avatar;
    NSString *desc;
    NSString *mediaCount;
    NSString *liveId;
    NSArray *mediaList;
    NSString *username;
    WCFinderShareAttachInfo *megaVideo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_feedType;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_timeLineThumbName;
+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareAttachInfo *megaVideo; // @synthesize megaVideo;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId;
@property(copy, nonatomic) NSString *mediaCount; // @synthesize mediaCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(copy, nonatomic) NSString *feedType; // @synthesize feedType;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId;
@property(copy, nonatomic) NSString *timeLineThumbName; // @synthesize timeLineThumbName;
@property(copy, nonatomic) NSString *localId; // @synthesize localId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId;
- (void)exposeReport:(id)arg1 params:(id)arg2;
- (id)timeLineThumbFilePath;
- (_Bool)clearTimeLineThumb;
- (_Bool)createTimeLineThumb;
- (id)getGallaryDesc;
- (id)getTimelineDesc;
- (_Bool)isPureText;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

