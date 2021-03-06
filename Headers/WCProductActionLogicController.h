//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;
@protocol WCProductActionLogicControllerDelegate;

@interface WCProductActionLogicController : MMObject
{
    id <WCProductActionLogicControllerDelegate> _delegate;
    NSMutableArray *_itemInfo2ViewList;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCProductActionLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasPopStateForItemInfo:(id)arg1;
- (void)launch3rdApp:(id)arg1;
- (void)openWebViewForUrl:(id)arg1;
- (id)addCacheInfoForItemInfo:(id)arg1 withSeparatorType:(int)arg2;
- (id)getCacheInfoForItemInfo:(id)arg1;
- (id)getPopViewForItemInfo:(id)arg1 withSeparatorType:(int)arg2;
- (id)getPushViewForItemInfo:(id)arg1 withSeparatorType:(int)arg2;
- (void)loadActionItemCell:(id)arg1 withItemInfo:(id)arg2;
- (double)getActionItemCellHeight:(id)arg1 withSeparatorType:(int)arg2;
- (void)handlerActionForItemInfo:(id)arg1;
- (id)init;

@end

