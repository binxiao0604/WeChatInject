//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUILabel.h"

@class MMBadgeView;

@interface MMFinderLiveConnectMicTabView : MMUILabel
{
    _Bool _showRedDot;
    MMBadgeView *_badgeView;
}

+ (id)TabViewWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
- (void)layoutSubviews;

@end

