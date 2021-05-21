//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellViewModel.h"

#import "BTItemCellViewModelVideoPlayProtocol-Protocol.h"
#import "BTVideoItemCellAutoPlayerDelegate-Protocol.h"

@class BTVideoItemCellAutoPlayReporter, BTVideoItemCellAutoPlayerView, NSString;

@interface BTVideoItemCellViewModel : BTReaderItemCellViewModel <BTVideoItemCellAutoPlayerDelegate, BTItemCellViewModelVideoPlayProtocol>
{
    _Bool m_gotUrl;
    _Bool m_isGettingUrl;
    NSString *m_videoUrl;
    unsigned long long m_videoUrlExpiredTime;
    _Bool _isVideoCoveredByTitlePlaying;
    _Bool _isPrepareToPlay;
    _Bool _videoHasBeganBuffering;
    NSString *_timeStr;
    unsigned long long _status;
    BTVideoItemCellAutoPlayerView *_autoPlayerView;
    BTVideoItemCellAutoPlayReporter *_reporter;
}

+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) BTVideoItemCellAutoPlayReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) BTVideoItemCellAutoPlayerView *autoPlayerView; // @synthesize autoPlayerView=_autoPlayerView;
@property(nonatomic) _Bool videoHasBeganBuffering; // @synthesize videoHasBeganBuffering=_videoHasBeganBuffering;
@property(nonatomic) _Bool isPrepareToPlay; // @synthesize isPrepareToPlay=_isPrepareToPlay;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isVideoCoveredByTitlePlaying; // @synthesize isVideoCoveredByTitlePlaying=_isVideoCoveredByTitlePlaying;
@property(retain, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
- (unsigned long long)getIndexForMsgSectionData;
- (id)getVideoView;
- (id)getCellView;
- (void)destoryVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)initVideo;
- (id)autoPlayDescription;
- (_Bool)canAutoPlay;
- (id)genBTVideoItemCellAutoPlayReportData;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (id)syncCaptureVideo;
- (double)getCurrentPlayedTime;
- (void)resetVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)playVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)initVideoPlayerView;
- (id)timeStrWithDurationInSeconds:(unsigned long long)arg1;
- (id)remainTimeStrWithPlayedTime;
- (id)friendsReadStr;
- (double)viewHeight;
- (double)titleMaxWidth;
- (unsigned long long)titleLineNumber;
- (id)titleFont;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)arg1;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

