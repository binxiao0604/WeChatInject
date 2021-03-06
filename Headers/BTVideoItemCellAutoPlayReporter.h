//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class BTVideoItemCellAutoPlayReportData;

@interface BTVideoItemCellAutoPlayReporter : MMObject
{
    BTVideoItemCellAutoPlayReportData *m_data;
    unsigned int m_autoPlayId;
    unsigned long long m_buffStartTime;
    unsigned long long m_firstFrameStartTime;
    _Bool m_reportOnVideoPlayOnce;
    _Bool m_reportOnVideoPauseOnce;
}

- (void).cxx_destruct;
- (void)doReport:(unsigned int)arg1 buffDuration:(unsigned long long)arg2;
- (unsigned int)getAutoPlayId;
- (unsigned long long)getPlayDuration;
- (void)onOpenVideoLandingPage;
- (void)onVideoEndBuffering;
- (void)onVideoBeginBuffering;
- (void)onVideoPause:(unsigned long long)arg1 playDuration:(unsigned long long)arg2;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay;
- (void)onVideoCreate:(id)arg1;
- (id)init;
- (void)reset;

@end

