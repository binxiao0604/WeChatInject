//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class NSString;

@protocol WCFinderMegaVideoViewModelDelegate <WCFinderFeedBaseViewControllerProtocol>
- (void)minimize;
- (unsigned long long)commentScene;
- (void)showToastWithText:(NSString *)arg1;
- (void)stopLoading;
- (void)showLoadingWithText:(NSString *)arg1;

@optional
- (_Bool)isAuthorViewForMoreOptions;
@end

