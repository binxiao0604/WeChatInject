//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IFavoritesExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class FavoritesItem, NSString, WNOpenParameter, WeNoteViewController;

@interface FavoritesOnTopLogic : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol>
{
    FavoritesItem *_currentOnTopNoteItem;
    WNOpenParameter *_openParameter;
    WeNoteViewController *_currentVc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WeNoteViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(retain, nonatomic) WNOpenParameter *openParameter; // @synthesize openParameter=_openParameter;
@property(retain, nonatomic) FavoritesItem *currentOnTopNoteItem; // @synthesize currentOnTopNoteItem=_currentOnTopNoteItem;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnUpdateItems:(id)arg1;
- (id)genTimeString:(unsigned int)arg1;
- (void)checkNeedRepord:(id)arg1;
- (void)reLoadNoteItem;
- (void)reloadConversionBanner;
- (id)getBannerTitle;
- (id)getKeepHoldFavDetailVCForNewMainFrameBanner;
- (id)currentOnTopFavItem;
- (void)showConversionOnTop:(_Bool)arg1 msgWrap:(id)arg2 wcDataItem:(id)arg3 favDataWrap:(id)arg4 editable:(_Bool)arg5 viewController:(id)arg6;
- (id)curOnTopNoteCheckId;
- (void)dealloc;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

