//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditImageWidgetTool.h"

@class NSString, UIImageView;

@interface EditImageEmotionTool : EditImageWidgetTool
{
    double _imgWidth;
    double _imgHeight;
    UIImageView *_imageView;
    double _zoomScaleWhenInit;
    _Bool _animatable;
    NSString *_emotionMd5;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatable; // @synthesize animatable=_animatable;
@property(retain, nonatomic) NSString *emotionMd5; // @synthesize emotionMd5=_emotionMd5;
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
- (void)didSelectEmotion:(id)arg1 withCenterPoint:(struct CGPoint)arg2 md5:(id)arg3;

@end

