//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter, GPUImageLuminanceRangeFilter, GPUImageSaturationFilter;

@interface GPUImageiOSBlurFilter : GPUImageFilterGroup
{
    GPUImageSaturationFilter *saturationFilter;
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageLuminanceRangeFilter *luminanceRangeFilter;
    double blurRadiusInPixels;
    double saturation;
    double _downsampling;
}

- (void).cxx_destruct;
@property(nonatomic) double downsampling; // @synthesize downsampling=_downsampling;
@property(nonatomic) double rangeReductionFactor;
@property(nonatomic) double saturation; // @synthesize saturation;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end

