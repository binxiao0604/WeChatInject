//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCStoryBaseCGIObj.h"

@class NSString;

@interface WCStoryChatRoomSyncCgiObj : WCStoryBaseCGIObj
{
    CDUnknownBlockType _syncStrangerBlock;
    NSString *_userName;
    NSString *_chatRoomName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType syncStrangerBlock; // @synthesize syncStrangerBlock=_syncStrangerBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithUserName:(id)arg1 chatRoomName:(id)arg2;
- (id)syncInfoFromContact:(id)arg1;
- (void)createRequest;
- (id)init;

@end

