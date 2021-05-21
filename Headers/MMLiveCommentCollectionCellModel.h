//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UICollectionView;

@interface MMLiveCommentCollectionCellModel : NSObject
{
    _Bool _needPefixSpace;
    _Bool _ignoreLastLineSpace;
    _Bool _isCellFrameMarginBottomWhenOnly;
    double _cellWidth;
    long long _cellType;
    unsigned long long _index;
    NSArray *_commentDataArr;
    UICollectionView *_collectionView;
    NSMutableArray *_firstShortPubbleCellFrameArr;
    NSMutableArray *_secondShortPubbleCellFrameArr;
    NSMutableArray *_firstLongPubbleCellFrameArr;
    NSMutableArray *_secondLongPubbleCellFrameArr;
    NSMutableArray *_officialPubbleCellFrameArr;
    NSMutableArray *_mostLikePubbleCellFrameArr;
    NSMutableArray *_lastAppendShortPubbleCellFrameArr;
    NSMutableArray *_lastAppendLongPubbleCellFrameArr;
    NSMutableArray *_touchCellFrameArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touchCellFrameArr; // @synthesize touchCellFrameArr=_touchCellFrameArr;
@property(retain, nonatomic) NSMutableArray *lastAppendLongPubbleCellFrameArr; // @synthesize lastAppendLongPubbleCellFrameArr=_lastAppendLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *lastAppendShortPubbleCellFrameArr; // @synthesize lastAppendShortPubbleCellFrameArr=_lastAppendShortPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *mostLikePubbleCellFrameArr; // @synthesize mostLikePubbleCellFrameArr=_mostLikePubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *officialPubbleCellFrameArr; // @synthesize officialPubbleCellFrameArr=_officialPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *secondLongPubbleCellFrameArr; // @synthesize secondLongPubbleCellFrameArr=_secondLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *firstLongPubbleCellFrameArr; // @synthesize firstLongPubbleCellFrameArr=_firstLongPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *secondShortPubbleCellFrameArr; // @synthesize secondShortPubbleCellFrameArr=_secondShortPubbleCellFrameArr;
@property(retain, nonatomic) NSMutableArray *firstShortPubbleCellFrameArr; // @synthesize firstShortPubbleCellFrameArr=_firstShortPubbleCellFrameArr;
@property(nonatomic) _Bool isCellFrameMarginBottomWhenOnly; // @synthesize isCellFrameMarginBottomWhenOnly=_isCellFrameMarginBottomWhenOnly;
@property(nonatomic) _Bool ignoreLastLineSpace; // @synthesize ignoreLastLineSpace=_ignoreLastLineSpace;
@property(nonatomic) _Bool needPefixSpace; // @synthesize needPefixSpace=_needPefixSpace;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *commentDataArr; // @synthesize commentDataArr=_commentDataArr;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(readonly, nonatomic) unsigned long long commentCount;
@property(readonly, nonatomic) double cellHeight;
- (void)handleTouchHitOnLocation:(struct CGPoint)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)performTouchBeginOnLocation:(struct CGPoint)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)performLongPressGestureOnLocation:(struct CGPoint)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)performTapGestureOnLocation:(struct CGPoint)arg1 callBack:(CDUnknownBlockType)arg2;
- (_Bool)isCommentShort:(id)arg1;
- (_Bool)isCellFrameMostLikeType:(id)arg1;
- (_Bool)isCellFrameOfficelOrAnchorType:(id)arg1;
- (_Bool)isCellFrameUserType:(id)arg1;
- (double)currentMaxFirstCellFrameOriginX;
- (double)getFirstCellFrameOriginX;
- (double)pubbleCellStandardHeightAndSpace;
- (void)initCellWidth;
- (void)addTouchCellFrameFrom:(id)arg1;
- (void)initTouchCellFrameArr;
- (unsigned long long)allPubbleCount;
- (_Bool)isOnlyPubbleCellBottom;
- (void)updateCellFrameOriginY;
- (void)appendMostLikeCellFrame:(id)arg1;
- (void)appendOfficialCellFrame:(id)arg1;
- (void)appendLongCellFrame:(id)arg1;
- (void)appendShortCellFrame:(id)arg1;
- (void)appendCommentPubbleCellFrame:(id)arg1;
- (void)createCommentPubbleCellFrames;
- (void)initCommentData:(id)arg1;
- (id)initWithCellWidth:(double)arg1 inCollectionView:(id)arg2;
- (id)initWithCommentDataArr:(id)arg1 inCollectionView:(id)arg2 needPrefixSpace:(_Bool)arg3 needIgnoreLastLineSpace:(_Bool)arg4;

@end

