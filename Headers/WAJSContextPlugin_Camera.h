//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "WAJSContextPlugin_NativeViewsRootViewProtocol-Protocol.h"

@class NSString, WAPluginComponent_Camera;

@interface WAJSContextPlugin_Camera : WAJSContextPluginBase <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    WAPluginComponent_Camera *_cameraComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPluginComponent_Camera *cameraComponent; // @synthesize cameraComponent=_cameraComponent;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (void)operateCamera:(id)arg1 cameraId:(unsigned int)arg2 compelete:(CDUnknownBlockType)arg3;
- (void)resizeVideo:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (unsigned int)insertCameraWithConfig:(id)arg1 pos:(struct CGRect)arg2 cameraId:(unsigned int)arg3 parentId:(unsigned int)arg4 size:(struct CGSize *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

