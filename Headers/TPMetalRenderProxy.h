//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TPMetalRender-Protocol.h"

@class NSString, TPMetalColorHelper;
@protocol MTLDevice, TPMetalRender;

@interface TPMetalRenderProxy : NSObject <TPMetalRender>
{
    TPMetalColorHelper *_colorHelper;
    _Bool _colorMangementFlag;
    id <MTLDevice> _metalDevice;
    id <TPMetalRender> _nv12Render;
    id <TPMetalRender> _i420Render;
    id <TPMetalRender> _rgbaRender;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool colorMangementFlag; // @synthesize colorMangementFlag=_colorMangementFlag;
@property(retain, nonatomic) id <TPMetalRender> rgbaRender; // @synthesize rgbaRender=_rgbaRender;
@property(retain, nonatomic) id <TPMetalRender> i420Render; // @synthesize i420Render=_i420Render;
@property(retain, nonatomic) id <TPMetalRender> nv12Render; // @synthesize nv12Render=_nv12Render;
@property(retain, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
- (void)setColorHelper:(id)arg1;
- (_Bool)prepareRender;
- (void)createRGBARender;
- (void)createI420Render;
- (void)createNV12Render;
- (id)chooseRender:(struct TPFrame *)arg1;
- (_Bool)drawFrame:(struct TPFrame *)arg1 withDestination:(id)arg2;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

