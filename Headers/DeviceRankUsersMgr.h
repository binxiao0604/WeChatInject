//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface DeviceRankUsersMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray *m_deviceRankUserList;
    _Bool m_bLoaded;
}

- (void).cxx_destruct;
- (void)updateOrAddCoverUrl:(id)arg1 WithUsername:(id)arg2;
- (id)getCoverUrlByUserName:(id)arg1;
- (void)SaveDeviceRankUsers;
- (id)getRankUserProfileFilePath;
- (void)tryLoadDeviceRankUsers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

