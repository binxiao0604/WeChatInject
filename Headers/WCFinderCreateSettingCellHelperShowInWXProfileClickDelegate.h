//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILinkEventExt-Protocol.h"

@class NSString, UINavigationController;

@interface WCFinderCreateSettingCellHelperShowInWXProfileClickDelegate : NSObject <ILinkEventExt>
{
    UINavigationController *_navVC;
}

+ (id)jumpWXProfileHref;
+ (id)instanceWithNavVC:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navVC; // @synthesize navVC=_navVC;
- (void)openSelfContactInfo;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)attachtoObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

