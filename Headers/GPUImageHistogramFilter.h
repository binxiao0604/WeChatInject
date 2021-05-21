//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class GLProgram;

@interface GPUImageHistogramFilter : GPUImageFilter
{
    int histogramType;
    char *vertexSamplingCoordinates;
    GLProgram *secondFilterProgram;
    GLProgram *thirdFilterProgram;
    int secondFilterPositionAttribute;
    int thirdFilterPositionAttribute;
    unsigned long long _downsamplingFactor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long downsamplingFactor; // @synthesize downsamplingFactor=_downsamplingFactor;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (struct CGSize)outputFrameSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct CGSize)sizeOfFBO;
- (void)dealloc;
- (void)initializeSecondaryAttributes;
- (id)init;
- (id)initWithHistogramType:(int)arg1;

@end

