//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TextStateCardContentView, TextStateLikeListViewController;

@protocol TextStateCardContentViewDelegate <NSObject>

@optional
- (void)onTapBlankArea:(TextStateCardContentView *)arg1;
- (void)onTapSourceButton:(TextStateCardContentView *)arg1;
- (void)enterSelfLikeList:(TextStateLikeListViewController *)arg1;
@end

