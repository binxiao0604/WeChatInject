//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageView.h"

#import "SightPreviewView-Protocol.h"

@class MMQRStrokeView, NSString, StrokeView;
@protocol WCCameraPreviewDelegate;

@interface WCCameraPreview : GPUImageView <SightPreviewView>
{
    double m_zoomLevel;
    _Bool m_isReady;
    struct CGSize sizeInPixels;
    double inputWidth;
    double inputHeight;
    double m_currZoomLevel;
    int m_focusInAnim;
    StrokeView *m_focusStroke;
    MMQRStrokeView *m_qrcodeStroke;
    _Bool m_supportQRFrame;
    _Bool m_isPinching;
    _Bool renderFirstFrame;
    _Bool _lightBoostOn;
    int _videoStabilizationMode;
    id <WCCameraPreviewDelegate> m_delegate;
    NSString *_qrData;
    double _m_lastZoomScale;
}

- (void).cxx_destruct;
@property(nonatomic) double m_lastZoomScale; // @synthesize m_lastZoomScale=_m_lastZoomScale;
@property(retain, nonatomic) NSString *qrData; // @synthesize qrData=_qrData;
@property(nonatomic) int videoStabilizationMode; // @synthesize videoStabilizationMode=_videoStabilizationMode;
@property(nonatomic) _Bool lightBoostOn; // @synthesize lightBoostOn=_lightBoostOn;
@property(readonly, nonatomic) _Bool renderFirstFrame; // @synthesize renderFirstFrame;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=m_zoomLevel;
@property(nonatomic) __weak id <WCCameraPreviewDelegate> m_delegate; // @synthesize m_delegate;
- (id)getShineAnim:(double)arg1 count:(unsigned int)arg2;
- (void)hideFocusFrame;
- (void)removeFocusStroke;
- (void)startFocusAnimAtPoint:(struct CGPoint)arg1;
- (void)forceFocusAnimAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)transformPointToView:(struct CGPoint)arg1;
- (struct CGPoint)transformPointInView:(struct CGPoint)arg1;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (void)forceSetLastZoomScale:(double)arg1;
- (void)setZoomLevel:(double)arg1 immediatly:(_Bool)arg2;
- (void)setReady;
- (_Bool)isReady;
- (void)setQRFrameEnable:(_Bool)arg1;
- (_Bool)supportQRFrame;
- (void)focusCenter;
- (void)handlePinchGesture:(id)arg1;
- (void)handleFocusTap:(id)arg1;
- (void)setupGesture;
- (id)initWithFrame:(struct CGRect)arg1 previewLayer:(id)arg2;

@end

