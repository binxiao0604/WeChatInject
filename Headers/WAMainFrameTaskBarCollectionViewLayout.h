//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@protocol WAMainFrameTaskBarCollectionViewLayoutDelegate;

@interface WAMainFrameTaskBarCollectionViewLayout : UICollectionViewFlowLayout
{
    unsigned int _itemPerPage;
    id <WAMainFrameTaskBarCollectionViewLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int itemPerPage; // @synthesize itemPerPage=_itemPerPage;
@property(nonatomic) __weak id <WAMainFrameTaskBarCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;

@end
