//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditImageViewController.h"

@class WCFinderAlbumScrollViewParamModel;

@interface WCFinderHalfScreenEditImageViewController : WCEditImageViewController
{
    _Bool _hiddenCropBtn;
    _Bool _forbiddenFrameCrop;
    double _stageFrameY;
    WCFinderAlbumScrollViewParamModel *_previewScrollViewParamModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbiddenFrameCrop; // @synthesize forbiddenFrameCrop=_forbiddenFrameCrop;
@property(retain, nonatomic) WCFinderAlbumScrollViewParamModel *previewScrollViewParamModel; // @synthesize previewScrollViewParamModel=_previewScrollViewParamModel;
@property(nonatomic) double stageFrameY; // @synthesize stageFrameY=_stageFrameY;
@property(nonatomic) _Bool hiddenCropBtn; // @synthesize hiddenCropBtn=_hiddenCropBtn;
- (void)onEditImageLayoutViewChangeAssetSuc;
- (void)showEditImageViewOn;
- (void)viewDidLoad;
- (id)initWithAssets:(id)arg1 images:(id)arg2 tempView:(id)arg3 hiddenCropBtn:(_Bool)arg4 forbiddenFrameCrop:(_Bool)arg5;
- (id)initWithImage:(id)arg1 editImageAttr:(id)arg2 hiddenCropBtn:(_Bool)arg3 stageFrameY:(double)arg4 forbiddenFrameCrop:(_Bool)arg5;
- (id)initWithImage:(id)arg1 editImageAttr:(id)arg2 hiddenCropBtn:(_Bool)arg3 previewScrollViewParamModel:(id)arg4;

@end

