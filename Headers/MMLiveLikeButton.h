//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCLiveBottomTextButton.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface MMLiveLikeButton : WCLiveBottomTextButton <CAAnimationDelegate>
{
    _Bool _isShakeForLike;
    _Bool _isLikeStart;
    _Bool _isLikeExecuting;
    unsigned long long _maxLikeCountOnce;
    CDUnknownBlockType _likeInvokeCallback;
    CDUnknownBlockType _likeClickBeginCallback;
    CDUnknownBlockType _likeClickEndCallback;
    CDUnknownBlockType _likeLongPressEndCallback;
    unsigned long long _currLikeCountOnce;
    unsigned long long _currentState;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool isLikeExecuting; // @synthesize isLikeExecuting=_isLikeExecuting;
@property(nonatomic) unsigned long long currLikeCountOnce; // @synthesize currLikeCountOnce=_currLikeCountOnce;
@property(copy, nonatomic) CDUnknownBlockType likeLongPressEndCallback; // @synthesize likeLongPressEndCallback=_likeLongPressEndCallback;
@property(copy, nonatomic) CDUnknownBlockType likeClickEndCallback; // @synthesize likeClickEndCallback=_likeClickEndCallback;
@property(copy, nonatomic) CDUnknownBlockType likeClickBeginCallback; // @synthesize likeClickBeginCallback=_likeClickBeginCallback;
@property(copy, nonatomic) CDUnknownBlockType likeInvokeCallback; // @synthesize likeInvokeCallback=_likeInvokeCallback;
@property(nonatomic) _Bool isLikeStart; // @synthesize isLikeStart=_isLikeStart;
@property(nonatomic) _Bool isShakeForLike; // @synthesize isShakeForLike=_isShakeForLike;
@property(nonatomic) unsigned long long maxLikeCountOnce; // @synthesize maxLikeCountOnce=_maxLikeCountOnce;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startLikeButtonReduceAnimation;
- (void)startLikeButtonEnLargeAnimation;
- (void)executeLike;
- (void)onLikeButtonClickedEnd;
- (void)onLikeButtonClickedStart;
- (void)configLikeButton;
- (id)initWithFrame:(struct CGRect)arg1 andBussinessType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

