//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EJDrawableHandler-Protocol.h"

@class CADisplayLink, EAGLContext, JITRunTimeHandler, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, NSThread, WAEJBindingCanvasContext2D, WAEJBindingCanvasContextWebGL, WAEJBindingGlobalUtils, WAEJCanvasContext, WAEJClassLoader, WAEJFileSystem, WAEJFontCache, WAEJFrameCapture, WAEJNonRetainingProxy, WAEJObjClass, WAEJObjectMemoryMgr, WAEJRenderTriggerCollection, WAEJSharedOpenGLContext, WAEJSharedTextureCache, WAEJTimerCollection;
@protocol EJGestureDelegate, EJNativeLogViewDelegate, EJPresentable, EJTouchDelegate, EJWindowEventsDelegate, JITHandlerDelegate, WABindingDelegate;

@interface WAEJJavaScriptView : UIView <EJDrawableHandler>
{
    struct CGSize oldSize;
    NSString *appFolder;
    _Bool hasScreenCanvas;
    _Bool isPaused;
    _Bool isEnterBackground;
    _Bool isRenderTriggersPaused;
    _Bool exitOnMenuPress;
    _Bool landScape;
    WAEJNonRetainingProxy *proxy;
    struct OpaqueJSContext *jsGlobalContext;
    struct OpaqueJSContext *jsSubContext;
    WAEJClassLoader *classLoader;
    WAEJTimerCollection *timers;
    WAEJRenderTriggerCollection *renderTriggers;
    WAEJSharedOpenGLContext *openGLContext;
    WAEJSharedTextureCache *textureCache;
    WAEJFontCache *fontCache;
    WAEJCanvasContext *currentRenderingContext;
    EAGLContext *glCurrentContext;
    CADisplayLink *displayLink;
    NSObject<EJWindowEventsDelegate> *windowEventsDelegate;
    NSObject<EJTouchDelegate> *touchDelegate;
    WAEJCanvasContext<EJPresentable> *screenRenderingContext;
    id <EJNativeLogViewDelegate> nativeLogDelegate;
    NSOperationQueue *backgroundQueue;
    struct OpaqueJSClass *jsBlockFunctionClass;
    _Bool stoped;
    NSString *appId;
    WAEJFileSystem *fileSystem;
    WAEJBindingGlobalUtils *globalObject;
    struct OpaqueJSValue *jsUndefined;
    long long fps;
    long long time;
    _Bool isCanvasMode;
    _Bool isComponent;
    NSThread *thread;
    _Bool hasSecureCanvas;
    _Bool recordAllocate;
    WAEJObjectMemoryMgr *objectMemoryMgr;
    WAEJBindingCanvasContextWebGL *webGLCtx;
    WAEJBindingCanvasContext2D *canvasCtx;
    _Bool useWebGL;
    _Bool useCommandBuffer;
    id <EJGestureDelegate> gestureDelegate;
    id <WABindingDelegate> bindingDelegate;
    CDStruct_2d91167a *config;
    WAEJFrameCapture *frameCapture;
    JITRunTimeHandler *runtimeHandler;
    id <JITHandlerDelegate> jitEventHandler;
    _Bool bSignalWaiting;
    double _lastTime;
    NSMutableSet *_noRetainingContexts;
    NSMutableDictionary *_noRetainingID2CanvasMap;
    unsigned int _canvasId;
    NSMutableArray *_garbageNativeObjects;
    NSMutableArray *_bindingNativeObjects;
    NSMutableArray *_varianceFpsArray;
    NSMutableArray *_durationArr;
    double _sumDuration;
    double _startTime;
    _Bool _bInterrupt;
    _Bool _resumeRelease;
    NSMutableDictionary *_noRetainingDrawables;
    long long _drawCall;
    long long _vertexCount;
    long long _triangleCount;
    _Bool _bFirstRendered;
    _Bool _bReportFPS;
    long long _frameNum;
    char *_commandString;
    unsigned long long _commandLength;
    struct OpaqueJSValue *_getCommandFunc;
    struct OpaqueJSValue *_clearCommandFunc;
    struct OpaqueJSValue *_resetContextFunc;
    WAEJObjClass *_objClass;
    _Bool stopped;
    CDStruct_2d91167a _config;
    double startTime;
    id <JITHandlerDelegate> _jitEventHandler;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JITHandlerDelegate> jitEventHandler; // @synthesize jitEventHandler=_jitEventHandler;
@property(nonatomic) CDStruct_2d91167a config; // @synthesize config=_config;
@property(retain, nonatomic) JITRunTimeHandler *runtimeHandler; // @synthesize runtimeHandler;
@property(retain, nonatomic) WAEJFrameCapture *frameCapture; // @synthesize frameCapture;
@property(nonatomic) __weak id <WABindingDelegate> bindingDelegate; // @synthesize bindingDelegate;
@property(nonatomic) __weak id <EJGestureDelegate> gestureDelegate; // @synthesize gestureDelegate;
@property(nonatomic) _Bool useCommandBuffer; // @synthesize useCommandBuffer;
@property(nonatomic) _Bool useWebGL; // @synthesize useWebGL;
@property(retain, nonatomic) WAEJBindingCanvasContext2D *canvasCtx; // @synthesize canvasCtx;
@property(retain, nonatomic) WAEJBindingCanvasContextWebGL *webGLCtx; // @synthesize webGLCtx;
@property(nonatomic) _Bool hasSecureCanvas; // @synthesize hasSecureCanvas;
@property(retain, nonatomic) WAEJObjectMemoryMgr *objectMemoryMgr; // @synthesize objectMemoryMgr;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread;
@property(nonatomic) _Bool isComponent; // @synthesize isComponent;
@property(nonatomic) _Bool isCanvasMode; // @synthesize isCanvasMode;
@property(nonatomic) __weak WAEJBindingGlobalUtils *globalObject; // @synthesize globalObject;
@property(nonatomic) _Bool recordAllocate; // @synthesize recordAllocate;
@property(nonatomic) __weak id <EJNativeLogViewDelegate> nativeLogDelegate; // @synthesize nativeLogDelegate;
@property(readonly, nonatomic) WAEJSharedTextureCache *textureCache; // @synthesize textureCache;
@property(readonly, nonatomic) WAEJFontCache *fontCache; // @synthesize fontCache;
@property(nonatomic) _Bool stopped; // @synthesize stopped;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) WAEJFileSystem *fileSystem; // @synthesize fileSystem;
@property(retain, nonatomic) WAEJClassLoader *classLoader; // @synthesize classLoader;
@property(retain, nonatomic) NSOperationQueue *backgroundQueue; // @synthesize backgroundQueue;
@property(retain, nonatomic) WAEJCanvasContext<EJPresentable> *screenRenderingContext; // @synthesize screenRenderingContext;
@property(retain, nonatomic) NSObject<EJTouchDelegate> *touchDelegate; // @synthesize touchDelegate;
@property(retain, nonatomic) NSObject<EJWindowEventsDelegate> *windowEventsDelegate; // @synthesize windowEventsDelegate;
@property(readonly, nonatomic) WAEJSharedOpenGLContext *openGLContext; // @synthesize openGLContext;
@property(retain, nonatomic) WAEJCanvasContext *currentRenderingContext; // @synthesize currentRenderingContext;
@property(nonatomic) _Bool bSignalWaiting; // @synthesize bSignalWaiting;
@property(nonatomic) _Bool landScape; // @synthesize landScape;
@property(readonly, nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) _Bool exitOnMenuPress; // @synthesize exitOnMenuPress;
@property(readonly, nonatomic) struct OpaqueJSContext *jsSubContext; // @synthesize jsSubContext;
@property(readonly, nonatomic) struct OpaqueJSContext *jsGlobalContext; // @synthesize jsGlobalContext;
@property(nonatomic) _Bool hasScreenCanvas; // @synthesize hasScreenCanvas;
@property(nonatomic, getter=isEnterBackground) _Bool isEnterBackground; // @synthesize isEnterBackground;
@property(nonatomic, getter=isPaused) _Bool isPaused; // @synthesize isPaused;
- (void)setInvokeHandlerDelegate:(id)arg1;
- (void)removeDrawableObject:(unsigned int)arg1;
- (id)getDrawableObject:(unsigned int)arg1;
- (void)addDrawableObject:(unsigned int)arg1 drawable:(id)arg2;
- (id)getObjClass;
- (void)batchRender:(id)arg1;
- (void)setBatchRenderingContext:(id)arg1;
- (CDStruct_96b882c6)getPerformance;
- (void)setReportVarianceFps:(_Bool)arg1;
- (long long)getVarianceFps;
- (unsigned int)getRunDuration;
- (void)addNativeBindingObject:(id)arg1;
- (void)addNativeGarbageObject:(id)arg1;
- (void)sendGarbageCollectEvent;
- (void)markBindingObjectStopRender;
- (void)removeCanvasForID:(unsigned int)arg1;
- (unsigned int)setCanvas:(id)arg1;
- (id)getCanvasForElementID:(id)arg1;
- (id)getCanvasForID:(unsigned int)arg1;
- (void)markContextStopRender;
- (void)removeContext:(id)arg1;
- (void)addContext:(id)arg1;
- (void)sendErrorEvent:(id)arg1 desc:(id)arg2 stack:(id)arg3;
- (void)log:(id)arg1 func:(const char *)arg2 line:(int)arg3;
- (void)gameKVReport:(unsigned int)arg1 logstr:(id)arg2;
- (struct OpaqueJSValue *)setPreferredFramesPerSecond:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)deleteRenderTrigger:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)createRenderTrigger:(struct OpaqueJSContext *)arg1 isMain:(_Bool)arg2 argc:(unsigned long long)arg3 argv:(const struct OpaqueJSValue **)arg4;
- (struct OpaqueJSValue *)deleteTimer:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)skipCurrentTaskLoop;
- (void)triggerTimerImmediate:(id)arg1;
- (struct OpaqueJSValue *)createTimer:(struct OpaqueJSContext *)arg1 isMain:(_Bool)arg2 argc:(unsigned long long)arg3 argv:(const struct OpaqueJSValue **)arg4 repeat:(_Bool)arg5;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setInterrupt:(_Bool)arg1;
- (void)stop;
- (void)clearCaches;
- (void)resume;
- (void)pause;
- (void)enterForeground;
- (void)enterBackground;
- (void)listenEnterBackground:(_Bool)arg1;
- (id)readPixels:(unsigned int)arg1 fmt:(int)arg2 width:(unsigned int *)arg3 height:(unsigned int *)arg4;
- (struct OpaqueJSValue *)recordFrame:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)capture:(unsigned int)arg1 height:(unsigned int)arg2 framebuffer:(unsigned int)arg3 reuse:(_Bool)arg4;
- (void)present;
- (void)run:(id)arg1;
- (struct OpaqueJSValue *)createFunctionWithBlock:(CDUnknownBlockType)arg1;
- (struct OpaqueJSValue *)jsValueForPath:(id)arg1;
- (void)logException:(struct OpaqueJSValue *)arg1 ctx:(struct OpaqueJSContext *)arg2;
- (struct OpaqueJSValue *)invokeCallback:(struct OpaqueJSValue *)arg1 isMain:(_Bool)arg2 thisObject:(struct OpaqueJSValue *)arg3 argc:(unsigned long long)arg4 argv:(const struct OpaqueJSValue **)arg5;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (struct OpaqueJSValue *)evaluateScript:(id)arg1;
- (void)loadScriptAtPath:(id)arg1;
- (void)layoutSubviews;
- (void)observeKeyPaths:(id)arg1 selector:(SEL)arg2;
- (void)removeObserverForKeyPaths:(id)arg1;
- (void)releaseContext;
- (void)dealloc;
- (void)setupWithJSContext:(struct OpaqueJSContext *)arg1 name:(const char *)arg2 isComponent:(_Bool)arg3 jitMode:(_Bool)arg4;
- (void)attachJSContext:(struct OpaqueJSContext *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(struct OpaqueJSContext *)arg2 name:(const char *)arg3 config:(id)arg4;

@end

