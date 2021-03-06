//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDCommonWishInfo;

@interface WDWishProfileCellModel : NSObject
{
    _Bool _isSelfWish;
    _Bool _isLike;
    double _cellWidth;
    NSMutableArray *_contentArrStyles;
    WDCommonWishInfo *_wishInfo;
    double _cellHeight;
    struct CGSize _contentSize;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) WDCommonWishInfo *wishInfo; // @synthesize wishInfo=_wishInfo;
@property(retain, nonatomic) NSMutableArray *contentArrStyles; // @synthesize contentArrStyles=_contentArrStyles;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(nonatomic) _Bool isSelfWish; // @synthesize isSelfWish=_isSelfWish;
@property(readonly, nonatomic) double bottomPadding;
@property(readonly, nonatomic) double topPadding;
@property(readonly, nonatomic) double hPadding;
- (void)calContentSize;
@property(readonly, nonatomic) _Bool isDeleteBtnShow;
@property(readonly, nonatomic) _Bool isLikeCountShow;
@property(readonly, nonatomic) long long likeCount;
- (id)initWithInfo:(id)arg1 cellWidth:(double)arg2;

@end

