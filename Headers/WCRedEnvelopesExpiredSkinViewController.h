//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCRedEnvelopesReceiveHomeViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, WCRedEnvelopesReceiveHomeView;
@protocol WCRedEnvelopesExpiredSkinViewControllerDelegate;

@interface WCRedEnvelopesExpiredSkinViewController : WCRedEnvelopesBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, WCRedEnvelopesReceiveHomeViewDelegate>
{
    WCRedEnvelopesReceiveHomeView *introView;
    _Bool _viewDidBack;
    id <WCRedEnvelopesExpiredSkinViewControllerDelegate> _m_delegate;
    UICollectionView *_m_collectionView;
    UICollectionViewFlowLayout *_m_flowLayout;
    NSMutableDictionary *_m_cellIdentifierDict;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool viewDidBack; // @synthesize viewDidBack=_viewDidBack;
@property(retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict; // @synthesize m_cellIdentifierDict=_m_cellIdentifierDict;
@property(retain, nonatomic) UICollectionViewFlowLayout *m_flowLayout; // @synthesize m_flowLayout=_m_flowLayout;
@property(retain, nonatomic) UICollectionView *m_collectionView; // @synthesize m_collectionView=_m_collectionView;
@property(nonatomic) __weak id <WCRedEnvelopesExpiredSkinViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)deleteHbEnvelopSource:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getData;
- (void)onLongPressCell:(id)arg1;
- (void)onTapCell:(id)arg1;
- (id)redEnvelopesBaseInfoDict;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)filterServerResponse:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCollectionView;
- (void)updateViewData;
- (_Bool)shouldAutorotate;
- (void)refreshViewWithData:(id)arg1;
- (void)onBack;
- (void)updateNavigationbarItem;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

