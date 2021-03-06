//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditImageLayoutView.h"

#import "WCFinderFullScreenEditFrameBlurViewDelegate-Protocol.h"

@class NSString, WCFinderFullScreenEditFrameBlurView;
@protocol WCFinderFullScreenEditImageLayoutViewDelegate;

@interface WCFinderFullScreenEditImageLayoutView : WCEditImageLayoutView <WCFinderFullScreenEditFrameBlurViewDelegate>
{
    _Bool _hiddenCropBtn;
    _Bool _forbiddenFrameCrop;
    _Bool _needAdjustThumbItemSize;
    id <WCFinderFullScreenEditImageLayoutViewDelegate> _finderDelegate;
    double _visibleHeightWidRatio;
    WCFinderFullScreenEditFrameBlurView *_frameCropView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needAdjustThumbItemSize; // @synthesize needAdjustThumbItemSize=_needAdjustThumbItemSize;
@property(retain, nonatomic) WCFinderFullScreenEditFrameBlurView *frameCropView; // @synthesize frameCropView=_frameCropView;
@property(nonatomic) _Bool forbiddenFrameCrop; // @synthesize forbiddenFrameCrop=_forbiddenFrameCrop;
@property(nonatomic) double visibleHeightWidRatio; // @synthesize visibleHeightWidRatio=_visibleHeightWidRatio;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
@property(nonatomic) __weak id <WCFinderFullScreenEditImageLayoutViewDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getTopBarRightView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickFullScreenHelpButton;
- (void)updateFrameCropViewsLayout;
- (void)onClickShowFrameCropButtonAction;
- (void)OnClickEditImageDoneBarButton;
- (void)OnClickEditImageBackBarButton;
- (void)updateCurScrollViewZoomRate;
- (id)getMusicLogoName;
- (struct CGSize)getEditSelectedCollectionViewItemSize;
- (unsigned long long)setBGMViewButtonOption;
- (void)addPatMusicInfoToBGMLogic;
- (void)updateCropLinesWithPoint:(struct CGPoint)arg1;
- (void)onfinderEditFrameBlurViewTap;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(_Bool)arg2;
- (_Bool)isTouchOnEditWidget:(struct CGPoint)arg1;
- (id)roundCornersOnView:(id)arg1 onTopLeft:(_Bool)arg2 topRight:(_Bool)arg3 bottomLeft:(_Bool)arg4 bottomRight:(_Bool)arg5 radius:(float)arg6;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1;
- (struct CGRect)fullScreenCropRect;
- (struct CGRect)currentCropRectInScreen;
- (struct CGRect)currentCropRectInImage;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)reloadBottomEditImageBar;
- (void)onMosaicEditImage:(id)arg1;
- (void)onPenEditImage:(id)arg1;
- (void)reloadMosaicToolAttrBar;
- (void)initMosaicToolAttrBar;
- (void)reloadPenToolAttrBar;
- (void)initPenToolAttrBar;
- (void)addMusicBGMView;
- (id)initWithFrame:(struct CGRect)arg1 hiddenCropBtn:(_Bool)arg2 visibleHeightWidRatio:(double)arg3 forbiddenFrameCrop:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

