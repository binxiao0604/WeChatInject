//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "FavSightFullScreenViewControllerDelegate-Protocol.h"
#import "FavVideoCompressExt-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IFavCdnDownloadMgrExt-Protocol.h"

@class FavSightFullScreenViewController, FavSightInfo, NSString, WCPlayerConfigControlView, WCPlayerPlayArgs, WCPlayerView;
@protocol FavSightViewDelegate;

@interface FavSightView : MMUIView <IFavCdnDownloadMgrExt, FavVideoCompressExt, FavSightFullScreenViewControllerDelegate, ICdnComMgrExt>
{
    WCPlayerView *m_sightView;
    WCPlayerConfigControlView *m_controlView;
    WCPlayerPlayArgs *m_playerInfo;
    FavSightFullScreenViewController *m_viewController;
    FavSightInfo *m_sightInfo;
    _Bool m_fileReady;
    _Bool m_bFullScreen;
    _Bool m_downloading;
    _Bool _autoPlay;
    _Bool _hideIcon;
    id <FavSightViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavSightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
- (void)onExitFullScreen;
- (void)onJumpToUrl:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnFavCdnDownload:(id)arg1 TotalLength:(int)arg2 FinishLength:(int)arg3;
- (_Bool)tryFixUnplayableVideo;
- (_Bool)isFileExistAndComplete:(id)arg1;
- (void)checkData;
- (void)setLoadingState:(_Bool)arg1;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)setToolViewHidden:(_Bool)arg1;
- (void)setVideoPath:(id)arg1;
- (double)getSightHeight;
- (void)refreshThumb;
- (void)stopPlayer;
- (void)pauseVideo;
- (void)playVideo;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSightDelegate:(id)arg1;
- (void)dealloc;
- (void)onClickSight;
- (id)initWithWidth:(double)arg1 favSightInfo:(id)arg2 fullScreen:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
