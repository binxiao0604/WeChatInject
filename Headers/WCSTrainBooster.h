//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCSTrainModelRoute;

@interface WCSTrainBooster : NSObject
{
    WCSTrainModelRoute *_entryRoute;
    NSMutableDictionary *_dicRoute;
    NSMutableDictionary *_dicRouteExt;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicRouteExt; // @synthesize dicRouteExt=_dicRouteExt;
@property(retain, nonatomic) NSMutableDictionary *dicRoute; // @synthesize dicRoute=_dicRoute;
@property(retain, nonatomic) WCSTrainModelRoute *entryRoute; // @synthesize entryRoute=_entryRoute;
- (double)passedHoursFromTimestamp:(unsigned int)arg1;
- (_Bool)applyCondition:(unsigned long long)arg1 leftOperand:(double)arg2 rightOperand:(double)arg3;
- (double)scoreByExtMode:(_Bool)arg1 outLeafNodeKeys:(id)arg2 features:(id)arg3;

@end

