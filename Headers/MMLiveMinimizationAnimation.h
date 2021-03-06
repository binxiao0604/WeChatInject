//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCustomTransition.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol MMLiveMinimizationAnimateDelegate;

@interface MMLiveMinimizationAnimation : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>
{
    id <MMLiveMinimizationAnimateDelegate> _minimizeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMLiveMinimizationAnimateDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

