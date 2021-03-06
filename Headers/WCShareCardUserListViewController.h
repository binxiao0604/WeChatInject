//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "POPAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CALayer, MMHeadImageView, MMUILabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIImage, UIImageView, UIView, WCShareCardData;
@protocol WCShareCardUserListViewControllerDelegate;

@interface WCShareCardUserListViewController : MMUIViewController <POPAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_arrShareUserDataList;
    unsigned long long _allShareCardCount;
    NSMutableArray *_arrShareUserNameList;
    WCShareCardData *_selectedShareCardData;
    UIView *_navHeaderView;
    UIImageView *_topImgView;
    UIImageView *_bottomImgView;
    UIView *_newTopHeaderView;
    MMUILabel *_tipsLabel;
    CALayer *_iconBgLayer;
    UIImageView *_arrowImgView;
    MMHeadImageView *_headImageView;
    MMUILabel *_shareUserLabel;
    UIView *_collectionBgView;
    UICollectionView *_collectionView;
    id <WCShareCardUserListViewControllerDelegate> m_delegate;
    UIImage *topScreenShotImg;
    UIImage *bottomScreenShotImg;
    NSMutableDictionary *_shareCardArrayDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *shareCardArrayDic; // @synthesize shareCardArrayDic=_shareCardArrayDic;
@property(retain, nonatomic) UIImage *bottomScreenShotImg; // @synthesize bottomScreenShotImg;
@property(retain, nonatomic) UIImage *topScreenShotImg; // @synthesize topScreenShotImg;
@property(nonatomic) __weak id <WCShareCardUserListViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)dismissAfterMoment;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)insertIconLayer:(id)arg1;
- (void)disAppearAnimation;
- (id)reverseAnimationValue:(id)arg1;
- (void)appearAnimation;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)pop_animationDidStart:(id)arg1;
- (void)processTopAndBottomImageView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)createUserHeadImgCollectionView;
- (void)makeTipsTopView;
- (void)createHeadImgAndNameAtTopHeaderView;
- (void)initView;
- (void)initData:(id)arg1;
- (void)dealloc;
- (id)initWithShareCardList:(id)arg1 andCurSelectShareCardData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

