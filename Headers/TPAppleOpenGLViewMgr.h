//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, TPAppleOpenGLView, UIView;

@interface TPAppleOpenGLViewMgr : NSObject
{
    _Bool _inited;
    _Bool _waitingForMainThread;
    _Bool _glActive;
    int _gravity;
    int _tryLockErrorCount;
    TPAppleOpenGLView *_glView;
    UIView *_containerView;
    struct ITPRendererInterruptCallback *_interruptCallback;
    NSRecursiveLock *_glActiveLock;
    struct TPRendererVideoFrameParams _curFrameParams;
    struct TPRendererConfigs _configs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int tryLockErrorCount; // @synthesize tryLockErrorCount=_tryLockErrorCount;
@property _Bool glActive; // @synthesize glActive=_glActive;
@property(retain) NSRecursiveLock *glActiveLock; // @synthesize glActiveLock=_glActiveLock;
@property _Bool waitingForMainThread; // @synthesize waitingForMainThread=_waitingForMainThread;
@property(nonatomic) struct ITPRendererInterruptCallback *interruptCallback; // @synthesize interruptCallback=_interruptCallback;
@property(nonatomic) int gravity; // @synthesize gravity=_gravity;
@property(nonatomic) struct TPRendererVideoFrameParams curFrameParams; // @synthesize curFrameParams=_curFrameParams;
@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
@property(nonatomic) struct TPRendererConfigs configs; // @synthesize configs=_configs;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) TPAppleOpenGLView *glView; // @synthesize glView=_glView;
- (int)waitForMainThread;
- (struct TPRendererVideoFrameParams)getFrameParams:(struct TPFrame *)arg1;
- (long long)getContentModeFromGravity:(int)arg1;
- (int)writeOneFrameToGLView:(struct TPFrame *)arg1;
- (void)removeGLView;
- (int)createGLView:(struct TPRendererVideoFrameParams)arg1;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)toggleGLActive:(_Bool)arg1;
- (_Bool)tryLockGLActive;
- (void)unlockGLActive;
- (void)lockGLActive;
- (_Bool)isGLActive;
- (int)setVideoGravity:(int)arg1;
- (int)setVideoRenderTarget:(id)arg1;
- (int)writeOneFrame:(struct TPFrame *)arg1;
- (int)flush;
- (_Bool)isInited;
- (int)unInitRenderer;
- (int)initRenderer;
- (int)configure:(struct TPRendererConfigs)arg1;
- (void)dealloc;
- (id)init;

@end

