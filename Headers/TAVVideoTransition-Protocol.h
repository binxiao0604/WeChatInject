//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CIImage, NSString, TAVVideoTransitionRenderInfo;

@protocol TAVVideoTransition <NSObject>
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(copy, nonatomic) NSString *identifier;
- (CIImage *)renderImageWithForegroundImage:(CIImage *)arg1 backgroundImage:(CIImage *)arg2 renderInfo:(TAVVideoTransitionRenderInfo *)arg3;
@end

