//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WMPFAudioAPIProtocol-Protocol.h"
#import "WMPFLivePlayerAPIProtocol-Protocol.h"
#import "WMPFLivePusherAPIProtocol-Protocol.h"
#import "WMPFVideoAPIProtocol-Protocol.h"

@class NSString;

@interface WMPFManager : NSObject <WMPFVideoAPIProtocol, WMPFAudioAPIProtocol, WMPFLivePlayerAPIProtocol, WMPFLivePusherAPIProtocol>
{
}

+ (id)sharedManager;
- (void)muteVideo:(_Bool)arg1;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)resumeLivePush;
- (void)pauseLivePush;
- (void)resumeLivePlay;
- (void)pauseLivePlay;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
