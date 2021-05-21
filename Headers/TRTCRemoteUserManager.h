//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, TRTCCloud;

@interface TRTCRemoteUserManager : NSObject
{
    TRTCCloud *_trtc;
    NSMutableDictionary *_users;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) TRTCCloud *trtc; // @synthesize trtc=_trtc;
- (void)setUser:(id)arg1 volume:(long long)arg2;
- (void)setUser:(id)arg1 rotation:(long long)arg2;
- (void)setUser:(id)arg1 fillMode:(long long)arg2;
- (void)setUser:(id)arg1 isAudioMuted:(_Bool)arg2;
- (void)setUser:(id)arg1 isVideoMuted:(_Bool)arg2;
- (void)updateUser:(id)arg1 isAudioEnabled:(_Bool)arg2;
- (void)updateUser:(id)arg1 isVideoEnabled:(_Bool)arg2;
- (void)removeUser:(id)arg1;
- (void)addUser:(id)arg1 roomId:(id)arg2;
@property(readonly, nonatomic) NSDictionary *remoteUsers;
- (id)initWithTrtc:(id)arg1;

@end

