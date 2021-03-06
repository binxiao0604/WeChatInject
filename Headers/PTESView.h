//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTRenderView.h"

@class CAEAGLLayer, EAGLContext, NSLock;

@interface PTESView : PTRenderView
{
    EAGLContext *_context;
    CAEAGLLayer *_eagLayer;
    unsigned int _colorRenderBuffer;
    unsigned int _depthRenderBuffer;
    unsigned int _frameBuffer;
    long long _currentWidth;
    long long _currentHeight;
    NSLock *_contextLock;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)swap;
- (void)setCurrentContext;
- (void)setupWithParentView:(id)arg1;
- (void)layoutSubviews;
- (void)makeCurrent;
- (void)dealloc;
- (id)initWithParentView:(id)arg1;

@end

