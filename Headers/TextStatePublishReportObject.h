//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface TextStatePublishReportObject : NSObject <PBCoding>
{
    _Bool hasEditedSourceDescription;
    _Bool hasEditedSourceIcon;
    _Bool hasEditedSourceMedia;
    _Bool hasSelectPosition;
    _Bool hasSelectBlur;
    _Bool hasShownGuide;
    _Bool hasTapGuideKnowButton;
    unsigned int enterScene;
    unsigned int exitScene;
    unsigned int mediaSource;
    unsigned int exceedMaxLengthToastCount;
    unsigned int emptyDescriptionToastCount;
    unsigned int selectIconCount;
    unsigned int tapTopicButtonCount;
    unsigned int tapTakeSightButtonCount;
    unsigned int tapMediaDeleteActionCount;
    unsigned int tapMediaChangeActionCount;
    unsigned int tapPositionButtonCount;
    unsigned int tapPositionLabelCount;
    unsigned int tapPrivacyButtonCount;
    unsigned int selectBlurCount;
    unsigned int deselectBlurCount;
    unsigned int descriptionLength;
    unsigned int privacyOption;
    unsigned int selectCustomIconCount;
    unsigned int strictMode;
    unsigned int _customIconDescriptionExceedMaxLengthToastCount;
    NSString *sessionId;
    long long enterTime;
    NSMutableArray *iconIdList;
    long long exitTime;
    NSString *topicId;
    NSString *textStateId;
    long long videoOriginLength;
    long long videoCroppedLength;
    long long mediaSize;
    NSString *sourceId;
    NSString *sourceActivityId;
    NSString *sourceName;
    NSString *sourceIconURL;
    NSString *publishId;
    NSString *customIconDescription;
}

