//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class MMAlbumForiOS8Plus, MMAsset, NSString, PHFetchResult;

@interface MMAlbumChangeObserverForiOS8 : NSObject <PHPhotoLibraryChangeObserver>
{
    _Bool _m_hasChange;
    _Bool _hasRegisterChangeObserver;
    PHFetchResult *_m_fetchResult;
    MMAsset *_m_asset;
    MMAlbumForiOS8Plus *_m_lastFetchAlbumImageOnly;
    MMAlbumForiOS8Plus *_m_lastFetchAlbumVideoOnly;
    MMAlbumForiOS8Plus *_m_lastFetchAlbumInCludeVideo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasRegisterChangeObserver; // @synthesize hasRegisterChangeObserver=_hasRegisterChangeObserver;
@property(retain, nonatomic) MMAlbumForiOS8Plus *m_lastFetchAlbumInCludeVideo; // @synthesize m_lastFetchAlbumInCludeVideo=_m_lastFetchAlbumInCludeVideo;
@property(retain, nonatomic) MMAlbumForiOS8Plus *m_lastFetchAlbumVideoOnly; // @synthesize m_lastFetchAlbumVideoOnly=_m_lastFetchAlbumVideoOnly;
@property(retain, nonatomic) MMAlbumForiOS8Plus *m_lastFetchAlbumImageOnly; // @synthesize m_lastFetchAlbumImageOnly=_m_lastFetchAlbumImageOnly;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset=_m_asset;
@property(retain, nonatomic) PHFetchResult *m_fetchResult; // @synthesize m_fetchResult=_m_fetchResult;
@property(nonatomic) _Bool m_hasChange; // @synthesize m_hasChange=_m_hasChange;
- (id)getNewInsertAsset;
- (void)tryUpdateFetchResult;
- (void)updateCaptureCacheWithChange:(id)arg1;
- (void)updateAlbum:(id)arg1 WithChange:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)updateLastAlbum:(id)arg1 shouldIncludeVideo:(_Bool)arg2 isOnlyShowVideo:(_Bool)arg3;
- (id)getLastAlbumShouldIncludeVideo:(_Bool)arg1 isOnlyShowVideo:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

