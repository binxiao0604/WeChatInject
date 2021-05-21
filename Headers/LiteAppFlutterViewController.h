//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Flutter/FlutterViewController.h>

#import "FlutterViewControllerLifeCycleDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FlutterViewControllerLifeCycle, NSMutableDictionary, NSString;

@interface LiteAppFlutterViewController : FlutterViewController <FlutterViewControllerLifeCycleDelegate, UIGestureRecognizerDelegate>
{
    NSString *_name;
    NSMutableDictionary *_params;
    NSString *_activityId;
    FlutterViewControllerLifeCycle *_lifeCycle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FlutterViewControllerLifeCycle *lifeCycle; // @synthesize lifeCycle=_lifeCycle;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)getFlutterViewParams;
- (id)getFlutterViewName;
- (id)getActivityId;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onAddToSuperVc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

