//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPMetalRenderBase.h"

@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalRGBRender : TPMetalRenderBase
{
    struct __CVMetalTextureCache *_textureCache;
    id <MTLTexture> _rgbaTexture;
    MTLTextureDescriptor *_rgbaDescriptor;
    int _width;
    int _height;
}

- (void).cxx_destruct;
- (unsigned long long)pixelFormatFromFrame:(struct TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (_Bool)uploadTexturesForFrameFrowRawData:(struct TPFrame *)arg1;
- (_Bool)onMetalContextReady;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (void)dealloc;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

@end

