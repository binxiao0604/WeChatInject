//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAVEffectLayoutInfo : NSObject
{
    int _centerX;
    int _centerY;
    float _scale;
    float _rotate;
}

@property(nonatomic) float rotate; // @synthesize rotate=_rotate;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int centerY; // @synthesize centerY=_centerY;
@property(nonatomic) int centerX; // @synthesize centerX=_centerX;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3 rotate:(float)arg4;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2 scale:(float)arg3;
- (id)initWithCenterX:(int)arg1 centerY:(int)arg2;

@end