+ (void)initialize;
+ (void)PBArrayAdd_strictMode;
+ (void)PBArrayAdd_hasTapGuideKnowButton;
+ (void)PBArrayAdd_hasShownGuide;
+ (void)PBArrayAdd_selectCustomIconCount;
+ (void)PBArrayAdd_customIconDescription;
+ (void)PBArrayAdd_publishId;
+ (void)PBArrayAdd_hasSelectBlur;
+ (void)PBArrayAdd_privacyOption;
+ (void)PBArrayAdd_hasSelectPosition;
+ (void)PBArrayAdd_hasEditedSourceMedia;
+ (void)PBArrayAdd_hasEditedSourceIcon;
+ (void)PBArrayAdd_hasEditedSourceDescription;
+ (void)PBArrayAdd_descriptionLength;
+ (void)PBArrayAdd_deselectBlurCount;
+ (void)PBArrayAdd_selectBlurCount;
+ (void)PBArrayAdd_tapPrivacyButtonCount;
+ (void)PBArrayAdd_tapPositionLabelCount;
+ (void)PBArrayAdd_tapPositionButtonCount;
+ (void)PBArrayAdd_tapMediaChangeActionCount;
+ (void)PBArrayAdd_tapMediaDeleteActionCount;
+ (void)PBArrayAdd_tapTakeSightButtonCount;
+ (void)PBArrayAdd_tapTopicButtonCount;
+ (void)PBArrayAdd_selectIconCount;
+ (void)PBArrayAdd_emptyDescriptionToastCount;
+ (void)PBArrayAdd_exceedMaxLengthToastCount;
+ (void)PBArrayAdd_sourceIconURL;
+ (void)PBArrayAdd_sourceName;
+ (void)PBArrayAdd_sourceActivityId;
+ (void)PBArrayAdd_sourceId;
+ (void)PBArrayAdd_mediaSource;
+ (void)PBArrayAdd_mediaSize;
+ (void)PBArrayAdd_videoCroppedLength;
+ (void)PBArrayAdd_videoOriginLength;
+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_exitTime;
+ (void)PBArrayAdd_exitScene;
+ (void)PBArrayAdd_iconIdList;
+ (void)PBArrayAdd_enterTime;
+ (void)PBArrayAdd_enterScene;
+ (void)PBArrayAdd_sessionId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int customIconDescriptionExceedMaxLengthToastCount; // @synthesize customIconDescriptionExceedMaxLengthToastCount=_customIconDescriptionExceedMaxLengthToastCount;
@property(nonatomic) unsigned int strictMode; // @synthesize strictMode;
@property(nonatomic) _Bool hasTapGuideKnowButton; // @synthesize hasTapGuideKnowButton;
@property(nonatomic) _Bool hasShownGuide; // @synthesize hasShownGuide;
@property(nonatomic) unsigned int selectCustomIconCount; // @synthesize selectCustomIconCount;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId;
@property(nonatomic) _Bool hasSelectBlur; // @synthesize hasSelectBlur;
@property(nonatomic) unsigned int privacyOption; // @synthesize privacyOption;
@property(nonatomic) _Bool hasSelectPosition; // @synthesize hasSelectPosition;
@property(nonatomic) _Bool hasEditedSourceMedia; // @synthesize hasEditedSourceMedia;
@property(nonatomic) _Bool hasEditedSourceIcon; // @synthesize hasEditedSourceIcon;
@property(nonatomic) _Bool hasEditedSourceDescription; // @synthesize hasEditedSourceDescription;
@property(nonatomic) unsigned int descriptionLength; // @synthesize descriptionLength;
@property(nonatomic) unsigned int deselectBlurCount; // @synthesize deselectBlurCount;
@property(nonatomic) unsigned int selectBlurCount; // @synthesize selectBlurCount;
@property(nonatomic) unsigned int tapPrivacyButtonCount; // @synthesize tapPrivacyButtonCount;
@property(nonatomic) unsigned int tapPositionLabelCount; // @synthesize tapPositionLabelCount;
@property(nonatomic) unsigned int tapPositionButtonCount; // @synthesize tapPositionButtonCount;
@property(nonatomic) unsigned int tapMediaChangeActionCount; // @synthesize tapMediaChangeActionCount;
@property(nonatomic) unsigned int tapMediaDeleteActionCount; // @synthesize tapMediaDeleteActionCount;
@property(nonatomic) unsigned int tapTakeSightButtonCount; // @synthesize tapTakeSightButtonCount;
@property(nonatomic) unsigned int tapTopicButtonCount; // @synthesize tapTopicButtonCount;
@property(nonatomic) unsigned int selectIconCount; // @synthesize selectIconCount;
@property(nonatomic) unsigned int emptyDescriptionToastCount; // @synthesize emptyDescriptionToastCount;
@property(nonatomic) unsigned int exceedMaxLengthToastCount; // @synthesize exceedMaxLengthToastCount;
@property(retain, nonatomic) NSString *sourceIconURL; // @synthesize sourceIconURL;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName;
@property(retain, nonatomic) NSString *sourceActivityId; // @synthesize sourceActivityId;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId;
@property(nonatomic) unsigned int mediaSource; // @synthesize mediaSource;
@property(nonatomic) long long mediaSize; // @synthesize mediaSize;
@property(nonatomic) long long videoCroppedLength; // @synthesize videoCroppedLength;
@property(nonatomic) long long videoOriginLength; // @synthesize videoOriginLength;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId;
@property(nonatomic) long long exitTime; // @synthesize exitTime;
@property(nonatomic) unsigned int exitScene; // @synthesize exitScene;
@property(retain, nonatomic) NSMutableArray *iconIdList; // @synthesize iconIdList;
@property(nonatomic) long long enterTime; // @synthesize enterTime;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
- (void)report;
- (void)exitWithScene:(unsigned int)arg1;
- (void)selectCustomIcon;
- (void)serverReturnWithId:(id)arg1 topicId:(id)arg2;
- (void)deselectBlur;
- (void)selectBlur;
- (void)tapPrivacyButton;
- (void)tapPositionLabel;
- (void)tapPositionButton;
- (void)tapMediaChangeAction;
- (void)tapMediaDeleteAction;
- (void)tapTakeSightButton;
- (void)tapTopicButton;
- (void)selectIconWithId:(id)arg1;
- (void)tapSelectIconButton;
- (void)showCustomIconDescriptionExceedMaxLengthToast;
- (void)showEmptyDescriptionToast;
- (void)showExceedMaxLengthToast;
- (void)setSourceInfo:(id)arg1;
- (void)setMediaSize:(long long)arg1 mediaSource:(unsigned int)arg2;
- (void)setVideoOriginLength:(long long)arg1 videoCroppedLength:(long long)arg2;
- (void)enterWithScene:(unsigned int)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

