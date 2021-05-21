//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterGiftEntrance : MMObject <PBCoding>
{
    NSString *entranceTitle;
    NSString *entranceDetail;
    NSString *entranceSummary;
    NSArray *arrIcons;
    NSString *openUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_openUrl;
+ (void)PBArrayAdd_arrIcons;
+ (void)PBArrayAdd_entranceSummary;
+ (void)PBArrayAdd_entranceDetail;
+ (void)PBArrayAdd_entranceTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl;
@property(retain, nonatomic) NSArray *arrIcons; // @synthesize arrIcons;
@property(retain, nonatomic) NSString *entranceSummary; // @synthesize entranceSummary;
@property(retain, nonatomic) NSString *entranceDetail; // @synthesize entranceDetail;
@property(retain, nonatomic) NSString *entranceTitle; // @synthesize entranceTitle;
- (void)parseFromResp:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

