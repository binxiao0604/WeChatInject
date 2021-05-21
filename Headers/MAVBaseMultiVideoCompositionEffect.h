//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAVVideoCompositionMixer-Protocol.h"

@class CIContext, EAGLContext, MAVPixelHelper, NSArray, NSString;

@interface MAVBaseMultiVideoCompositionEffect : NSObject <TAVVideoCompositionMixer>
{
    struct __CVOpenGLESTextureCache *_textureCache;
    EAGLContext *_renderContext;
    CIContext *_ciContext;
    NSArray *_lastTrackList;
    long long _lastRenderPts;
    CDUnknownBlockType _frameRenderCallback;
    MAVPixelHelper *_pixelHelper;
    struct CGSize _assetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVPixelHelper *pixelHelper; // @synthesize pixelHelper=_pixelHelper;
@property(copy, nonatomic) CDUnknownBlockType frameRenderCallback; // @synthesize frameRenderCallback=_frameRenderCallback;
@property(nonatomic) long long lastRenderPts; // @synthesize lastRenderPts=_lastRenderPts;
@property(retain, nonatomic) NSArray *lastTrackList; // @synthesize lastTrackList=_lastTrackList;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) EAGLContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (id)textureToCIImage:(unsigned int)arg1 size:(struct CGSize)arg2;
- (id)createInputTrackList:(id)arg1 pts:(long long)arg2;
- (id)renderTracks:(long long)arg1 trackList:(id)arg2 renderInfo:(id)arg3;
- (id)applyEffectToImageCollection:(id)arg1 renderInfo:(id)arg2;
- (void)ensureCurrentGLContext;
- (void)destroyTextureCache;
- (void)destroyCacheFrame;
- (void)createTextureCache;
- (void)destroyGLContextIfExist;
- (void)createGLContextIfNeed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

