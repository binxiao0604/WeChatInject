//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class WCNewShareCardLayoutCacheItem;

@interface WCNewShareCardLayoutCache : MMObject
{
    WCNewShareCardLayoutCacheItem *_cacheItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCNewShareCardLayoutCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
- (void)saveLayoutCache;
- (void)initForSave;
- (void)loadLayoutCache;
- (id)init;

@end

