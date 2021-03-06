//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MinimizeEdgeGestureHandlerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MinimizeEdgeGestureHandler, NSString, UIScreenEdgePanGestureRecognizer, UIViewController;
@protocol UIViewControllerAnimatedTransitioning, WCFinderTransitionControllerDelegate;

@interface WCFinderTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    id <UIViewControllerAnimatedTransitioning> _popTransition;
    UIScreenEdgePanGestureRecognizer *_edgeGesture;
    MinimizeEdgeGestureHandler *_edgeGesHandler;
    UIViewController<WCFinderTransitionControllerDelegate> *_transitioningController;
}

+ (id)defaultPopTransition;
- (void).cxx_destruct;
@property(nonatomic) UIViewController<WCFinderTransitionControllerDelegate> *transitioningController; // @synthesize transitioningController=_transitioningController;
@property(retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler; // @synthesize edgeGesHandler=_edgeGesHandler;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture; // @synthesize edgeGesture=_edgeGesture;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> popTransition; // @synthesize popTransition=_popTransition;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(_Bool)arg2;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (id)edgeGestureRecognizer;
- (id)initWithTransitioningController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

