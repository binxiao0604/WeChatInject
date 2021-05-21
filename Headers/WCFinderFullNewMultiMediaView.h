//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EditVideoBGMPlayerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class EditVideoBGMPlayer, MMTimer, NSString, UICollectionView, UIImage, UIImageView, UILabel, WCFinderDataItem, WCFinderPageControl, WCFinderProgressBarStatusInfo;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderFullNewMultiMediaViewDelegate;

@interface WCFinderFullNewMultiMediaView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EditVideoBGMPlayerDelegate>
{
    _Bool _selectEnable;
    _Bool _hiddenOtherControlElement;
    _Bool _hiddenDefaultBackground;
    _Bool _lastPhotoScrollByManual;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderFullNewMultiMediaViewDelegate> _postDelegate;
    UICollectionView *_mediaCollectionView;
    WCFinderPageControl *_pageCtrl;
    long long _dataScene;
    NSString *_dataTid;
    long long _dataPos;
    double _feedFetchTime;
    unsigned long long _currentPage;
    WCFinderDataItem *_dataItem;
    UIView *_warningView;
    UILabel *_warningLabel;
    WCFinderProgressBarStatusInfo *_progressBarStatusForReuse;
    UIImage *_tmpThumbImage;
    UIImageView *_privateTipsView;
    MMTimer *_collectionShufflingTimer;
    EditVideoBGMPlayer *_bgmPlayer;
    double _loadingTopOffset;
    MMTimer *_browseDurationTimer;
    struct CGSize _mediaSize;
}

+ (double)bottomProgressBlankHeight;
+ (double)calculateWidthForGivingHeight:(double)arg1 withDataItem:(id)arg2;
+ (double)pureMediaHeighForDataItem:(id)arg1 size:(struct CGSize)arg2;
+ (id)mediaWithDataItem:(id)arg1 width:(double)arg2 height:(double)arg3 currentSelectIndex:(unsigned long long)arg4 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool lastPhotoScrollByManual; // @synthesize lastPhotoScrollByManual=_lastPhotoScrollByManual;
@property(retain, nonatomic) MMTimer *browseDurationTimer; // @synthesize browseDurationTimer=_browseDurationTimer;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) MMTimer *collectionShufflingTimer; // @synthesize collectionShufflingTimer=_collectionShufflingTimer;
@property(retain, nonatomic) UIImageView *privateTipsView; // @synthesize privateTipsView=_privateTipsView;
@property(retain, nonatomic) UIImage *tmpThumbImage; // @synthesize tmpThumbImage=_tmpThumbImage;
@property(retain, nonatomic) WCFinderProgressBarStatusInfo *progressBarStatusForReuse; // @synthesize progressBarStatusForReuse=_progressBarStatusForReuse;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool hiddenDefaultBackground; // @synthesize hiddenDefaultBackground=_hiddenDefaultBackground;
@property(nonatomic) _Bool hiddenOtherControlElement; // @synthesize hiddenOtherControlElement=_hiddenOtherControlElement;
@property(nonatomic) double feedFetchTime; // @synthesize feedFetchTime=_feedFetchTime;
@property(nonatomic) long long dataPos; // @synthesize dataPos=_dataPos;
@property(retain, nonatomic) NSString *dataTid; // @synthesize dataTid=_dataTid;
@property(nonatomic) long long dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) WCFinderPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UICollectionView *mediaCollectionView; // @synthesize mediaCollectionView=_mediaCollectionView;
@property(nonatomic) _Bool selectEnable; // @synthesize selectEnable=_selectEnable;
@property(nonatomic) __weak id <WCFinderFullNewMultiMediaViewDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void)unifiedURLIfNeeded:(id)arg1;
- (void)updateLiveSize:(struct CGSize)arg1;
- (_Bool)mediaIsOnPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (_Bool)collectionViewIsOnScrollState;
- (void)stopScroll;
- (void)startBrowseTimerCheck;
- (void)startScroll;
- (void)stopBGMPlay;
- (void)startBGMPlay;
- (void)updateCollectionViewCurrentCellPlayStateIfVideo;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCurrentVideoThumb;
- (id)getPhotoThumbImage;
- (id)getCurCollectionViewCellRetryStateImageView;
- (id)getCurrendThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)progressBarValueChange:(double)arg1 dragState:(unsigned long long)arg2 playVideo:(_Bool)arg3;
- (void)stopVideoIfSupport;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2 isFullScreenViewScene:(_Bool)arg3 pauseVideo:(_Bool)arg4;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (void)onPageCtrlValueChange;
- (void)resetBGMPlay;
- (void)resetReuseState;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)initSubView;
- (void)setShowPrivateTipsIcon:(_Bool)arg1;
- (void)onCollectionViewTriggerShufflingLogic;
- (_Bool)shouldTriggerShufflingLogic;
- (void)resetCollectionBrowseTimer;
- (void)resetCollectionShufflingTimer;
- (void)onCollectionViewBrowseLongTime;
- (void)restartCollectionViewShufflingTimerWithTimeInterval:(long long)arg1;
- (void)changeDataWithDataItem:(id)arg1 width:(double)arg2 height:(double)arg3 currentSelectIndex:(unsigned long long)arg4 useTmpThumbImage:(id)arg5 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 andDataItem:(id)arg2 currentSelectIndex:(unsigned long long)arg3 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

