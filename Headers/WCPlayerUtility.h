//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPlayerUtility : NSObject
{
}

+ (id)getProcessStateName:(unsigned long long)arg1;
+ (id)getDecoderTypeName:(long long)arg1;
+ (id)getTransportProtocolName:(int)arg1;
+ (id)getVideoCodecName:(unsigned int)arg1;
+ (unsigned int)getAndIncPlayCount:(id)arg1;
+ (float)getPlayerDefaultLazyCheckSec;
+ (_Bool)canParseDurationWithMP4Parser;
+ (_Bool)IsCloseBufferProtect;
+ (_Bool)IsUseMMP4Parser;

@end

