//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseView.h"

#import "MMFinderLiveMgrExt-Protocol.h"
#import "MMLiveHalfScreenTitleBarViewDelegate-Protocol.h"
#import "MMLiveRewardGiftCollectionViewCellDelegate-Protocol.h"
#import "MMLiveRewardGiftPreviewWindowDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CAShapeLayer, MMCPLabel, MMFinderLiveTaskId, MMHeadImageView, MMLiveHalfScreenTitleBarView, MMLiveRewardGiftCoinButton, MMLiveRewardGiftPreviewWindow, MMUIView, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIImageView, UIPageControl;
@protocol MMLiveRewardGiftSelectionLogicDelegate, MMLiveRewardGiftSelectionViewDelegate;

@interface MMLiveRewardGiftSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIScrollViewDelegate, WCActionSheetDelegate, MMFinderLiveMgrExt, MMLiveRewardGiftCollectionViewCellDelegate, MMLiveRewardGiftPreviewWindowDelegate>
{
    _Bool _isRewardOpening;
    _Bool _wecoinBalanceUpdated;
    _Bool _isLastLayoutOrientationIsPortrait;
    MMFinderLiveTaskId *_taskId;
    id <MMLiveRewardGiftSelectionViewDelegate> _viewDelegate;
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate;
    NSArray *_giftItems;
    MMLiveHalfScreenTitleBarView *_mainTitleBar;
    MMUIView *_titleView;
    MMCPLabel *_titleLabel;
    MMHeadImageView *_curRewardRecipientHeadImageView;
    MMCPLabel *_curRewardRecipientNickNameLabel;
    UIImageView *_switchRewardUserIconView;
    UIPageControl *_giftPageControl;
    UICollectionView *_giftCollectionView;
    UICollectionViewFlowLayout *_giftCollectionLayout;
    MMLiveRewardGiftCoinButton *_coinsButton;
    MMLiveRewardGiftPreviewWindow *_previewWindow;
    MMUIView *_contentView;
    CAShapeLayer *_shapeLayer;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
    long long _balance;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLastLayoutOrientationIsPortrait; // @synthesize isLastLayoutOrientationIsPortrait=_isLastLayoutOrientationIsPortrait;
@property(nonatomic) _Bool wecoinBalanceUpdated; // @synthesize wecoinBalanceUpdated=_wecoinBalanceUpdated;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMLiveRewardGiftPreviewWindow *previewWindow; // @synthesize previewWindow=_previewWindow;
@property(retain, nonatomic) MMLiveRewardGiftCoinButton *coinsButton; // @synthesize coinsButton=_coinsButton;
@property(retain, nonatomic) UICollectionViewFlowLayout *giftCollectionLayout; // @synthesize giftCollectionLayout=_giftCollectionLayout;
@property(retain, nonatomic) UICollectionView *giftCollectionView; // @synthesize giftCollectionView=_giftCollectionView;
@property(retain, nonatomic) UIPageControl *giftPageControl; // @synthesize giftPageControl=_giftPageControl;
@property(retain, nonatomic) UIImageView *switchRewardUserIconView; // @synthesize switchRewardUserIconView=_switchRewardUserIconView;
@property(retain, nonatomic) MMCPLabel *curRewardRecipientNickNameLabel; // @synthesize curRewardRecipientNickNameLabel=_curRewardRecipientNickNameLabel;
@property(retain, nonatomic) MMHeadImageView *curRewardRecipientHeadImageView; // @synthesize curRewardRecipientHeadImageView=_curRewardRecipientHeadImageView;
@property(retain, nonatomic) MMCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar; // @synthesize mainTitleBar=_mainTitleBar;
@property(nonatomic) _Bool isRewardOpening; // @synthesize isRewardOpening=_isRewardOpening;
@property(retain, nonatomic) NSArray *giftItems; // @synthesize giftItems=_giftItems;
@property(nonatomic) __weak id <MMLiveRewardGiftSelectionLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(nonatomic) __weak id <MMLiveRewardGiftSelectionViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onFetchLiveRewardGiftListWithLiveTaskId:(id)arg1 liveGiftItems:(id)arg2;
- (void)onTitleViewTaped:(id)arg1;
- (void)onPanGestureRecognizerBegan;
- (void)onCoinButtonClicked;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateWecoinBalance:(long long)arg1;
- (void)updateSelfViewShapeClip;
- (void)fetchWecoinBalance;
- (void)fetchGiftList;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetWillClose;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillAppear;
- (double)getCurrentSectionInsetTop;
- (void)layoutTitleView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateHeadImageConerRadius:(double)arg1;
- (id)liveTask;
- (void)restoreLastGiftPage;
- (void)saveLastGiftPage;
- (void)scrollToPage:(long long)arg1;
- (void)reloadData;
- (void)updatePageControl;
- (void)updateCollectionLayout;
- (void)reloadDataForTitleView;
- (void)initTitleView;
- (void)initView;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

