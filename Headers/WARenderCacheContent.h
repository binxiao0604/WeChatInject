//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WARenderCacheContent : NSObject <PBCoding>
{
    NSString *content;
    NSString *webviewDataStr;
    NSString *appserviceDataStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_appserviceDataStr;
+ (void)PBArrayAdd_webviewDataStr;
+ (void)PBArrayAdd_content;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appserviceDataStr; // @synthesize appserviceDataStr;
@property(copy, nonatomic) NSString *webviewDataStr; // @synthesize webviewDataStr;
@property(copy, nonatomic) NSString *content; // @synthesize content;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

