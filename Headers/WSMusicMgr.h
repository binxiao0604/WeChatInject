//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMusicPlayerExt-Protocol.h"

@class MMMusicInfo, NSMutableArray, NSString;
@protocol WSMusicDelegate;

@interface WSMusicMgr : NSObject <IMusicPlayerExt>
{
    MMMusicInfo *_curMusicInfo;
    NSMutableArray *_musicList;
    id <WSMusicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WSMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *musicList; // @synthesize musicList=_musicList;
@property(retain, nonatomic) MMMusicInfo *curMusicInfo; // @synthesize curMusicInfo=_curMusicInfo;
- (void)onMusicPlayStatusChanged;
- (void)setCurentPlayingUI;
- (_Bool)isMusic:(id)arg1 matchSnsId:(id)arg2;
- (void)mergeList:(id)arg1;
- (id)convertFromWCDataItems:(id)arg1;
- (void)updatePlayStatus:(_Bool)arg1 forSnsid:(id)arg2;
- (void)updateUI:(id)arg1 playing:(_Bool)arg2;
- (void)updatePlayingUI:(id)arg1;
- (void)delayUpdatePlayingUI:(id)arg1;
- (id)parseSnsIdFromMusicId:(id)arg1;
- (id)makeMusicInfoByMusicItem:(id)arg1;
- (id)makeMusicInfoBySnsId:(id)arg1;
- (void)onClearData;
- (void)receiveMusicData:(id)arg1;
- (void)clickSnsMusic:(id)arg1 withParams:(id)arg2;
- (void)clickPardusMusic:(id)arg1 withParams:(id)arg2;
- (id)getCurrentPlayingMusicSnsId;
- (void)resetData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

