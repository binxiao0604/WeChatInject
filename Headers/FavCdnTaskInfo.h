//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FavoritesDownloadCDNInfo;

@interface FavCdnTaskInfo : NSObject
{
    int _retryCount;
    int _remainSize;
    FavoritesDownloadCDNInfo *_downloadInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FavoritesDownloadCDNInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(nonatomic) int remainSize; // @synthesize remainSize=_remainSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;

@end
