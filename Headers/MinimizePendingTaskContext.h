//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol IMinimizeTaskDelegateInterface;

@interface MinimizePendingTaskContext : NSObject
{
    int _generateType;
    NSObject<IMinimizeTaskDelegateInterface> *_notifyDelegate;
    NSString *_taskBizName;
    NSString *_taskBizKey;
    UIViewController *_weakVC;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *weakVC; // @synthesize weakVC=_weakVC;
@property(nonatomic) int generateType; // @synthesize generateType=_generateType;
@property(copy, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(copy, nonatomic) NSString *taskBizName; // @synthesize taskBizName=_taskBizName;
@property(nonatomic) __weak NSObject<IMinimizeTaskDelegateInterface> *notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (id)description;
- (_Bool)checkData;
- (id)initWithTaskBizName:(id)arg1 taskBizKey:(id)arg2 notifyDelegate:(id)arg3 generateType:(int)arg4 weakVC:(id)arg5;

@end

