//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YtFaceFrameInfo : NSObject
{
    struct Mat _faceFrame;
    struct TC_FaceShape _faceShape;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct TC_FaceShape faceShape; // @synthesize faceShape=_faceShape;
@property(nonatomic) struct Mat faceFrame; // @synthesize faceFrame=_faceFrame;
- (id)initWithMat:(struct Mat *)arg1 withShape:(struct TC_FaceShape *)arg2;

@end

