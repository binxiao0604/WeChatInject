//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol VoicePrintSwitchOpDelegate <NSObject>

@optional
- (void)OnSwitchOpErrorWithScene:(unsigned int)arg1 andErrorCode:(int)arg2;
- (void)OnSwitchOp:(int)arg1 andSwitch:(int)arg2 withScene:(unsigned int)arg3;
@end

