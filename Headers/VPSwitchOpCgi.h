//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol VoicePrintSwitchOpDelegate;

@interface VPSwitchOpCgi : MMObject <PBMessageObserverDelegate>
{
    unsigned int _curScene;
    id <VoicePrintSwitchOpDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoicePrintSwitchOpDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnResult:(unsigned int)arg1 andSwitch:(unsigned int)arg2 withScene:(unsigned int)arg3;
- (void)OnDenied;
- (void)OnError;
- (void)MakeEventByOpCode:(int)arg1;
- (void)swithOffWithScence:(unsigned int)arg1;
- (void)swithOpenWithScence:(unsigned int)arg1;
- (void)checkStatusWithScence:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

