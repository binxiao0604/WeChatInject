//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BakChatMsgItem, NSArray;

@interface WXGBackupMessageWrapStruct : NSObject
{
    BakChatMsgItem *_bakchatMsgItem;
    NSArray *_mediaArray;
    long long _msgSvrID;
}

- (void).cxx_destruct;
@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(retain, nonatomic) NSArray *mediaArray; // @synthesize mediaArray=_mediaArray;
@property(retain, nonatomic) BakChatMsgItem *bakchatMsgItem; // @synthesize bakchatMsgItem=_bakchatMsgItem;

@end

