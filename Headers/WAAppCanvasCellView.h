//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseCellView.h"

@class MMUILabel, MMWebImageView, WAAppCanvasViewModel, WAAppCanvasWrapperView;

@interface WAAppCanvasCellView : WAAppMessageBaseCellView
{
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    MMUILabel *_titleLabel;
    WAAppCanvasWrapperView *_canvasWrapperView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppCanvasWrapperView *canvasWrapperView; // @synthesize canvasWrapperView=_canvasWrapperView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (void)onShowJSLogMenuItem:(id)arg1;
- (_Bool)canShowJSLogMenuItem;
- (id)queryOfUrl:(id)arg1;
- (id)pathOfUrl:(id)arg1;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)layoutContentView;
- (void)dealloc;
- (void)initCanvasView;
- (void)initTitleView;
- (void)initHeaderView;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAAppCanvasViewModel *viewModel; // @dynamic viewModel;

@end

