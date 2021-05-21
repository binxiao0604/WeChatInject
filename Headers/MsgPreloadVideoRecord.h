//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MsgPreloadVideoRecord : NSObject <PBCoding>
{
    NSString *m_nsChatName;
    unsigned int m_uiLocalID;
    unsigned int m_uiAccessTime;
    _Bool m_bNonAutoClean;
    unsigned int m_uiHasPreloadSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bNonAutoClean;
+ (void)PBArrayAdd_m_uiHasPreloadSize;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_nsChatName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bNonAutoClean; // @synthesize m_bNonAutoClean;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize;
@property(nonatomic) unsigned int m_uiAccessTime; // @synthesize m_uiAccessTime;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
- (_Bool)isChatRoom;
- (id)pathForPreloadVideo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

