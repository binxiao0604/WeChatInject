//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "TextStateDetailContentViewDelegate-Protocol.h"
#import "TextStateMgrExt-Protocol.h"
#import "TextStatePlanetCardCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CAGradientLayer, NSString, TextStateDetailContentView, TextStateMediaView, TextStatePlanetCardCell, TextStateTopicModel, UIButton, UICollectionView, UICollectionViewFlowLayout, UIImageView, UILabel, UIView;
@protocol TextStatePlanetPageSheetViewControllerDelegate;

@interface TextStatePlanetPageSheetViewController : MMWindowViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCActionSheetDelegate, TextStatePlanetCardCellDelegate, TextStateMgrExt, TextStateDetailContentViewDelegate>
{
    id <TextStatePlanetPageSheetViewControllerDelegate> _delegate;
    UIView *_maskView;
    TextStateMediaView *_bgMediaView;
    UIImageView *_containerView;
    UIButton *_backgroundButton;
    UIView *_contentView;
    UIView *_footerView;
    TextStateDetailContentView *_selfStateDetailView;
    UILabel *_titleLabel;
    UIButton *_footerButton;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    TextStatePlanetCardCell *_calculateCardCell;
    TextStateTopicModel *_myStateTopic;
    UIButton *_selfSetButton;
    CAGradientLayer *_selfSetButtonMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *selfSetButtonMaskLayer; // @synthesize selfSetButtonMaskLayer=_selfSetButtonMaskLayer;
@property(retain, nonatomic) UIButton *selfSetButton; // @synthesize selfSetButton=_selfSetButton;
@property(retain, nonatomic) TextStateTopicModel *myStateTopic; // @synthesize myStateTopic=_myStateTopic;
@property(retain, nonatomic) TextStatePlanetCardCell *calculateCardCell; // @synthesize calculateCardCell=_calculateCardCell;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TextStateDetailContentView *selfStateDetailView; // @synthesize selfStateDetailView=_selfStateDetailView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UIImageView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TextStateMediaView *bgMediaView; // @synthesize bgMediaView=_bgMediaView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <TextStatePlanetPageSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getAllJoinedFriendsCount;
- (_Bool)hasFriendsStatesCell;
- (id)makeLineViewWithFrame:(struct CGRect)arg1;
- (void)updateBgMediaView;
- (double)heightForfirstSection;
- (double)expectedContentHeight;
- (void)jumpToPublishViewControllerWithScene:(unsigned int)arg1;
- (void)onPublishOrDeleteTextStateWithSuccess:(_Bool)arg1 errorMessage:(id)arg2;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onTextStatePlanetTopicUpdate;
- (void)dismiss;
- (void)didSelectStateIcon:(id)arg1;
- (void)didSelectChatButton:(id)arg1;
- (void)enterSelfLikeList:(id)arg1;
- (void)didSelectSourceButton:(id)arg1;
- (void)didSelectSameTopicFriends:(id)arg1;
- (void)didSelectAtTextDetailView:(id)arg1;
- (void)onExitModifyTextStateViewController;
- (void)onTapSelfSetButton;
- (void)onTapPlanetGoSquareButton:(id)arg1;
- (void)onTapPlanetJoinButton:(id)arg1;
- (void)onTapFooterButton;
- (void)onTapBackgroundButton;
- (_Bool)shouldHandleStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadMyStateTopic;
- (void)dismissPageSheetAnimated:(_Bool)arg1;
- (void)presentPageSheetAnimated:(_Bool)arg1;
- (void)setContentHeight:(double)arg1 animated:(_Bool)arg2;
- (void)setContentHeight:(double)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)initFooterView;
- (void)initContentView;
- (void)initView;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reportTextStateOperateActionClickTopShowPlanet;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
