//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageCropFilter, GPUImageNewBeautifyFilter, GPUImageSpatiotemporalDenosing;

@interface GPUImageDenosingBeauty : GPUImageFilterGroup
{
    GPUImageCropFilter *cropFilter;
    GPUImageSpatiotemporalDenosing *spatiotemporalDenosing;
    GPUImageNewBeautifyFilter *beautyFilter;
    int orignalWidth;
    int orignalHeight;
    _Bool useBeauty;
    _Bool useSTFilter;
    _Bool useCrop;
    _Bool useResampling;
    struct CGRect cropRegion;
    struct CGSize resamplingSize;
}

- (void).cxx_destruct;
- (void)setResampingSize:(struct CGSize)arg1;
- (void)setCropRegion:(struct CGSize)arg1;
- (void)setOrignalReslution:(struct CGSize)arg1;
- (void)setTemporalDenosingSwitch:(int)arg1;
- (void)setNoiseLevel:(float)arg1;
- (void)setTemporalDenosingLevel:(int)arg1;
- (id)init:(_Bool)arg1 useSTFilter:(_Bool)arg2 useCrop:(_Bool)arg3 useResampling:(_Bool)arg4;

@end

