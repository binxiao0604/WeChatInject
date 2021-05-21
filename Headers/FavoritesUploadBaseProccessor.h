//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FavoritesItem, NSMutableArray;
@protocol FavoritesUploadProccessorDelegate;

@interface FavoritesUploadBaseProccessor : MMObject
{
    NSMutableArray *m_proccessingQueue;
    _Bool m_bProccessing;
    FavoritesItem *m_priorItem;
    FavoritesItem *m_proccessingItem;
    FavoritesUploadBaseProccessor *nextProccessor;
    id <FavoritesUploadProccessorDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesUploadProccessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FavoritesUploadBaseProccessor *nextProccessor; // @synthesize nextProccessor;
- (void)removeAllItems;
- (_Bool)checkFavItemOccupiedByFavId:(unsigned int)arg1;
- (_Bool)isProccessingWithLocalId:(unsigned int)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(_Bool)arg2;
- (void)dealloc;
- (void)tryProccess;
- (void)triggerProccess;
- (id)initWithDelegate:(id)arg1;

@end

