//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface MMMusicLyricsAlbumMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSMutableArray *m_arrMusicItems;
    NSString *m_nsLyricsRootPath;
    NSString *m_nsAlbumCoverRootPath;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetLyricsAndAlbumResp:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)GetLyricsAndAlbumFromSvr:(id)arg1;
- (unsigned long long)indexOfMusicByWeUrl:(id)arg1;
- (_Bool)saveAlbumCoverToFile:(id)arg1 FilePath:(id)arg2;
- (_Bool)saveLyricsToFile:(id)arg1 FilePath:(id)arg2;
- (id)getLyricsFromFile:(id)arg1;
- (id)getAlbumCoverName:(id)arg1 AndSinger:(id)arg2;
- (id)getLyricFileName:(id)arg1 AndSinger:(id)arg2;
- (void)GetLyricsAndAlbumCoverByMusicInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

