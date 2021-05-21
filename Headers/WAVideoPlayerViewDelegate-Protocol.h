//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView, WAWebViewController;
@protocol WAStreamPlayerInterface;

@protocol WAVideoPlayerViewDelegate <NSObject>

@optional
- (void)onVideoPlay:(double)arg1 duration:(double)arg2;
- (WAWebViewController *)getWAVC;
- (_Bool)isForground;
- (void)enableWebViewScroll:(_Bool)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id <WAStreamPlayerInterface>)arg3;
- (void)onVideoEvent:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)videoPlayerView:(UIView<WAStreamPlayerInterface> *)arg1 onVideoStateChange:(long long)arg2;
- (void)onVolumeChange:(double)arg1;
@end

