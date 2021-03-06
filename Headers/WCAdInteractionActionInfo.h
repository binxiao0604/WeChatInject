//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface WCAdInteractionActionInfo : NSObject <NSCoding>
{
    NSString *_actionId;
    unsigned long long _actionType;
    NSString *_resourceId;
    unsigned long long _drawType;
    NSArray *_animations;
    unsigned long long _gestureType;
    unsigned long long _gestureOperateType;
    unsigned long long _activityType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(nonatomic) unsigned long long gestureOperateType; // @synthesize gestureOperateType=_gestureOperateType;
@property(nonatomic) unsigned long long gestureType; // @synthesize gestureType=_gestureType;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(nonatomic) unsigned long long drawType; // @synthesize drawType=_drawType;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

