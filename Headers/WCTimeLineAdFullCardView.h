//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCSightViewDelegate-Protocol.h"

@class CAShapeLayer, NSArray, NSMutableArray, NSString, UIBezierPath, UIButton, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer, WCGestureReportInfo, WCTimeLineAdFullCardSightView;

@interface WCTimeLineAdFullCardView : WCContentItemBaseView <WCSightViewDelegate>
{
    unsigned long long m_uiGestureStartTime;
    unsigned long long m_uiGestureEndTime;
    double m_uiGestureDistance;
    NSArray *m_uiGestureTargetPoint;
    NSArray *m_uiGestureTargetPointReverse;
    UIColor *m_uiGestureColor;
    _Bool m_IsGestureAd;
    UIPanGestureRecognizer *m_uiPanGestureRecognizer;
    unsigned int m_sourceType;
    _Bool _shouldSeekToTheBeginning;
    UIButton *_adTouchButton;
    WCTimeLineAdFullCardSightView *_sightView;
    CAShapeLayer *_slayer;
    UIBezierPath *_bPath;
    NSMutableArray *_sourcePoints;
    WCGestureReportInfo *_gestureReportInfo;
    long long _longPressGestureState;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    double _lastSeekTimestamp;
}

+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastSeekTimestamp; // @synthesize lastSeekTimestamp=_lastSeekTimestamp;
@property(nonatomic) _Bool shouldSeekToTheBeginning; // @synthesize shouldSeekToTheBeginning=_shouldSeekToTheBeginning;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) long long longPressGestureState; // @synthesize longPressGestureState=_longPressGestureState;
@property(retain, nonatomic) WCGestureReportInfo *gestureReportInfo; // @synthesize gestureReportInfo=_gestureReportInfo;
@property(retain, nonatomic) NSMutableArray *sourcePoints; // @synthesize sourcePoints=_sourcePoints;
@property(retain, nonatomic) UIBezierPath *bPath; // @synthesize bPath=_bPath;
@property(retain, nonatomic) CAShapeLayer *slayer; // @synthesize slayer=_slayer;
@property(retain, nonatomic) WCTimeLineAdFullCardSightView *sightView; // @synthesize sightView=_sightView;
@property(retain, nonatomic) UIButton *adTouchButton; // @synthesize adTouchButton=_adTouchButton;
- (void)endLongPressActionReportWithResult:(unsigned long long)arg1;
- (void)startLongPressActionReport;
- (void)sightViewLongPressGestureEnd;
- (void)onLongPressDone;
- (void)removeLongPressGestureRecognizer;
- (void)addLongPressGestureRecognizer;
- (void)handleLongPressGestureWithPlaybackTime:(double)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)initLongPressGestureWith:(id)arg1;
- (void)doGestureChannelReport:(int)arg1 score:(float)arg2 targetScore:(float)arg3;
- (long long)getSamplingInterval:(long long)arg1;
- (void)onGestureEnd:(struct CGPoint)arg1;
- (void)handleUIGestureWithPlaybackTime:(double)arg1;
- (void)unregisterUIPanGestureRecognizer;
- (void)registerUIPanGestureRecognizer;
- (void)onUIGesureEvent:(id)arg1;
- (void)startGestureWithoutWCPlayer;
- (void)initUIGesture:(id)arg1;
- (void)onActionOccurForGestureType:(long long)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)dealloc;
- (void)onClick:(long long)arg1;
- (void)delayClearTouchButtonColor;
- (void)delayClickAdTouchButton;
- (id)getVoiceOverStrForTimeline;
- (void)contentItemDidEndDecelerating;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDisplaying;
- (void)onVoiceOverClick;
- (void)onClickAdTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)addButtonForItem:(id)arg1;
- (void)playerSeekToTime:(double)arg1;
- (id)fetchSightSnapshot;
- (void)setPlayerContentHidden:(_Bool)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (void)addSightViewWithMediaItem:(id)arg1;
- (void)initSightAndCoverView:(id)arg1;
- (void)addImageViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

