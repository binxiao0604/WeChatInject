//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _YYTextSentinel;

@interface YYTextAsyncLayer : CALayer
{
    _YYTextSentinel *_sentinel;
    _Bool _displaysAsynchronously;
}

+ (id)defaultValueForKey:(id)arg1;
- (void).cxx_destruct;
@property _Bool displaysAsynchronously; // @synthesize displaysAsynchronously=_displaysAsynchronously;
- (void)_cancelAsyncDisplay;
- (void)_displayAsync:(_Bool)arg1;
- (void)display;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)init;

@end
