//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface MMLocationWeAppsManager : MMUserService <MMServiceProtocol>
{
    NSMutableArray *_m_weAppList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_weAppList; // @synthesize m_weAppList=_m_weAppList;
- (void)printLog:(id)arg1;
- (id)getFilteredWeAppList:(id)arg1;
@property(readonly, nonatomic) NSArray *weAppList;
- (void)updateWeAppList:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

