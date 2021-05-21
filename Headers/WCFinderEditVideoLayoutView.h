//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditVideoLayoutView.h"

#import "WCEditImageOperationDelegate-Protocol.h"
#import "WCFinderEditFrameBlurViewDelegate-Protocol.h"
#import "WCFinderEditVideoCropViewDelegate-Protocol.h"
#import "WCFinderEditVideoMultiVideoCropViewDelegate-Protocol.h"
#import "WCFinderEditVideoProgressInfoViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView, WCFinderAlbumScrollViewParamModel, WCFinderEditFrameBlurView, WCFinderEditVideoCropView, WCFinderEditVideoMultiVideoCropView, WCFinderEditVideoPorgressInfoViewModel, WCFinderEditVideoProgressInfoView;
@protocol WCFinderEditVideoLayoutViewDelegate;

@interface WCFinderEditVideoLayoutView : WCEditVideoLayoutView <WCFinderEditVideoProgressInfoViewDelegate, WCFinderEditVideoCropViewDelegate, WCEditImageOperationDelegate, WCFinderEditFrameBlurViewDelegate, WCFinderEditVideoMultiVideoCropViewDelegate>
{
    _Bool _enableCropVideoSize;
    _Bool _isTimeCropDragging;
    _Bool _lastCropViewHeight;
    id <WCFinderEditVideoLayoutViewDelegate> _finderDelegate;
    UIView *_headBlurView;
    UIView *_bottomBlurView;
    WCFinderAlbumScrollViewParamModel *_scrollViewParamModel;
    WCFinderEditVideoProgressInfoView *_progressView;
    WCFinderEditVideoCropView *_finderEditVideoCropView;
    WCFinderEditVideoMultiVideoCropView *_multiVideoTimeCropView;
    WCFinderEditFrameBlurView *_frameCropView;
    WCFinderEditVideoPorgressInfoViewModel *_progressViewModel;
    unsigned long long _currentPlayIndex;
    NSMutableArray *_previewDatas;
    UIPanGestureRecognizer *_panInView;
    UIPinchGestureRecognizer *_pinchInView;
    long long _singleCropIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long singleCropIndex; // @synthesize singleCropIndex=_singleCropIndex;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchInView; // @synthesize pinchInView=_pinchInView;
@property(retain, nonatomic) UIPanGestureRecognizer *panInView; // @synthesize panInView=_panInView;
@property(nonatomic) _Bool lastCropViewHeight; // @synthesize lastCropViewHeight=_lastCropViewHeight;
@property(nonatomic) _Bool isTimeCropDragging; // @synthesize isTimeCropDragging=_isTimeCropDragging;
@property(retain, nonatomic) NSMutableArray *previewDatas; // @synthesize previewDatas=_previewDatas;
@property(nonatomic) unsigned long long currentPlayIndex; // @synthesize currentPlayIndex=_currentPlayIndex;
@property(retain, nonatomic) WCFinderEditVideoPorgressInfoViewModel *progressViewModel; // @synthesize progressViewModel=_progressViewModel;
@property(retain, nonatomic) WCFinderEditFrameBlurView *frameCropView; // @synthesize frameCropView=_frameCropView;
@property(retain, nonatomic) WCFinderEditVideoMultiVideoCropView *multiVideoTimeCropView; // @synthesize multiVideoTimeCropView=_multiVideoTimeCropView;
@property(retain, nonatomic) WCFinderEditVideoCropView *finderEditVideoCropView; // @synthesize finderEditVideoCropView=_finderEditVideoCropView;
@property(retain, nonatomic) WCFinderEditVideoProgressInfoView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) WCFinderAlbumScrollViewParamModel *scrollViewParamModel; // @synthesize scrollViewParamModel=_scrollViewParamModel;
@property(retain, nonatomic) UIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) _Bool enableCropVideoSize; // @synthesize enableCropVideoSize=_enableCropVideoSize;
@property(nonatomic) __weak id <WCFinderEditVideoLayoutViewDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
- (id)getMusicLogoName;
- (void)addPatMusicInfoToBGMLogic;
- (void)finderEditFrameBlurView:(id)arg1 endEditing:(_Bool)arg2;
- (struct CGRect)currentPreviewRect;
- (void)handleScrollViewPinchGesture:(id)arg1;
- (void)makePlayerViewLayoutLegalToCropView;
- (void)setPlayerViewZoomScaleFillToCropRect;
- (struct CGSize)getCurrentAssetSize;
- (struct CGRect)videoRectInPlayerAtIndex:(unsigned long long)arg1;
- (struct CGRect)playerRectAtIndex:(unsigned long long)arg1;
- (struct CGRect)visibleRectOfVideoAtIndex:(unsigned long long)arg1;
- (struct CGRect)currentVideoVisibleRect;
- (_Bool)currentPlayerViewLayoutIsIllegal;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)handleScrollViewPanGesutre:(id)arg1;
- (void)finderEditCropView:(id)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)finderEditCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)finderEditCropView:(id)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)finderEditCropView:(id)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndDeceleratingWithProgress:(double)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickPlayButtonWithPlayState:(_Bool)arg2;
- (void)finderMultiVideoTimeCropView:(id)arg1 didScrollWithProgress:(double)arg2 withIndex:(unsigned long long)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didEndChangeCropTimeWithAttr:(id)arg2 pauseAtTime:(double)arg3 index:(unsigned long long)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didChangePanSingleVideoAtIndex:(unsigned long long)arg2 progress:(double)arg3 withAttr:(id)arg4;
- (void)finderMultiVideoTimeCropView:(id)arg1 didStartPanSingleVideoAtIndex:(unsigned long long)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickCancelButton:(id)arg2 withAttr:(id)arg3;
- (void)finderMultiVideoTimeCropView:(id)arg1 didClickDoneButton:(id)arg2 withAttr:(id)arg3;
- (void)setEditVideoCropViewHidden:(_Bool)arg1;
- (void)setEditMultiVideoTimeCropViewHidden:(_Bool)arg1;
- (void)finderEditVideoProgressInfoView:(id)arg1 didEndDraggingWidhProgress:(double)arg2;
- (void)finderEditVideoProgressInfoViewDidStartDragging;
- (void)finderEditVideoScrollViewDidEndDeceleratingWithProgress:(double)arg1;
- (void)finderEditVideo:(id)arg1 didScrollIsDecelerating:(_Bool)arg2;
- (void)finderEditVideoProgressInfoView:(id)arg1 didClickRow:(unsigned long long)arg2;
- (void)finderEditVideoProgressInfoView:(id)arg1 didTriggerSeekWithProgress:(double)arg2;
- (void)previewBrowserViewDidReachEnd:(id)arg1;
- (void)onClickCropEdit:(id)arg1;
- (void)updateCompositionWithEditVideoAttr:(id)arg1 needFullVideoCrop:(_Bool)arg2;
- (void)updateSingleCompositionWithEditVideoAttr:(id)arg1 index:(long long)arg2;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)adjustVideoPreviewWithPreviewData:(id)arg1;
- (void)removeBlurView;
- (id)previewMoveDatas;
- (void)adjustVideosFrame;
- (struct CGPoint)cropRectCenterOffset;
- (struct CGRect)currentCropRect;
- (void)addBlurView;
- (void)scrollViewHandleDoubleClickGesture:(id)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)setBGMViewButtonOption;
- (void)layoutSubviews;
- (void)setupProgressView;
- (void)setupCropView;
- (struct CGRect)adjustCropViewHeight:(struct CGRect)arg1;
- (void)setupEditFrameBlurView;
- (void)setupMultiVideoTimeCropView;
- (void)setupData;
- (void)adjustScrollViewInset;
- (void)cropVideoOutOfLimit;
- (void)makePlayerViewFillToCropRect;
- (void)genThumbImage;
- (void)initView;
- (void)updateFinderProgressBarWithAttr:(id)arg1;
- (void)initCropToolAttrBar;
- (id)initWithFrame:(struct CGRect)arg1 enableCropVideoSize:(_Bool)arg2 scrollViewParamModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
