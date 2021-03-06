//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WeVisPixelBuffer : NSObject
{
    struct __CVBuffer *_pixelBufferRef;
    CDUnknownBlockType _cleanupCallback;
}

+ (id)bufferWithBGRAWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cleanup:(CDUnknownBlockType)arg3;
+ (id)bufferWithNV12WidthY:(unsigned long long)arg1 heightY:(unsigned long long)arg2 cleanup:(CDUnknownBlockType)arg3;
+ (id)bufferWithCVPixelBuffer:(struct __CVBuffer *)arg1 cleanup:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cleanupCallback; // @synthesize cleanupCallback=_cleanupCallback;
@property(nonatomic) struct __CVBuffer *pixelBufferRef; // @synthesize pixelBufferRef=_pixelBufferRef;
- (id)cloneYUV;
- (void)dealloc;

@end

