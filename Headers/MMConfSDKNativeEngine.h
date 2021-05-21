//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMConfSDKNativeEngine : NSObject
{
}

+ (int)accept:(_Bool)arg1;
+ (void)recvNotify:(const char *)arg1 datalen:(int)arg2 netType:(int)arg3;
+ (void)ack;
+ (int)addmember:(id)arg1 roomType:(int)arg2 wxGroupId:(id)arg3 netType:(int)arg4;
+ (int)invite:(id)arg1 roomType:(int)arg2 wxGroupId:(id)arg3 netType:(int)arg4;
+ (int)getRemoteQualityInfoList:(void *)arg1 qualityLen:(int)arg2;
+ (int)subScribeVideoAndResList:(id)arg1 screenMembers:(id)arg2;
+ (int)uninit;
+ (int)hangup:(int)arg1;
+ (int)exitRoom:(int)arg1;
+ (void)onNetworkChanged:(int)arg1;
+ (int)setCmdData:(int)arg1 dataPtr:(char *)arg2 dataLen:(int)arg3;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)SwitchVideo:(_Bool)arg1;
+ (int)SwitchAudio:(_Bool)arg1;
+ (int)SwitchAV:(_Bool)arg1 bOpenVideo:(_Bool)arg2 bScreenStatus:(_Bool)arg3;
+ (int)getVoiceActivity:(int)arg1;
+ (int)sendVideoData:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)joinRoomWithGroupID:(id)arg1 roomType:(int)arg2 networkType:(int)arg3;
+ (int)joinRoomWithRoomID:(long long)arg1 roomType:(int)arg2 networkType:(int)arg3;
+ (int)updateSessionKey:(id)arg1;
+ (id)generateInitInfo:(id)arg1 sessionKey:(id)arg2 audioType:(int)arg3 videoRatio:(int)arg4 videoLength:(int)arg5;
+ (int)GetCPUCapacity;
+ (int)initEngine:(id)arg1 sessionKey:(id)arg2 audioType:(int)arg3 videoRatio:(int)arg4 videoLength:(int)arg5 nCallback:(struct IWXConfCallback *)arg6;
+ (struct IWXConfService *)getConfInst;

@end

