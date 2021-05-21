//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMusicMVPostDataServiceExt-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderStreamMusicViewModelContentDelegate, WCFinderStreamMusicViewModelDelegate;

@interface WCFinderStreamMusicViewModel : NSObject <IMusicMVPostDataServiceExt, WCFinderDataItemExt>
{
    _Bool _continueFlag;
    _Bool _loading;
    _Bool _hasContent;
    _Bool _isAuthorPerspective;
    id <WCFinderStreamMusicViewModelDelegate> _delegate;
    id <WCFinderStreamMusicViewModelContentDelegate> _contentDelegate;
    NSString *_contactName;
    NSData *_lastBuff;
    unsigned long long _draftCount;
    NSMutableArray *_mutableObjects;
    NSMutableArray *_localMusicObjects;
    NSMutableArray *_serverObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *serverObjects; // @synthesize serverObjects=_serverObjects;
@property(retain, nonatomic) NSMutableArray *localMusicObjects; // @synthesize localMusicObjects=_localMusicObjects;
@property(retain, nonatomic) NSMutableArray *mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) unsigned long long draftCount; // @synthesize draftCount=_draftCount;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) _Bool isAuthorPerspective; // @synthesize isAuthorPerspective=_isAuthorPerspective;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) __weak id <WCFinderStreamMusicViewModelContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(nonatomic) __weak id <WCFinderStreamMusicViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onMVPostDataServiceUpdatedLocalMVItemWithLocalId:(id)arg1;
- (void)onMVPostDataServiceLocalMVItemDeletedWithLocalId:(id)arg1;
- (void)onMVPostDataServiceAddedNewLocalMVItem;
- (void)_reloadLocalMusicFeedWithLocalId:(id)arg1 traceInfo:(id)arg2;
- (void)onMVPostDataServicePostMVFailedWithLocalId:(id)arg1;
- (void)onMVPostDataServicePostMVSuccess:(id)arg1 svrDataItem:(id)arg2 localId:(id)arg3;
- (void)_removeContentVMSFeedVM:(id)arg1;
- (void)_deleteCloudItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_deleteLocalMusicItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)doDeleteItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)retryItem:(id)arg1;
- (void)deleteItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)mapDataItems:(id)arg1;
- (void)updateObjectArray;
- (void)_requestNextPage:(_Bool)arg1;
- (void)requestNextPage;
- (void)updateLocalFeedVM:(id)arg1;
- (void)_loadCacheDatas;
- (void)loadMusicFeedList;
- (void)updateHasContent;
- (void)updateWithExtInfo:(id)arg1;
@property(readonly, nonatomic) NSArray *objects;
- (void)dealloc;
- (id)initWithContactName:(id)arg1 isAuthorPerspective:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

