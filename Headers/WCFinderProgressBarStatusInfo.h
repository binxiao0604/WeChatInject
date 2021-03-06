//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFinderProgressBarStatusInfo : NSObject
{
    _Bool _hasDragged;
    _Bool _showProgressBar;
    _Bool _progressBarShowLargeBar;
    _Bool _progressBarShowAnchorPoint;
    unsigned long long _tapCount;
    double _maxPlayProgress;
    double _currentPlayProgress;
}

@property(nonatomic, getter=isProgressBarShowAnchorPoint) _Bool progressBarShowAnchorPoint; // @synthesize progressBarShowAnchorPoint=_progressBarShowAnchorPoint;
@property(nonatomic, getter=isProgressBarShowLargeBar) _Bool progressBarShowLargeBar; // @synthesize progressBarShowLargeBar=_progressBarShowLargeBar;
@property(nonatomic, getter=isShowProgressBar) _Bool showProgressBar; // @synthesize showProgressBar=_showProgressBar;
@property(nonatomic) double currentPlayProgress; // @synthesize currentPlayProgress=_currentPlayProgress;
@property(nonatomic) double maxPlayProgress; // @synthesize maxPlayProgress=_maxPlayProgress;
@property(nonatomic) _Bool hasDragged; // @synthesize hasDragged=_hasDragged;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount=_tapCount;
- (_Bool)isVideoPause;
- (id)description;

@end

