//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMusicMVPostDataServiceExt-Protocol.h"
#import "WCFinderFeedDraftChangedExt-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol WCFinderProfileDraftListViewModelContentDelegate, WCFinderProfileDraftListViewModelDelegate;

@interface WCFinderProfileDraftListViewModel : NSObject <WCFinderFeedDraftChangedExt, IMusicMVPostDataServiceExt>
{
    _Bool _hasContent;
    id <WCFinderProfileDraftListViewModelDelegate> _delegate;
    id <WCFinderProfileDraftListViewModelContentDelegate> _contentDelegate;
    NSMutableArray *_mutableContentVMS;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableContentVMS; // @synthesize mutableContentVMS=_mutableContentVMS;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) __weak id <WCFinderProfileDraftListViewModelContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(nonatomic) __weak id <WCFinderProfileDraftListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMVPostDataServiceLocalMVDraftDeletedWithLocalId:(id)arg1;
- (void)onMVPostDataServiceAddedNewLocalMVDraft;
- (void)removeFeedVM:(id)arg1;
- (void)draftItemsAdded:(id)arg1;
- (void)draftItemsDeleted:(id)arg1;
- (void)draftItemsChanged:(id)arg1;
- (_Bool)_retryMusicItem:(id)arg1;
- (void)retryItem:(id)arg1;
- (_Bool)_deleteFinderItem:(id)arg1;
- (_Bool)_deleteMusicItem:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)sortItems;
- (id)mapDraftItems:(id)arg1;
- (id)mapDataItems:(id)arg1;
- (void)requestNextPageData;
- (void)updateHasContent;
- (void)_loadCacheData;
@property(readonly, nonatomic) _Bool continueFlag;
@property(readonly, nonatomic) NSArray *contentVMS;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
