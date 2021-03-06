//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EmoticonCustomAddLogicControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"

@class EmoticonCustomAddLogicController, NSString, UINavigationController;
@protocol EmoticonCustomAddTaskDelegate;

@interface EmoticonCustomAddTask : NSObject <EmoticonCustomAddLogicControllerDelegate, MMUIViewControllerDelegate>
{
    EmoticonCustomAddLogicController *_addLogicController;
    id <EmoticonCustomAddTaskDelegate> _delegate;
    UINavigationController *_topNavigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *topNavigationController; // @synthesize topNavigationController=_topNavigationController;
@property(nonatomic) __weak id <EmoticonCustomAddTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmoticonCustomAddLogicController *addLogicController; // @synthesize addLogicController=_addLogicController;
- (id)getViewController;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

