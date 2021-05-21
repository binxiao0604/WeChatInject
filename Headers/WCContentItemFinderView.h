//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "WCFinderShareAbstractCell-Protocol.h"

@class MMWebImageView, NSString, SightIconView, UILabel, UIView, WCContentItemFinderViewModel, WCFinderDataItem, WCFinderFeedMediaWrap, WCFinderMediaInfo;

@interface WCContentItemFinderView : WCContentItemBaseView <WCFinderShareAbstractCell>
{
    _Bool _playFullScreen;
    NSString *_parentTid;
    WCContentItemFinderViewModel *_viewModel;
    WCFinderDataItem *_refFinderDataItem;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    SightIconView *_playIconView;
    MMWebImageView *_contentImageView;
    UILabel *_nameLabel;
    UILabel *_durationLabel;
    UIView *_hlView;
    double _lastTime;
    struct CGRect _fromRect;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(nonatomic) _Bool playFullScreen; // @synthesize playFullScreen=_playFullScreen;
@property(retain, nonatomic) UIView *hlView; // @synthesize hlView=_hlView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderDataItem *refFinderDataItem; // @synthesize refFinderDataItem=_refFinderDataItem;
@property(retain, nonatomic) WCContentItemFinderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSString *parentTid; // @synthesize parentTid=_parentTid;
- (void)doShareAnimation;
- (struct CGRect)transitionImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionImage;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)layoutCardStyle:(id)arg1;
- (void)layoutPureText:(id)arg1;
- (void)layoutDefault:(id)arg1;
- (void)initViewsWithWCContentItem:(id)arg1;
- (void)preLoad:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

