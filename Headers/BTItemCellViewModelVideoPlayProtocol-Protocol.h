//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UITableViewCell, UIView;

@protocol BTItemCellViewModelVideoPlayProtocol <NSObject>
- (UITableViewCell *)getCellView;
- (void)destoryVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)initVideo;
- (NSString *)autoPlayDescription;
- (_Bool)canAutoPlay;

@optional
- (struct CGRect)getVideoViewRect;
- (UIView *)getVideoContainerView;
- (UIView *)getVideoView;
@end

