//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAdInteractionAnimationInfo : NSObject <NSCoding>
{
    NSString *_resourceId;
    double _duration;
    double _delay;
    unsigned long long _animationType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

