//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCAdvertiseSphereViewDelegate-Protocol.h"

@class NSString, SightIconView, UIImageView, UILabel, WCAdvertiseSphereView;

@interface WCTimeLineAdSphereCardView : WCContentItemBaseView <WCAdvertiseSphereViewDelegate>
{
    WCAdvertiseSphereView *_sphereView;
    SightIconView *_sightIconView;
    double _currentProgress;
    UIImageView *_weAppLogo;
    UILabel *_weAppTips;
}

+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *weAppTips; // @synthesize weAppTips=_weAppTips;
@property(retain, nonatomic) UIImageView *weAppLogo; // @synthesize weAppLogo=_weAppLogo;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(retain, nonatomic) WCAdvertiseSphereView *sphereView; // @synthesize sphereView=_sphereView;
- (void)onPanGestureEnd;
- (void)onFullCoverButtonClicked;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)tryToResumeLoadingView;
- (void)initSightIconView;
- (void)resourceLoadingWithProgress:(double)arg1;
- (id)getBackGroundColorWhenLoading;
- (void)resourceDidFailed;
- (void)resourceDidLoad;
- (void)resourceLoading;
- (id)genLabelWithFont:(double)arg1 text:(id)arg2;
- (void)genWeAppLogoAndTip;
- (void)addTitleAndDescriptionForItem:(id)arg1;
- (void)addTopRight360Icon;
- (void)addSpherePhotoViewWithMediaItem:(id)arg1;
- (void)addMediaViewForItem:(id)arg1;
- (void)tryToResetSphereMotionData;
- (void)tryToStopSphereMonitoring;
- (void)tryToStartSphereMonitoring;
- (void)contentItemDidEndDecelerating;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (id)fetchOriginSnapshot;
- (id)fetchCurrentSnapshot;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

