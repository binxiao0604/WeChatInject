//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMBaseSessionStorage, NSMutableDictionary;

@interface WCFinderMsgSessionCellDataSource : NSObject
{
    _Bool _asFinderAuthor;
    _Bool _isGreetMsgSessionList;
    MMBaseSessionStorage *_sessionStorage;
    NSMutableDictionary *_sessionId2ViewModelDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sessionId2ViewModelDic; // @synthesize sessionId2ViewModelDic=_sessionId2ViewModelDic;
@property(retain, nonatomic) MMBaseSessionStorage *sessionStorage; // @synthesize sessionStorage=_sessionStorage;
@property(nonatomic) _Bool isGreetMsgSessionList; // @synthesize isGreetMsgSessionList=_isGreetMsgSessionList;
@property(nonatomic) _Bool asFinderAuthor; // @synthesize asFinderAuthor=_asFinderAuthor;
- (void)openChatWithViewModel:(id)arg1 fromNav:(id)arg2 chatContentReporter:(id)arg3;
- (void)openGreetMsgSessionViewControllerFromNav:(id)arg1;
- (id)sessionCellViewModelAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (long long)sessionCount;
- (id)initWithSessionStorage:(id)arg1;
- (id)description;

@end

