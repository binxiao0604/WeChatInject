//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ChatroomMuteExptCacheItem : MMObject <PBCoding>
{
    _Bool isHardCodeExpt;
    unsigned int chatroomExptFlag;
    unsigned int chatroomExptStartTime;
    unsigned int isFinishExpt;
    NSMutableArray *chatroomList;
}

+ (void)initialize;
+ (void)PBArrayAdd_chatroomList;
+ (void)PBArrayAdd_isHardCodeExpt;
+ (void)PBArrayAdd_isFinishExpt;
+ (void)PBArrayAdd_chatroomExptStartTime;
+ (void)PBArrayAdd_chatroomExptFlag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *chatroomList; // @synthesize chatroomList;
@property(nonatomic) _Bool isHardCodeExpt; // @synthesize isHardCodeExpt;
@property(nonatomic) unsigned int isFinishExpt; // @synthesize isFinishExpt;
@property(nonatomic) unsigned int chatroomExptStartTime; // @synthesize chatroomExptStartTime;
@property(nonatomic) unsigned int chatroomExptFlag; // @synthesize chatroomExptFlag;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

