//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UINavigationController, WAMediaCastingRoutePickerController, WAMediaCastingRoutePickerDeviceItem;

@protocol WAMediaCastingRoutePickerControllerDelegate <NSObject>
- (UINavigationController *)navigationControllerToShowGuideWebViewWithMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoPlayerPositionInfoChanged:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoPlayerStateChanged:(unsigned long long)arg2;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 upnpVideoDidCast:(_Bool)arg2;
- (void)onMediaCastingRoutePickerController:(WAMediaCastingRoutePickerController *)arg1 userSelected:(WAMediaCastingRoutePickerDeviceItem *)arg2;
@end
