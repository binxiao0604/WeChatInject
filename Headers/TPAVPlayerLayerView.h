//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol TPAVPlayerLayerViewDelegate;

@interface TPAVPlayerLayerView : UIView
{
    _Bool _firstFrameRendered;
    id <TPAVPlayerLayerViewDelegate> _delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TPAVPlayerLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setNeedsDisplay;
- (void)resetView;
- (void)setLayerPlayer:(id)arg1;
@property(nonatomic) NSString *videoFillMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

