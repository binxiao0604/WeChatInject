//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMWebImageViewDelegate-Protocol.h"
#import "WCAdSliderCardViewDelegate-Protocol.h"

@class MMUIButton, MMUILabel, NSString, WCAdSliderCardView;

@interface WCTimeLineAdFinderTopicView : WCContentItemBaseView <WCAdSliderCardViewDelegate, MMWebImageViewDelegate>
{
    WCAdSliderCardView *_sliderCard;
    MMUIButton *_topicInfoBar;
    MMUILabel *_relationTextLabel;
}

+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *relationTextLabel; // @synthesize relationTextLabel=_relationTextLabel;
@property(retain, nonatomic) MMUIButton *topicInfoBar; // @synthesize topicInfoBar=_topicInfoBar;
@property(retain, nonatomic) WCAdSliderCardView *sliderCard; // @synthesize sliderCard=_sliderCard;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (id)fetchMediaId;
- (void)clickToJump;
- (void)onTopicInfoBarClick;
- (void)onSliderCardClick;
- (void)updateDataInDetail:(id)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (void)initRelationInfo:(id)arg1;
- (void)initTopicInfo:(id)arg1;
- (id)createSliderCard:(id)arg1;
- (void)initSliderCard:(id)arg1;
- (void)contentItemWillDisplay;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

