//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "EditVideoLogicItemExt-Protocol.h"
#import "IMMAssetICloudExt-Protocol.h"
#import "SightAssetPreviewViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCEditVideoViewControllerExt-Protocol.h"

@class AVAsset, AVMutableVideoComposition, NSString, NSURL, SightAssetPreviewView, SightDraft, UIButton, UIImage, UIImageView, UILabel, UIView;
@protocol EVVideoPreviewBrowserViewDelegate;

@interface EVVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, EditVideoLogicItemExt, WCEditVideoViewControllerExt, UIScrollViewDelegate>
{
    NSURL *_outputUrl;
    SightDraft *sightDraft;
    _Bool _isPlaying;
    _Bool _isSending;
    UIView *_maskView;
    SightAssetPreviewView *_playerView;
    UIButton *_playBigButton;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    UIImageView *m_thumbImageView;
    _Bool _isNeedResumeWXMusic;
    AVAsset *avAsset;
    UIImage *thumbImage;
    NSString *assetUrl;
    id <EVVideoPreviewBrowserViewDelegate> _m_delegate;
    AVMutableVideoComposition *_videoComposition;
    CDUnknownBlockType _loadAssetSuccessBlock;
    unsigned long long _asserPrepareInvokeCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long asserPrepareInvokeCount; // @synthesize asserPrepareInvokeCount=_asserPrepareInvokeCount;
@property(copy, nonatomic) CDUnknownBlockType loadAssetSuccessBlock; // @synthesize loadAssetSuccessBlock=_loadAssetSuccessBlock;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(nonatomic) __weak id <EVVideoPreviewBrowserViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *assetUrl; // @synthesize assetUrl;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset;
- (id)getInnerPlayerView;
- (double)listenTimeIntervalInSection;
- (struct CGSize)getThumbImageViewSize;
- (void)setPlayerViewRect:(struct CGRect)arg1 changeSize:(_Bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)onAssetVideoDonwloadFailed:(id)arg1;
- (void)onAssetVideoDownloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)listenPlayProgressWithCMTime:(CDStruct_1b6d18a9)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)onResigned:(id)arg1;
- (void)hiddenThumbImageWhenAssetLoadFinish;
- (void)updatePreviewFrame:(struct CGRect)arg1;
- (void)changePlayStatus:(_Bool)arg1;
- (void)showThumbImageViewWithThumb:(id)arg1;
- (void)initData;
- (void)initMaskView;
- (void)initPlayerViewWithScaleAspectToFill:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (_Bool)isPlaying;
- (void)pause;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)loadAssetAndPauseAtTime:(CDStruct_1b6d18a9)arg1;
- (void)loadAsset;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 scaleAspectToFill:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

