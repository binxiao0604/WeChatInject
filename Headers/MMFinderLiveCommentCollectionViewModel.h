//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "MMLiveCommentDataExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MMFinderLiveCommentDataMgr, MMLiveCommentCollectionCellModel, MMLiveCommentDataItem, MMLiveTaskId, MMLivecCommentCollectionView, NSMutableArray, NSString, NSTimer;

@interface MMFinderLiveCommentCollectionViewModel : NSObject <MMLiveCommentDataExt, CAAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isAutoScrolling;
    _Bool _isManualScrolling;
    MMLivecCommentCollectionView *_commentCollectionView;
    MMLiveTaskId *_taskId;
    CDUnknownBlockType _unReadCountUpdateBlock;
    CDUnknownBlockType _longPressCallback;
    CDUnknownBlockType _backRegionTapCallback;
    NSMutableArray *_collectionOperationQueue;
    long long _currentOperationType;
    MMLiveCommentDataItem *_lastCommentDataItem;
    MMFinderLiveCommentDataMgr *_commentDataMgr;
    NSMutableArray *_commentCellModelArr;
    NSMutableArray *_nextCommentsCellModelArr;
    unsigned long long _currentCellModelIndex;
    double _willStartScrollAnimateTime;
    MMLiveCommentCollectionCellModel *_appendingCellModel;
    NSMutableArray *_unReadCellModelArr;
    NSTimer *_unReadCheckTimer;
    double _lastCheckContentOffsetX;
}

+ (double)fastScrollSpeed;
+ (double)scrollSpeed;
+ (double)commentColllectionViewHeight;
- (void).cxx_destruct;
@property(nonatomic) double lastCheckContentOffsetX; // @synthesize lastCheckContentOffsetX=_lastCheckContentOffsetX;
@property(retain, nonatomic) NSTimer *unReadCheckTimer; // @synthesize unReadCheckTimer=_unReadCheckTimer;
@property(retain, nonatomic) NSMutableArray *unReadCellModelArr; // @synthesize unReadCellModelArr=_unReadCellModelArr;
@property(retain, nonatomic) MMLiveCommentCollectionCellModel *appendingCellModel; // @synthesize appendingCellModel=_appendingCellModel;
@property(nonatomic) double willStartScrollAnimateTime; // @synthesize willStartScrollAnimateTime=_willStartScrollAnimateTime;
@property(nonatomic) unsigned long long currentCellModelIndex; // @synthesize currentCellModelIndex=_currentCellModelIndex;
@property(nonatomic) _Bool isManualScrolling; // @synthesize isManualScrolling=_isManualScrolling;
@property(nonatomic) _Bool isAutoScrolling; // @synthesize isAutoScrolling=_isAutoScrolling;
@property(retain, nonatomic) NSMutableArray *nextCommentsCellModelArr; // @synthesize nextCommentsCellModelArr=_nextCommentsCellModelArr;
@property(retain, nonatomic) NSMutableArray *commentCellModelArr; // @synthesize commentCellModelArr=_commentCellModelArr;
@property(retain, nonatomic) MMFinderLiveCommentDataMgr *commentDataMgr; // @synthesize commentDataMgr=_commentDataMgr;
@property(retain, nonatomic) MMLiveCommentDataItem *lastCommentDataItem; // @synthesize lastCommentDataItem=_lastCommentDataItem;
@property(nonatomic) long long currentOperationType; // @synthesize currentOperationType=_currentOperationType;
@property(retain, nonatomic) NSMutableArray *collectionOperationQueue; // @synthesize collectionOperationQueue=_collectionOperationQueue;
@property(copy, nonatomic) CDUnknownBlockType backRegionTapCallback; // @synthesize backRegionTapCallback=_backRegionTapCallback;
@property(copy, nonatomic) CDUnknownBlockType longPressCallback; // @synthesize longPressCallback=_longPressCallback;
@property(copy, nonatomic) CDUnknownBlockType unReadCountUpdateBlock; // @synthesize unReadCountUpdateBlock=_unReadCountUpdateBlock;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLivecCommentCollectionView *commentCollectionView; // @synthesize commentCollectionView=_commentCollectionView;
- (void)scrollCommentCollectionViewToRow:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollCommentCollectionViewToRightMostAnimated:(_Bool)arg1;
- (void)cancelCheckUnreadCount;
- (void)clearUnReadCount;
- (void)handleCellModelHasRead:(id)arg1;
- (void)appendUnReadCellModelAfterCellModel;
- (void)checkIsNeedToCheckUnreadCount;
- (_Bool)isOutSideAutoScrollOffset;
- (void)endCollectionOperation:(long long)arg1;
- (void)clearAllOperation:(long long)arg1;
- (void)clearAllOperations;
- (void)handleCollectionOperation:(long long)arg1;
- (void)operateCommentCollection;
- (void)insertOperationType:(long long)arg1 after:(long long)arg2;
- (void)addOperationType:(long long)arg1;
- (id)previousCommentDataCollectionViewModel;
- (void)appendCommentCollectionCellModel:(id)arg1;
- (void)appendRecentCommentSrcData;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onMMLiveCommentDataUpdateForTaskId:(id)arg1;
- (void)appendCommentToBottom;
- (void)cancelCollectionViewScrollStart;
- (void)continueCollectionViewScroll;
- (void)restartCollectionViewScroll;
- (void)pauseCollectionViewScroll;
- (void)pauseCollectionViewScrollWithRestart;
- (id)getCellModelForTouchLocation:(struct CGPoint)arg1;
- (void)onTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleCollectionViewLongPressGesture:(id)arg1;
- (void)handleCollectionViewSingleTapGesture:(id)arg1;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)appendCommentContentFromMySelf:(id)arg1;
@property(readonly, nonatomic) unsigned long long unReadCount;
@property(readonly, nonatomic) MMLiveCommentCollectionCellModel *lastUnReadCellModel;
- (_Bool)isCanAutoScroll;
- (void)startScrollingWithDataAppendIfNeeded;
- (id)getRecycleCellModelArr;
- (id)getCellModelArrayInContentWidth:(double)arg1;
- (_Bool)isCollectionViewContentEmpty;
- (void)updateCollectionViewInitContentOffset;
- (void)reloadCollectionViewAfterDelete;
- (void)reloadCollectionViewAfterAppend;
- (_Bool)isContainCellModelWithCellType:(long long)arg1;
- (void)deletePreviousCommentCellModel;
- (void)appendNextCommentCellModel;
- (void)appendCommentCellModelToMost;
- (void)resetCollectionViewContentOffset;
- (void)stopScrollCollectionViewAnimation:(id)arg1;
- (void)stopScrollCollectionView;
- (_Bool)scrollCollectionViewWithSpeed:(double)arg1 animationKey:(id)arg2;
- (_Bool)startScrollCollectionView;
- (_Bool)startScrollCollectionViewFast;
- (double)getValidContentOffsetX:(double)arg1;
- (id)getVisibleCellModelsInScreen;
- (id)getFirstVisibleCellModelInScreen;
- (double)getMaxContentOffsetXForVisibleCellNotReUse;
- (double)getContentWithAheadScreen;
- (double)getCollectionViewContentOffsetX;
- (double)getContentWidthAboveCellModel:(id)arg1 positionType:(long long)arg2;
- (double)allContentDisplayWidth;
- (double)allContentWidth;
- (void)dealloc;
- (id)init;
- (id)initWithTaskId:(id)arg1;
- (double)maxContentSizeWithoutUse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

