//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MMWebImageViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCameraViewControllerDelegate-Protocol.h"
#import "WCFinderCreateCoordinatorDelegate-Protocol.h"
#import "WCFinderEventHeaderViewDelegate-Protocol.h"
#import "WCFinderEventPageViewManagerDelegate-Protocol.h"
#import "WCFinderEventViewModelDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedFlowViewLayoutDelegate-Protocol.h"
#import "WCFinderInvalidEventViewDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"
#import "WCFinderTabPageViewDataSource-Protocol.h"
#import "WCFinderTabPageViewDelegate-Protocol.h"
#import "WCGeneralCollectionMonitorExt-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class FinderEventInfo, FinderGetTopicListResponse, FinderLocation, MMWebImageView, NSArray, NSMutableArray, NSMutableDictionary, NSString, RecommendedMusicInfo, UIBarButtonItem, UIImageView, UIView, WCActionSheet, WCActionSheetWithHeadAvatar, WCFinderAnimationLoadingView, WCFinderCreateCoordinator, WCFinderEventViewModel, WCFinderSectionInfo, WCFinderTabPageView, WCFinderTagHeaderCollectionReusableView, WCFinderTopicListParams;

@interface WCFinderEventViewController : MMUIViewController <WCFinderEventViewModelDelegate, MMScrollActionSheetDelegate, WCGeneralCollectionMonitorExt, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderEventHeaderViewDelegate, MMWebImageViewDelegate, WCFinderInvalidEventViewDelegate, WCFinderCreateCoordinatorDelegate, CAAnimationDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderEventPageViewManagerDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _showTotalTags;
    _Bool _enablePostFeed;
    _Bool _showTransparentNaviBar;
    WCFinderEventViewModel *_viewModel;
    WCFinderAnimationLoadingView *_loadingView;
    WCFinderTabPageView *_tabPageView;
    FinderEventInfo *_eventInfo;
    NSMutableArray *_pageViewManagerArray;
    WCFinderTopicListParams *_params;
    unsigned long long _topicType;
    unsigned long long _eventTopicId;
    NSString *_topicTitle;
    FinderLocation *_topicLocation;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_navigationBarTitle;
    NSString *_refObjectid;
    FinderGetTopicListResponse *_cacheResponse;
    NSArray *_cacheDataItems;
    WCFinderSectionInfo *_sectionInfo;
    long long _tabType;
    long long _fromType;
    WCFinderTagHeaderCollectionReusableView *_tagHeaderView;
    unsigned long long _exportMark;
    NSMutableArray *_selectedArray;
    NSMutableDictionary *_exposeTimeDict;
    WCActionSheetWithHeadAvatar *_publishActionSheet;
    WCActionSheet *_eventActionSheet;
    RecommendedMusicInfo *_musicInfo;
    WCFinderCreateCoordinator *_createCoordinator;
    NSString *_refUsername;
    UIBarButtonItem *_moreRightButtonItem;
    UIBarButtonItem *_postRightButtonItem;
    NSString *_encryptedTopicId;
    UIView *_eventBackgroundContainer;
    UIImageView *_eventDefaultBackgroundImageView;
    MMWebImageView *_backgroundImageView;
    UIView *_eventFirstAppearForegroundView;
    UIView *_gradientView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *eventFirstAppearForegroundView; // @synthesize eventFirstAppearForegroundView=_eventFirstAppearForegroundView;
@property(nonatomic) _Bool showTransparentNaviBar; // @synthesize showTransparentNaviBar=_showTransparentNaviBar;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *eventDefaultBackgroundImageView; // @synthesize eventDefaultBackgroundImageView=_eventDefaultBackgroundImageView;
@property(retain, nonatomic) UIView *eventBackgroundContainer; // @synthesize eventBackgroundContainer=_eventBackgroundContainer;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(nonatomic) _Bool enablePostFeed; // @synthesize enablePostFeed=_enablePostFeed;
@property(retain, nonatomic) UIBarButtonItem *postRightButtonItem; // @synthesize postRightButtonItem=_postRightButtonItem;
@property(retain, nonatomic) UIBarButtonItem *moreRightButtonItem; // @synthesize moreRightButtonItem=_moreRightButtonItem;
@property(copy, nonatomic) NSString *refUsername; // @synthesize refUsername=_refUsername;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCActionSheet *eventActionSheet; // @synthesize eventActionSheet=_eventActionSheet;
@property(retain, nonatomic) WCActionSheetWithHeadAvatar *publishActionSheet; // @synthesize publishActionSheet=_publishActionSheet;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(nonatomic) unsigned long long exportMark; // @synthesize exportMark=_exportMark;
@property(retain, nonatomic) WCFinderTagHeaderCollectionReusableView *tagHeaderView; // @synthesize tagHeaderView=_tagHeaderView;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) NSArray *cacheDataItems; // @synthesize cacheDataItems=_cacheDataItems;
@property(retain, nonatomic) FinderGetTopicListResponse *cacheResponse; // @synthesize cacheResponse=_cacheResponse;
@property(nonatomic) _Bool showTotalTags; // @synthesize showTotalTags=_showTotalTags;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) FinderLocation *topicLocation; // @synthesize topicLocation=_topicLocation;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) WCFinderTopicListParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *pageViewManagerArray; // @synthesize pageViewManagerArray=_pageViewManagerArray;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(retain, nonatomic) WCFinderTabPageView *tabPageView; // @synthesize tabPageView=_tabPageView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderEventViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)finderEventInvalidWithErrorCode:(int)arg1;
- (void)finderEventFeedOrderChangedInHotTab;
- (void)finderTopicInfoNeedUpdate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finderCreateAccountSuccess:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction;
- (void)onEventHeaderClickAuthorInfoAction;
- (void)onEventHeaderClickMiniAppEntranceAction;
- (void)onEventHeaderClickJoinButtonAction;
- (void)postViewControllerDidCancel:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)postViewControllerDidFinish:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (id)updateReportModel:(id)arg1 dataItem:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithDataItem:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)showFinderPublishView;
- (_Bool)isFrontCamera;
- (void)showFinderCameraViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showPostActionSheetWithPatMusicPath:(id)arg1;
- (void)triggerShowPostAction;
- (id)getEventInfoModel;
- (id)genTopicTitleWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (id)generTopicShareItemWithTopicTitleWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getItemArrayConfigWithDataItem:(id)arg1;
- (void)onClickRightItem:(id)arg1;
- (void)onClickBackItem;
- (void)reloadDataWrap;
- (void)onConfirmButtonClicked;
- (void)onFinderEventClose:(_Bool)arg1;
- (void)updateEventBackgroundImageIfNeed;
- (void)headerViewWillDisplayInFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (double)contentLeftMargin;
- (double)contentDisplayWidth;
- (void)updateEventUI;
- (void)initEventFirstAppearForegroundView;
- (void)setGradientView;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)onFinderSearchResultUpdatePatNavTitle;
- (void)setupNavigationBarTitle;
- (id)navigationBarBackgroundColor;
- (void)willDisappear;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setButtonToOrangeStyle:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
