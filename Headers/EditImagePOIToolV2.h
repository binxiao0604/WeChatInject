//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditImageWidgetTool.h"

@class NSString, UIView, WCLocationInfo;
@protocol EditImagePOIToolV2Delegate;

@interface EditImagePOIToolV2 : EditImageWidgetTool
{
    WCLocationInfo *_locationInfo;
    NSString *_poiReportStr4Commit;
    id <EditImagePOIToolV2Delegate> _poiDelegate;
    UIView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <EditImagePOIToolV2Delegate> poiDelegate; // @synthesize poiDelegate=_poiDelegate;
@property(copy, nonatomic) NSString *poiReportStr4Commit; // @synthesize poiReportStr4Commit=_poiReportStr4Commit;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
- (void)addShadow:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (id)exportAnimatedLayer;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (_Bool)startEditingText;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)updatePOIReportStr4Commit:(id)arg1;
- (void)updatePOILocationInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

