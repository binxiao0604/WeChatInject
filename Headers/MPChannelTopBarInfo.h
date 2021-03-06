//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MPChannelTopBarInfo : NSObject <PBCoding>
{
    _Bool isDotNotice;
    _Bool showGreenDot;
    _Bool showSmallIcon;
    unsigned int funcVersion;
    unsigned int iconType;
    unsigned int titleType;
    NSString *title;
    NSString *appId;
    NSString *logoUrl;
    unsigned long long appDebugModeType;
    NSString *defaultLogoUrl;
    NSString *dataBuffer;
    NSString *syncBuffer;
    NSString *defaultTitle;
    NSString *appPath;
    NSString *informMsgCnt;
    NSString *smallIconUrl;
    NSString *dmLogoUrl;
    NSString *dmDefaultLogoUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_dmDefaultLogoUrl;
+ (void)PBArrayAdd_dmLogoUrl;
+ (void)PBArrayAdd_smallIconUrl;
+ (void)PBArrayAdd_showSmallIcon;
+ (void)PBArrayAdd_informMsgCnt;
+ (void)PBArrayAdd_showGreenDot;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_titleType;
+ (void)PBArrayAdd_defaultTitle;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_syncBuffer;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_defaultLogoUrl;
+ (void)PBArrayAdd_isDotNotice;
+ (void)PBArrayAdd_funcVersion;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dmDefaultLogoUrl; // @synthesize dmDefaultLogoUrl;
@property(copy, nonatomic) NSString *dmLogoUrl; // @synthesize dmLogoUrl;
@property(copy, nonatomic) NSString *smallIconUrl; // @synthesize smallIconUrl;
@property(nonatomic) _Bool showSmallIcon; // @synthesize showSmallIcon;
@property(copy, nonatomic) NSString *informMsgCnt; // @synthesize informMsgCnt;
@property(nonatomic) _Bool showGreenDot; // @synthesize showGreenDot;
@property(copy, nonatomic) NSString *appPath; // @synthesize appPath;
@property(nonatomic) unsigned int titleType; // @synthesize titleType;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle;
@property(nonatomic) unsigned int iconType; // @synthesize iconType;
@property(copy, nonatomic) NSString *syncBuffer; // @synthesize syncBuffer;
@property(copy, nonatomic) NSString *dataBuffer; // @synthesize dataBuffer;
@property(copy, nonatomic) NSString *defaultLogoUrl; // @synthesize defaultLogoUrl;
@property(nonatomic) _Bool isDotNotice; // @synthesize isDotNotice;
@property(nonatomic) unsigned int funcVersion; // @synthesize funcVersion;
@property(nonatomic) unsigned long long appDebugModeType; // @synthesize appDebugModeType;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

