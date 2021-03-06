//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface ZZFlexibleLayoutFlowLayout : UICollectionViewFlowLayout
{
    double _headerVisibleBoundsOffset;
    NSMutableArray *_decorationViewAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *decorationViewAttributes; // @synthesize decorationViewAttributes=_decorationViewAttributes;
@property(nonatomic) double headerVisibleBoundsOffset; // @synthesize headerVisibleBoundsOffset=_headerVisibleBoundsOffset;
- (void)p_layoutBackgrounColorAttributes:(id)arg1 forElementsInRect:(struct CGRect)arg2;
- (void)p_layoutHeaderFooterAttributes:(id)arg1 forElementsInRect:(struct CGRect)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;

@end

