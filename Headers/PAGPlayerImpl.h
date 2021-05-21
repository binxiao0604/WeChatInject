//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAGPlayerImpl : NSObject
{
    struct PAGPlayer *pagPlayer;
}

- (_Bool)hitTestPoint:(id)arg1 point:(struct CGPoint)arg2 pixelHitTest:(_Bool)arg3;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (struct CGRect)getBounds:(id)arg1;
- (_Bool)flush;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setCacheScale:(float)arg1;
- (float)cacheScale;
- (void)setCacheEnabled:(_Bool)arg1;
- (_Bool)cacheEnabled;
- (void)setVideoEnabled:(_Bool)arg1;
- (_Bool)videoEnabled;
- (void)setSurface:(id)arg1;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (void)dealloc;
- (id)init;

@end

