//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;

@interface AnimateEmojiCacheMgr : MMUserService <NSCacheDelegate, MMServiceProtocol>
{
    unsigned int _realCacheCout;
    unsigned int _realCacheFrameCount;
    NSString *_currentRoomID;
    unsigned long long _lastMsgTime;
    unsigned long long _lastLocalID;
    NSCache *_cache;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int realCacheFrameCount; // @synthesize realCacheFrameCount=_realCacheFrameCount;
@property(nonatomic) unsigned int realCacheCout; // @synthesize realCacheCout=_realCacheCout;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) unsigned long long lastLocalID; // @synthesize lastLocalID=_lastLocalID;
@property(nonatomic) unsigned long long lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(copy, nonatomic) NSString *currentRoomID; // @synthesize currentRoomID=_currentRoomID;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)recordCacheChange:(id)arg1 incr:(_Bool)arg2;
- (_Bool)isSameRoomID:(id)arg1;
- (void)onAddHistoryLastMsg:(id)arg1 roomID:(id)arg2;
- (void)onAddMsg:(id)arg1 roomID:(id)arg2;
- (void)onEixtRoom:(id)arg1;
- (void)onEnterRoom:(id)arg1;
- (id)animatedImageOfDecodedFrames:(id)arg1;
- (id)getAnimatedImage:(id)arg1;
- (id)getFramesForAnimateEmojiNode:(id)arg1;
- (_Bool)shouldAutoPlayAnimateEmoji:(id)arg1 roomID:(id)arg2;
- (void)onUpdateAnimateEmojiCheckPoint:(id)arg1 contact:(id)arg2 fromHistory:(_Bool)arg3;
- (void)onEndAnimateEmojiCheckPoint:(id)arg1;
- (void)onStartAnimateEmojiCheckPoint:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

